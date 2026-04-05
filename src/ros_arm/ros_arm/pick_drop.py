import time
import rclpy
from rclpy.logging import get_logger
from moveit.core.robot_state import RobotState
from moveit.planning import MoveItPy

from moveit_configs_utils import MoveItConfigsBuilder

def calculate(a,b,c,d,e,f):
    return [a*3.1415926/180,b*3.1415926/180,c*3.1415926/180,d*3.1415926/180,e*3.1415926/180,f*3.1415926/180]

def plan_and_execute(robot,plannint_component,logger,single_plan_parameters=None,multi_plan_parameters=None,sleep_time=3.0,):
    logger.info("planning trajectory")
   
    if multi_plan_parameters is not None:
        plan_result = plannint_component.plan(
            multi_plan_parameter=multi_plan_parameters
        )
    elif single_plan_parameters is not None:
        plan_result = plannint_component.plan(
            single_plan_parameter=single_plan_parameters
        )
    else:
        plan_result = plannint_component.plan()
    
    if plan_result:
        logger.info("Executing plan")
        robot_trajectory = plan_result.trajectory
        robot.execute(robot_trajectory,controllers=[])
    else:
        logger.error("planning failed")
    time.sleep(sleep_time)

def main():
    rclpy.init()
    logger=get_logger("moveit_py.pose_goal")
    
    robot=MoveItPy(node_name="moveit_py")
    arm_group=robot.get_planning_component("arm")
    hand_group=robot.get_planning_component("hand")
    logger.info("MoveItPy instance creater")
    
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state("home")

    plan_and_execute(robot,arm_group,logger,sleep_time=20.0,)
    
    robot_model=robot.get_robot_model()
    robot_state=RobotState(robot_model)
    #robot_state = robot.get_planning_scene_monitor().get_planning_scene().get_current_state()
    robot_state.set_joint_group_positions("arm",calculate(16,-6,136,50,92,102)) #0.29655556,0,2.3026666,0.7152222,1.5874444,1.7793333
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(robot_state=robot_state)
    plan_and_execute(robot,arm_group,logger,sleep_time=2.0,)
        
    hand_group.set_start_state_to_current_state()
    hand_group.set_goal_state("close")
    plan_and_execute(robot,hand_group,logger,sleep_time=3.0,)
     
    robot_state.set_joint_group_positions("arm", calculate(55,-11,101,21,85,145))
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state(robot_state=robot_state)
    plan_and_execute(robot,arm_group,logger,sleep_time=1.0,)
    
    hand_group.set_start_state_to_current_state()
    hand_group.set_goal_state("open")
    plan_and_execute(robot,hand_group,logger,sleep_time=3.0,)
    
    arm_group.set_start_state_to_current_state()
    arm_group.set_goal_state("home")
    plan_and_execute(robot,arm_group,logger,sleep_time=3.0,)
    
    logger.info('运动完成')
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()
    
    
    
