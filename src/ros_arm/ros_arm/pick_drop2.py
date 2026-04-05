import time
import math
import rclpy
import socket
from rclpy.logging import get_logger
from moveit.planning import MoveItPy, PlanRequestParameters
from geometry_msgs.msg import PoseStamped
from tf_transformations import quaternion_from_euler
from rclpy.action import ActionClient
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration
from aubo_ros2_common.srv import AuboArmControl 

def get_di_status(node, di_index):
    """
    获取指定 DI 端口的状态
    di_index: 字符串，例如 "0" 或 "1"
    返回: float 状态 (1.0 或 0.0)，如果失败返回 None
    """
    client = node.create_client(AuboArmControl, '/aubo_robot/arm_control')
    if not client.wait_for_service(timeout_sec=2.0):
        get_logger("gripper_node").error("无法连接到 IO 查询服务")
        return None

    req = AuboArmControl.Request()
    req.cmd = "GetDigitalInput"  # 对应的查询指令
    req.type = str(di_index)     # 端口索引

    future = client.call_async(req)
    rclpy.spin_until_future_complete(node, future, timeout_sec=2.0)
    
    if future.done():
        res = future.result()
        if res.result:
            return float(res.result) 
    return None

def is_grasp_successful(node):
    """
    综合判断逻辑：这里假设 DOI0 为 1 表示检测到物体
    你可以根据实际测试调整逻辑（比如 DI0==1 and DI1==0）
    """
    di2 = get_di_status(node, "2")
    # di1 = get_di_status(node, "1") # 如果需要多位判断则取消注释
    
    get_logger("gripper_node").info(f"检测到 DI2 状态: {di2}")
    
    # 逻辑判断：假设状态为 1.0 代表抓取成功
    if di2 is not None and di2 > 0.5:
        return True
    return False

# import socket
# import struct  # 在文件开头增加这个自带模块导入
# def get_di_via_modbus(ip="192.168.50.200", di_index=2):
#     """
#     终极精准版：直接读取 FC3 寄存器区，解析 DI 状态
#     """
#     try:
#         # 请求 FC3 (Holding Register), 从地址 0 开始读 10 个寄存器
#         # Transaction=1, Protocol=0, Length=6, Unit=1, FunctionCode=3, StartAddr=0, Quantity=10
#         req = struct.pack('>HHHBBHH', 1, 0, 6, 1, 3, 0, 10)
        
#         s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#         s.settimeout(0.5)
#         s.connect((ip, 502))
#         s.send(req)
#         resp = s.recv(1024)
#         s.close()

#         if len(resp) >= 13: # Modbus TCP 响应头(9字节) + 数据
#             # 根据刚才的扫描，DI 状态在寄存器 2
#             # 响应包中，寄存器 2 的数据在索引 13, 14 字节（每个寄存器2字节）
#             # 我们直接提取出第 2 个寄存器的数值 (索引 13 和 14)
#             # 字节索引：[9,10]是Reg0, [11,12]是Reg1, [13,14]是Reg2
#             reg2_value = struct.unpack('>H', resp[13:15])[0]
            
#             # 使用位运算检查对应位 (DI02 对应位 2，即值 4)
#             is_active = (reg2_value >> di_index) & 1
#             return bool(is_active)
#         return False
#     except Exception as e:
#         # 屏蔽无关紧要的报错，保持日志干净
#         return False
# def is_grasp_successful(node):
#     """
#     验证抓取状态
#     """
#     # 物理连接的是 DI02，所以 index 是 2
#     is_grasped = get_di_via_modbus(ip="192.168.50.200", di_index=2)
    
#     if is_grasped:
#         get_logger("gripper_node").info("✅ 检测到 DI02 信号：抓取成功！")
#     else:
#         get_logger("gripper_node").info("❌ 未检测到信号：抓取未到位...")
        
#     return is_grasped


def send_gripper_command(node, state):
    """
    通过 Aubo 控制箱 IO 控制夹爪
    state: 1.0 为闭合，0.0 为张开
    """
    # 1. 创建 Service 客户端
    client = node.create_client(AuboArmControl, '/aubo_robot/arm_control')
    
    # 2. 等待服务上线
    if not client.wait_for_service(timeout_sec=5.0):
        get_logger("gripper_node").error("Aubo 控制服务未找到！请检查驱动是否正常启动。")
        return

    # 3. 构造请求参数 (必须和你命令行测通的参数完全一致)
    req = AuboArmControl.Request()
    req.cmd = "SetDigitalOutput"
    req.type = "0"              # "0" 对应控制箱 DO00 端口
    req.joints = [float(state)]  # 1.0 合，0.0 开
    
    # 4. 发送请求
    get_logger("gripper_node").info(f"正在发送 IO 指令: DO00 -> {state}")
    future = client.call_async(req)
    
    # 因为主流程在跑 MoveIt，这里我们等待几秒让物理动作执行完
    # 注意：IO控制没有状态反馈，必须通过 sleep 预留物理运动时间
    time.sleep(1.2) 
    return future

    # client = ActionClient(node, FollowJointTrajectory, '/hand_controller/follow_joint_trajectory')
    # if not client.wait_for_server(timeout_sec=5.0):
    #     get_logger("gripper_node").error("夹爪控制器服务未找到！")
    #     return

    # goal = FollowJointTrajectory.Goal()
    # traj = JointTrajectory()
    # # 确保这里关节名left_outer_knuckle_joint与 ros2_controllers.yaml 中 hand_controller 管理的关节名一致
    # traj.joint_names = ['afinger1_joint'] 
    
    # point = JointTrajectoryPoint()
    # point.positions = [position]
    # point.time_from_start = Duration(sec=1, nanosec=0)
    
    # traj.points = [point]
    # goal.trajectory = traj
    
    # client.send_goal_async(goal)
    # get_logger("gripper_node").info(f"已发送夹爪指令: position={position}")

def create_pose_stamped(x, y, z, roll, pitch, yaw, frame_id="base_link"):
    """辅助函数：创建一个 PoseStamped 消息"""
    pose = PoseStamped()
    pose.header.frame_id = frame_id
    pose.header.stamp = rclpy.clock.Clock().now().to_msg()
    
    pose.pose.position.x = x
    pose.pose.position.y = y
    pose.pose.position.z = z
    
    q = quaternion_from_euler(
        roll * math.pi / 180.0, 
        pitch * math.pi / 180.0, 
        yaw * math.pi / 180.0
    )
    pose.pose.orientation.x = q[0]
    pose.pose.orientation.y = q[1]
    pose.pose.orientation.z = q[2]
    pose.pose.orientation.w = q[3]
    return pose

def plan_and_execute(robot, planning_component, logger, sleep_time=1.0, planning_time=20.0):
    """辅助函数：规划并执行轨迹"""
    logger.info(f"正在为组 {planning_component.planning_group_name} 规划路径...")
    
    plan_params = PlanRequestParameters(robot, planning_component.planning_group_name)
    plan_params.planning_pipeline = "ompl"
    plan_params.planner_id = "RRTConnect"
    plan_params.planning_time = planning_time
    plan_params.planning_attempts = 50
    plan_params.max_velocity_scaling_factor = 0.3 #0.3
    plan_params.max_acceleration_scaling_factor = 0.15 #0.15
    
    plan_result = planning_component.plan(single_plan_parameters=plan_params)
    
    if plan_result:
        logger.info("规划成功，开始执行...")
        robot.execute(plan_result.trajectory, controllers=[])
    else:
        logger.error("规划失败！请检查坐标是否可达。")
    
    time.sleep(sleep_time)

HOST = '0.0.0.0' 
PORT = 8888

def main():
    rclpy.init()
    logger = get_logger("moveit_py_pose_control")
    logger.info("等待控制器就绪...")
    time.sleep(5.0)
    
    gripper_node = rclpy.create_node('gripper_control_node')
    robot = MoveItPy(node_name="moveit_py_node")
    arm_group = robot.get_planning_component("arm")
    MY_END_EFFECTOR = "wrist3_Link" 
    

    logger.info("步骤1：移动到指定的末端位姿")
    target_pose = create_pose_stamped(x=0.4, y=0.0, z=0.4, roll=0.0, pitch=180.0, yaw=0.0)
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
    plan_and_execute(robot, arm_group, logger, planning_time=20.0)
    
    # while not is_grasp_successful(gripper_node):
    #     send_gripper_command(gripper_node, 0.0)       # 确保夹爪打开
    #     time.sleep(2)
        
    #     logger.info("步骤2：移动到指定的末端位姿")
    #     target_pose = create_pose_stamped(x=0.4, y=0.0, z=0.3, roll=0.0, pitch=180.0, yaw=0.0) #z=0.15
    #     arm_group.set_start_state_to_current_state()
    #     arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
    #     plan_and_execute(robot, arm_group, logger, planning_time=20.0)
    #     time.sleep(2)
        
    #     logger.info("步骤3：闭合手爪")
    #     send_gripper_command(gripper_node, 1.0) # 1.0
    #     time.sleep(2)
    
    logger.info("步骤2：移动到指定的末端位姿")
    target_pose = create_pose_stamped(x=0.4, y=0.0, z=0.26, roll=0.3, pitch=180.0, yaw=0.0) #x=0.4 y=0.0 z=0.15/0.3
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
    plan_and_execute(robot, arm_group, logger, planning_time=20.0)
    
    
    logger.info("步骤3：闭合手爪")
    send_gripper_command(gripper_node, 1.0) # 1.0
    time.sleep(2)
    
    logger.info("步骤4：带着物体移动到另一处")
    target_pose_2 = create_pose_stamped(x=0.4, y=0.4, z=0.4, roll=0.0, pitch=180.0, yaw=0.0)
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(pose_stamped_msg=target_pose_2, pose_link=MY_END_EFFECTOR)
    plan_and_execute(robot, arm_group, logger, planning_time=20.0)

    logger.info("步骤5：打开手爪 (IO控制)")
    send_gripper_command(gripper_node, 0.0) # 0.0 
    time.sleep(2)
    
    # logger.info("步骤6：回到 Home 位置")
    # arm_group.set_start_state_to_current_state()
    # arm_group.set_goal_state(configuration_name="home")
    # plan_and_execute(robot, arm_group, logger)

    logger.info("全部流程已完成")
    rclpy.shutdown()

if __name__ == "__main__":
    main()


