import time
import math
import rclpy
from rclpy.logging import get_logger
from moveit.planning import MoveItPy, PlanRequestParameters
from geometry_msgs.msg import PoseStamped
from tf_transformations import quaternion_from_euler

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
    plan_params.max_velocity_scaling_factor = 0.3
    plan_params.max_acceleration_scaling_factor = 0.15
    
    plan_result = planning_component.plan(single_plan_parameters=plan_params)
    
    if plan_result:
        logger.info("规划成功，开始执行...")
        robot.execute(plan_result.trajectory, controllers=[])
    else:
        logger.error("规划失败！请检查坐标是否可达。")
    
    time.sleep(sleep_time)

def main():
    rclpy.init()
    logger = get_logger("moveit_py_pose_control")
    
    logger.info("等待控制器就绪...")
    time.sleep(5.0)
    
    robot = MoveItPy(node_name="moveit_py_node")
    arm_group = robot.get_planning_component("arm")
    
    
    MY_END_EFFECTOR = "wrist3_Link" 
    
    logger.info("步骤1：移动到指定的末端位姿")
    target_pose = create_pose_stamped(x=0.4, y=0.0, z=0.4, roll=0.0, pitch=180.0, yaw=0.0)
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
    plan_and_execute(robot, arm_group, logger, planning_time=20.0)
    
    logger.info("步骤2：移动到指定的末端位姿")
    target_pose = create_pose_stamped(x=0.4, y=0.0, z=0.35, roll=0.0, pitch=180.0, yaw=0.0) #z=0.15
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(pose_stamped_msg=target_pose, pose_link=MY_END_EFFECTOR)
    plan_and_execute(robot, arm_group, logger, planning_time=20.0)

    # logger.info("步骤3：闭合手爪")
    # hand_group.set_start_state_to_current_state()
    # hand_group.set_goal_state(configuration_name="close")
    # plan_and_execute(robot, hand_group, logger)

    logger.info("步骤4：带着物体移动到另一处")
    target_pose_2 = create_pose_stamped(x=0.4, y=0.4, z=0.4, roll=0.0, pitch=180.0, yaw=0.0)
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(pose_stamped_msg=target_pose_2, pose_link=MY_END_EFFECTOR)
    plan_and_execute(robot, arm_group, logger, planning_time=20.0)

    # logger.info("步骤5：打开手爪")
    # hand_group.set_start_state_to_current_state()
    # hand_group.set_goal_state(configuration_name="open")
    # plan_and_execute(robot, hand_group, logger)
    
    logger.info("步骤6：回到 Home 位置")
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(configuration_name="home")
    plan_and_execute(robot, arm_group, logger)

    logger.info("全部流程已完成")
    rclpy.shutdown()

if __name__ == "__main__":
    main()


