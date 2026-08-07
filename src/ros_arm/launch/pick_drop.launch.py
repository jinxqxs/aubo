import os
import yaml
from moveit_configs_utils import MoveItConfigsBuilder
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, TextSubstitution

def generate_launch_description():
    this_package_path = get_package_share_directory('ros_arm')
    packagepath=get_package_share_directory('aubo_i5h_moveit1')
    
    moveit_config = (MoveItConfigsBuilder("aubo_i5H", package_name="aubo_i5h_moveit1")
    .robot_description("config/aubo_i5H.urdf.xacro")
    .moveit_cpp(file_path=this_package_path+"/config/moveit_cpp.yaml")
    .robot_description_semantic("config/aubo_i5H.srdf").to_moveit_configs()
    )
    
    robot_desc_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="both",
        parameters=[
            moveit_config.robot_description,
            {'use_sim_time': False},
            {"publish_frequency": 30.0},
        ],
    )

    rviz_node = Node(
    package="rviz2",
    executable="rviz2",
    output="log",
    arguments=["-d", packagepath+'/config/moveit.rviz'],
    parameters=[
        moveit_config.robot_description,
        moveit_config.robot_description_semantic,
        moveit_config.robot_description_kinematics,
        moveit_config.planning_pipelines,
        moveit_config.joint_limits,
        {'use_sim_time': False},
    ],
    )

    controller_spawner_node = Node(
    package="controller_manager",
    executable="spawner",
    arguments=[
        "joint_state_broadcaster","arm_controller","hand_controller",
    ],
    )

    robot_ip_arg = DeclareLaunchArgument(
        'robot_ip',
        default_value=TextSubstitution(text='192.168.50.200'), 
        description='Aubo i5h robot IP address'
    )
     
    aubo_driver_node = Node(
        package='aubo_ros2_driver',
        executable='aubo_ros2_driver',  
        name='aubo_ros2_driver',
        output='screen',
        parameters=[
            {'robot_ip': LaunchConfiguration('robot_ip')},
            {'control_mode': 'position'},
            {'speed_scaling': 0.1},
            {'trajectory_action_name': '/follow_joint_trajectory'}
        ],
    ) 
     
    move_group_node = Node(
    package="moveit_ros_move_group",
    executable="move_group",
    # output="screen",
    arguments=["--ros-args", "--log-level", "fatal"], 
    parameters=[moveit_config.to_dict(),
        {'use_sim_time': False},
        {"joint_state_topic": "/joint_states"}, 
        ],
    )
    
    pick_drop_node = Node(
        name="ros_arm",
        package="ros_arm",
        executable="pick_drop_merge",
        output="both",
        parameters=[moveit_config.to_dict(),
            {'use_sim_time': False}],
    )
    
    aubo_trajectory_action_node = Node(
        package="aubo_ros2_trajectory_action",
        executable="aubo_ros2_trajectory_action",
        output="screen",
        parameters=[{'controller_joint_names':['shoulder_joint', 'upperArm_joint', 'foreArm_joint', 
                    'wrist1_joint', 'wrist2_joint', 'wrist3_joint'],'robot_name': 'aubo_i5H'}
                    ],
        arguments=["arm_controller/follow_joint_trajectory"],
    )

    return LaunchDescription([
        robot_desc_node,      #发布机械臂状态
        rviz_node,            #启动RViz        
        controller_spawner_node, #启动控制器

        robot_ip_arg,
        aubo_driver_node,
        move_group_node,      #启动move_group节点
        aubo_trajectory_action_node,
        pick_drop_node,      #启动抓取节点
    ])
    