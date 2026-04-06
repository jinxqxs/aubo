ROS 2 Jazzy 机械臂仿真与控制项目
![alt text](https://img.shields.io/badge/ROS2-Jazzy-blue)
![alt text](https://img.shields.io/badge/Ubuntu-24.04-orange)
![alt text](https://img.shields.io/badge/License-MIT-green.svg)

本项目是一个基于 ROS 2 Jazzy 和 Ubuntu 24.04 的机械臂开发项目，集成了 MoveIt 2 运动规划、Gazebo 物理仿真以及 ros2_control 硬件控制。

🚀 最新环境支持：适配 Ubuntu 24.04 和 ROS 2 Jazzy Jalisco。

🤖 全流程集成：涵盖从 URDF 建模、Gazebo 仿真到 MoveIt 2 轨迹规划。

🐍 Python 支持：集成 moveit_py，方便使用 Python 进行运动控制开发。

🐳 开箱即用：提供预配置的 Docker 镜像，无需手动搭建环境。

🛠️ 我的本机环境（供参考）

Ubuntu 24.04 LTS

ROS 2: Jazzy Jalisco

Python: 3.12+

vscode

项目运行需要以下 ROS 2 软件包：\
Bash命令:\
sudo apt update && sudo apt install -y \
  ros-jazzy-moveit \
  ros-jazzy-moveit-ros-visualization \
  ros-jazzy-ros-gz \
  ros-jazzy-controller-manager \
  ros-jazzy-ros2-control \
  ros-jazzy-ros2-controllers \
  ros-jazzy-joint-state-broadcaster \
  ros-jazzy-joint-trajectory-controller \
  ros-jazzy-moveit-py \
  ros-jazzy-gz-ros2-control \
  ros-jazzy-tf-transformations \
  python3-transforms3d
  
🚀 快速上手（如果你不想在本地配置繁琐的 ROS 环境，可以直接拉取并运行已经配置好的 Docker 镜像）\
拉取镜像\
docker pull jinxqxs/ros_srtp:latest\
运行镜像 (请确保已安装 NVIDIA Docker 以支持图形转发，或根据需要配置 X11)\
docker run -it --rm --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" jinxqxs/ros_srtp

📖 运行指南
1. 启动仿真环境 (Gazebo + MoveIt 2)\
ros2 launch <package_name> demo_gazebo.launch.py
2. 运行 Python 控制脚本\
ros2 run <package_name> <your_python_script>.py

📂 项目结构\
code
Text
.\
├── src\
│   ├── <package_description>  # 机器人描述文件 (URDF/Mesh)\
│   ├── <package_moveit_config> # MoveIt 配置包\
│   ├── <package_bringup>       # 启动脚本\
│   └── <package_scripts>       # Python 控制脚本 (moveit_py)\
└── README.md

🤝 致谢与参考\
本项目在开发过程中参考了以下优秀资源和社区：\
B站 - 技术爬爬虾 (环境配置与核心逻辑)\
古月居 GuyueHome (ROS 2 理论与实战)\
鱼香ROS (一键安装脚本与社区支持)\
MoveIt 2 Documentation

📄 开源协议\
本项目遵循 MIT License。
