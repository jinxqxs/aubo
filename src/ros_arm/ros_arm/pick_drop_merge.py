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
            return float(res.result_code) 
    return None

def is_grasp_successful(node):
    """
    综合判断逻辑：这里假设 DOI0 为 1 表示检测到物体
    你可以根据实际测试调整逻辑（比如 DI0==1 and DI1==0）
    """
    di0 = get_di_status(node, "0")
    # di1 = get_di_status(node, "1") # 如果需要多位判断则取消注释
    
    get_logger("gripper_node").info(f"检测到 DI0 状态: {di0}")
    
    # 逻辑判断：假设状态为 1.0 代表抓取成功
    if di0 is not None and di0 > 0.5:
        return True
    return False

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
    
    while rclpy.ok():
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            s.bind((HOST, PORT))
            s.listen()
            logger.info("\n>>> 等待 另一台电脑发送坐标...")
            conn, addr = s.accept()
            
            with conn:
                logger.info(f"✓ 已连接: {addr}")
                data = conn.recv(1024)
                msg = data.decode('utf-8').strip()
                logger.info(f"收到数据: {msg}")
                xx, yy, zz, tt = msg.split(',')

        match tt:
            case "1":
                xx_lay=0.4;yy_lay=0.4;zz_lay=0.4
            case "2":
                xx_lay=0.4;yy_lay=0.4;zz_lay=0.4
            case "3":
                xx_lay=0.4;yy_lay=0.4;zz_lay=0.4
            case _:
                xx_lay=0.4;yy_lay=0.4;zz_lay=0.4
                
        logger.info("步骤1：移动到拍照位姿")
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
            
        #     logger.info("步骤3：闭合手爪")
        #     send_gripper_command(gripper_node, 1.0) # 1.0
        #     time.sleep(2)
        xx_=float(xx);yy_=float(yy);zz_=float(zz)
        logger.info("步骤2：移动到抓取位姿上方")
        target_pose = create_pose_stamped(x=xx_, y=0-yy_, z=0.4, roll=0.3, pitch=180.0, yaw=0.0) #x=0.4 y=0.0 z=0.15/0.3
        arm_group.set_start_state_to_current_state()
        arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
        plan_and_execute(robot, arm_group, logger, planning_time=20.0)
        
        logger.info("步骤3：移动到抓取位姿")
        target_pose = create_pose_stamped(x=xx_, y=0-yy_, z=0.4-zz_, roll=0.3, pitch=180.0, yaw=0.0) #x=0.4 y=0.0 z=0.15/0.3
        arm_group.set_start_state_to_current_state()
        arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
        plan_and_execute(robot, arm_group, logger, planning_time=20.0)
        
        logger.info("步骤4：闭合手爪")
        send_gripper_command(gripper_node, 1.0) # 1.0
        time.sleep(2)
        
        logger.info("步骤5：移动到抓取位姿上方")
        target_pose = create_pose_stamped(x=xx_, y=0-yy_, z=0.4, roll=0.3, pitch=180.0, yaw=0.0) #x=0.4 y=0.0 z=0.15/0.3
        arm_group.set_start_state_to_current_state()
        arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
        plan_and_execute(robot, arm_group, logger, planning_time=20.0)
        
        
        logger.info("步骤6：带着物体移动到盒子处")
        target_pose_2 = create_pose_stamped(x=xx_lay, y=yy_lay, z=zz_lay, roll=0.0, pitch=180.0, yaw=0.0) #x=0.4 y=0.4 z=0.4
        arm_group.set_start_state_to_current_state()
        arm_group.set_goal_state(pose_stamped_msg=target_pose_2, pose_link=MY_END_EFFECTOR)
        plan_and_execute(robot, arm_group, logger, planning_time=20.0)

        logger.info("步骤7：打开手爪 (IO控制)")
        send_gripper_command(gripper_node, 0.0) # 0.0 
        time.sleep(2)
        
        logger.info("全部流程已完成")
    rclpy.shutdown()

if __name__ == "__main__":
    main()


