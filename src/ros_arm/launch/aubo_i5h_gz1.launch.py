from moveit_configs_utils import MoveItConfigsBuilder
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python.packages import get_package_prefix

def generate_launch_description():

    packagepath=get_package_share_directory('aubo_i5h_moveit1')
    print(packagepath)

    moveit_config = (MoveItConfigsBuilder("aubo_i5h",package_name="aubo_i5h_moveit1")
                     .robot_description(file_path=packagepath + "/config/aubo_i5H.urdf.xacro")
                     .robot_description_semantic(file_path=packagepath + "/config/aubo_i5H.srdf").to_moveit_configs()
    )
    
    gazebo_node=IncludeLaunchDescription(
        PythonLaunchDescriptionSource([get_package_share_directory('ros_gz_sim')+'/launch/gz_sim.launch.py']),
        launch_arguments=[('gz_args','empty.sdf -r --physics-engine gz-physics-bullet-featherstone-plugin')]
    )
    
    robot_to_gazebo_node=Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-string', moveit_config.robot_description['robot_description'],'-x', '0.0', '-y', '0.0', '-z', '0.1'],# 
    )

    clock_bridge_node=Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'],
        output='screen',
    )
    
    robot_desc_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[moveit_config.robot_description,
                    {'use_sim_time': True},
                    {'publish_frequency': 30.0},
                    {'publish_robot_description': True}
                ]
    )
    
    rviz_node=Node(
        package='rviz2',
        executable='rviz2',
        output="log",
        name='rviz2',
        arguments=['-d', packagepath+'/config/moveit.rviz'],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.planning_pipelines,
            {'use_sim_time': True},
        ]
    )
    
    ros2_control_node=Node(
        package="controller_manager",
        executable="ros2_control_node",
        name="controller_manager",     
        parameters=[packagepath + "/config/ros2_controllers.yaml",{'use_sim_time': True}],
        output="both",
    )
    
    controller_spawner_node=Node(
        package="controller_manager",
        executable="spawner",
        arguments=['joint_state_broadcaster','arm_controller','hand_controller', "--controller-manager", "/controller_manager"],
    )
    
    move_group_node=Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[moveit_config.to_dict(),{'use_sim_time': True}],
    )
    
    return LaunchDescription([
        gazebo_node,
        robot_to_gazebo_node,
        clock_bridge_node,
        robot_desc_node,
        rviz_node,
        # ros2_control_node,
        controller_spawner_node,
        move_group_node,
    ])
    