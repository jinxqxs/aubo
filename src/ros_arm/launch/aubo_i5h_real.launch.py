import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command, TextSubstitution
from launch_ros.parameter_descriptions import ParameterValue
from launch.conditions import IfCondition  

def generate_launch_description():
   
    robot_ip_arg = DeclareLaunchArgument(
        'robot_ip',
        default_value=TextSubstitution(text='192.168.1.100'), 
        description='Aubo i5h robot IP address'
    )

    
    packagepath = get_package_share_directory('aubo_description')
    urdf_path = os.path.join(packagepath, 'urdf', 'aubo_i5H.urdf')
    
    if not os.path.exists(urdf_path):
        print(f"警告：URDF文件不存在 → {urdf_path}")
    
    with open(urdf_path, 'r') as f:
        robot_description_str = f.read()
    robot_description = ParameterValue(robot_description_str, value_type=str)

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}],
        output='screen'
    )

    aubo_driver_node = Node(
        package='aubo_ros2_driver',
        executable='aubo_ros2_driver',  # 正确的可执行文件名
        name='aubo_ros2_driver',
        output='screen',
        parameters=[
            {'robot_ip': LaunchConfiguration('robot_ip')},
            {'control_mode': 'position'},
            {'speed_scaling': 0.1},
            {'joint_topic_name': '/joint_states'}
        ],
        namespace='aubo_i5h'  # 避免参数冲突
    )

    rviz_config_path = os.path.join(
        os.path.dirname(os.path.realpath(__file__)), 
        '../config/aubo_i5h.rviz'
    )
    rviz_arguments = ['-d', rviz_config_path] if os.path.exists(rviz_config_path) else []
    
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=rviz_arguments,
        output='screen',
        condition=IfCondition(LaunchConfiguration('with_rviz'))  # 现在IfCondition已定义
    )
    
    with_rviz_arg = DeclareLaunchArgument(
        'with_rviz',
        default_value=TextSubstitution(text='false'),
        description='Whether to launch RViz2'
    )

    return LaunchDescription([
        robot_ip_arg,
        with_rviz_arg,
        robot_state_publisher_node,
        aubo_driver_node,
        rviz_node
    ])