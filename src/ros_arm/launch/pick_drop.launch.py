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
    box_desc = open(this_package_path + '/config/box.sdf').read()
    case_desc = open(this_package_path + '/config/case.urdf').read()
    # joint_names_yaml_path = os.path.join(this_package_path, 'config', 'joint_names.yaml')
    # with open(joint_names_yaml_path, 'r') as f:
    #     joint_names_yaml = yaml.safe_load(f)  # 解析为字典，而非字符串

    gazebo_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [get_package_share_directory('ros_gz_sim'), '/launch/gz_sim.launch.py']
        ),
        launch_arguments=[('gz_args', '/home/autumn/srtp_arm_ws/src/aubo_i5h_moveit1/config/world.sdf -r --physics-engine gz-physics-bullet-featherstone-plugin')]
    )

    clock_bridge_node = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'],
        output='screen'
    )

    box_to_gazebo_node = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-string', box_desc, '-x', '0.4', '-y', '0.0', '-z', '0.025', '-name', 'box']
    )
    
    case_to_gazebo_node = Node(
    package='ros_gz_sim',
    executable='create',
    arguments=[ '-string', case_desc, '-x', '0.4', '-y', '0.4', '-z','0.01' ,'-name', 'case']
)
    
    moveit_config = (MoveItConfigsBuilder("aubo_i5H", package_name="aubo_i5h_moveit1")
    .robot_description("config/aubo_i5H.urdf.xacro")
    .moveit_cpp(file_path=this_package_path+"/config/moveit_cpp.yaml")
    .robot_description_semantic("config/aubo_i5H.srdf").to_moveit_configs()
    )

# 将机械臂添加到Gazebo
    robot_to_gazebo_node = Node(
    package="ros_gz_sim",
    executable="create",
    arguments=[ '-string', moveit_config.robot_description['robot_description'], '-x', '0.0', '-y', '0.0', '-z','0.0' ,'-name', 'arm']
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
    
    #ros2_controller manger节点
    ros2_control_node = Node(
    package="controller_manager",
    executable="ros2_control_node",
    parameters=[packagepath+"/config/ros2_controllers.yaml",
        {'use_sim_time': False}],
    output="both",
    )

    #启动关节状态发布器，arm组控制器，夹抓控制器
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
        # namespace='aubo_i5h'  # 避免参数冲突
    ) 
     
    move_group_node = Node(
    package="moveit_ros_move_group",
    executable="move_group",
    # output="screen",
    parameters=[moveit_config.to_dict(),
        {'use_sim_time': False},
        {"joint_state_topic": "/joint_states"}, 
        ],
    )
    
    pick_drop_node = Node(
        name="ros_arm",
        package="ros_arm",
        executable="pick_drop2",
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
        ## ros2_control_node,   #用不到
        # gazebo_node,          #启动gazebo
        # clock_bridge_node,    #时钟桥接节点，同步gazebo与ros时间
        # box_to_gazebo_node,   #添加零件模型到gazebo
        # case_to_gazebo_node,  #添加盒子模型到gazebo
        # robot_to_gazebo_node, #添加机械臂模型到gazebo
        robot_desc_node,      #发布机械臂状态
        rviz_node,            #启动RViz
        # controller_spawner_node, #启动控制器
        
        robot_ip_arg,
        aubo_driver_node,
        move_group_node,      #启动move_group节点
        aubo_trajectory_action_node,
        # pick_drop_node,      #启动抓取节点
    ])
    