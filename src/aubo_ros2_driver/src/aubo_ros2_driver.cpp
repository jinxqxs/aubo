// Copyright 2023 Xie Shaosong
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "aubo_ros2_driver.h"

using namespace aubo_ros2_driver;

AuboRos2Driver::AuboRos2Driver():Node("aubo_ros2_driver")
{
  start_move_ = false;
  move_type_ = MoveType::Idel;

  using namespace std::placeholders;
  this->declare_parameter<std::string>("robot_ip", "127.0.0.1");

  joint_states_pub_ = this->create_publisher<aubo_ros2_common::msg::AuboJointStates>("/aubo_robot/joint_states", 10);
  tcp_pose_pub_ = this->create_publisher<aubo_ros2_common::msg::AuboTcpPose>("/aubo_robot/tcp_pose", 10);
  arm_states_pub_ = this->create_publisher<aubo_ros2_common::msg::AuboArmStates>("/aubo_robot/arm_states", 10);

  sensor_joint_states_pub_ = this->create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);
  fjt_feedback_pub_ = this->create_publisher<control_msgs::action::FollowJointTrajectory_Feedback>("/aubo_robot/fjt_feedback", 10);
  moveit_execution_pub_ = this->create_publisher<std_msgs::msg::String>("/aubo_robot/moveit_execution", 10);
  collision_level_pub_ = this->create_publisher<std_msgs::msg::Int16>("/aubo_robot/collision_level", 10);

  moveit_controller_sub_ = this->create_subscription<trajectory_msgs::msg::JointTrajectoryPoint>(
    "/aubo_robot/moveit_controller", 5000, std::bind(&AuboRos2Driver::moveitControllerCallback, this, _1));

  robot_control_sub_ = this->create_subscription<std_msgs::msg::String>(
    "/aubo_robot/robot_control", 10, std::bind(&AuboRos2Driver::robotControlCallback, this, _1));

  arm_control_srv_ = this->create_service<aubo_ros2_common::srv::AuboArmControl>("/aubo_robot/arm_control", std::bind(&AuboRos2Driver::armControlServiceCallback, this, _1, _2));

  states_pub_timer_ = create_wall_timer(100ms, std::bind(&AuboRos2Driver::intervalStatesCallback, this));
}

bool AuboRos2Driver::start()
{
  RCLCPP_INFO(this->get_logger(), "start the driver.");

  //1.connect arm controller
  bool ret = connectArmController();

  if (!ret)
  {
    RCLCPP_INFO(this->get_logger(), "connect arm failed.");
    return false;
  }

  moveit_controller_thread_ = new std::thread(std::bind(&AuboRos2Driver::moveitControllerThread, this));
  moveit_controller_thread_->detach();

  RCLCPP_INFO(this->get_logger(), "aubo driver started.");
  return true;
}

void AuboRos2Driver::intervalStatesCallback()
{
  std::unique_lock<std::mutex> lck(rtde_mtx_);

  // get joint states
  aubo_ros2_common::msg::AuboJointStates joint_states;
  for (int i = 0; i < 6; i++)
  {
    joint_states.actual_current.push_back(int(actual_current_[i] * 1000));
    joint_states.target_current.push_back(int(target_current_[i] * 1000));
    joint_states.actual_position.push_back(actual_joint_[i]);
    joint_states.target_position.push_back(target_joint_[i]);
    actual_joints_[i] = actual_joint_[i];
  }
  joint_states_pub_->publish(joint_states);

  // get tcp pose
  aubo_ros2_common::msg::AuboTcpPose tcp_pose;
  tcp_pose.actual_position.x = actual_tcp_pose_[0];
  tcp_pose.actual_position.y = actual_tcp_pose_[1];
  tcp_pose.actual_position.z = actual_tcp_pose_[2];
  tcp_pose.actual_rotation.x = actual_tcp_pose_[3];
  tcp_pose.actual_rotation.y = actual_tcp_pose_[4];
  tcp_pose.actual_rotation.z = actual_tcp_pose_[5];
  // tcp_pose.target_position.x = target_tcp_pose_[0];
  // tcp_pose.target_position.y = target_tcp_pose_[1];
  // tcp_pose.target_position.z = target_tcp_pose_[2];
  // tcp_pose.target_rotation.x = target_tcp_pose_[3];
  // tcp_pose.target_rotation.y = target_tcp_pose_[4];
  // tcp_pose.target_rotation.z = target_tcp_pose_[5];
  tcp_pose_pub_->publish(tcp_pose);

  // get arm states
  bool protective_stopped, collision_stopped, emergency_stopped;
  if (safety_mode_ == SafetyModeType::ProtectiveStop || safety_mode_ == SafetyModeType::SafeguardStop)
    protective_stopped = true;
  else
    protective_stopped = false;

  if (protective_stopped && (robot_msg_[0].code == 30014 || robot_msg_[0].code == 10022))
    collision_stopped = true;
  else
    collision_stopped = false;

  if (safety_mode_ == SafetyModeType::RobotEmergencyStop || safety_mode_ == SafetyModeType::SystemEmergencyStop)
    emergency_stopped = true;
  else
    emergency_stopped = false;

  aubo_ros2_common::msg::AuboArmStates arm_states;
  arm_states.move_type = move_type_;
  arm_states.collision_level = collision_level_;
  arm_states.arm_power_status = robot_mode_ == RobotModeType::Running ? 1 : 0;
  arm_states.collision_stopped = collision_stopped;
  arm_states.emergency_stopped = emergency_stopped;
  arm_states.singularity_stopped = false;
  arm_states.protective_stopped = protective_stopped;
  arm_states.in_motion = start_move_;
  arm_states_pub_->publish(arm_states);

  if (arm_states.emergency_stopped || arm_states.collision_stopped || arm_states.protective_stopped)
  {
    RCLCPP_INFO_ONCE(this->get_logger(), "emergency: %d, collsioin: %d, protective: %d stopped", emergency_stopped, collision_stopped, protective_stopped);
    if (move_type_ != MoveType::Idel)
      handleArmStopped();
  }

  // pub sensor joint states
  sensor_msgs::msg::JointState sensor_joint_states;
  sensor_joint_states.header.stamp = this->now();
  sensor_joint_states.name.resize(ARM_DOF);
  sensor_joint_states.position.resize(ARM_DOF);
  for (int i = 0; i < 6; i++)
  {
    sensor_joint_states.name[i] = joint_name_[i];
    sensor_joint_states.position[i] = actual_joint_[i];
  }
  sensor_joint_states_pub_->publish(sensor_joint_states);

  // pub fjt joint feedback
  control_msgs::action::FollowJointTrajectory_Feedback joint_feedback;
  joint_feedback.header.stamp = this->now();
  for (int i = 0; i < 6; i++)
  {
    joint_feedback.joint_names.push_back(joint_name_[i]);
    joint_feedback.actual.positions.push_back(actual_joint_[i]);
  }
  fjt_feedback_pub_->publish(joint_feedback);

  // pub collision level
  std_msgs::msg::Int16 collision_level;
  collision_level.data = collision_level_;
  collision_level_pub_->publish(collision_level);
}

void AuboRos2Driver::robotControlCallback(const std_msgs::msg::String::ConstSharedPtr msg)
{
  RCLCPP_INFO(this->get_logger(), "receive cmd: %s", msg->data.c_str());
  int ret = AuboErrorCodes::AUBO_OK;

  if (msg->data == "powerOn")
  {
    double mass = 0.0;
    std::vector<double> cog = {0.0, 0.0, 0.0};
    std::vector<double> aom(0.0, 0.0);
    std::vector<double> inertia = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotConfig()->setPayload(mass, cog, aom, inertia);
    auto robot_mode = rpc_cli->getRobotInterface(robot_name)->getRobotState()->getRobotModeType();
    cout << robot_mode << endl;
    if (robot_mode == RobotModeType::Running)
    {
      RCLCPP_INFO(this->get_logger(), "The arm is powered on and running.");
    }
    else
    {
      ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->poweron();
      if (ret == AuboErrorCodes::AUBO_OK)
        waitForRobotMode(RobotModeType::Idle);
      else
        RCLCPP_INFO(this->get_logger(),"powerOn failed");
      
      ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->startup();
      if (ret == AuboErrorCodes::AUBO_OK)
      {
        waitForRobotMode(RobotModeType::Running);
        RCLCPP_INFO(this->get_logger(), "startup success");
      }
      else
        RCLCPP_INFO(this->get_logger(),"startup failed");
    }
  }
  else if (msg->data == "powerOff")
  {
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->poweroff();
    if (ret == AuboErrorCodes::AUBO_OK)
    {
      waitForRobotMode(RobotModeType::PowerOff);
      RCLCPP_INFO(this->get_logger(), "poweroff success");
    }
    else
    {
      RCLCPP_INFO(this->get_logger(), "poweroff failed");
    }
  }
  else if (msg->data == "stop")
  {
    handleArmStopped();
  }
}

void AuboRos2Driver::armControlServiceCallback(const std::shared_ptr<aubo_ros2_common::srv::AuboArmControl::Request> request,
                                               std::shared_ptr<aubo_ros2_common::srv::AuboArmControl::Response> response)
{
  RCLCPP_INFO(this->get_logger(), "request cmd: %s", request->cmd.c_str());

  int ret = AuboErrorCodes::AUBO_OK;

  if (request->cmd == "powerOn")
  {
    double mass = 0.0;
    std::vector<double> cog = {0.0, 0.0, 0.0};
    std::vector<double> aom(0.0, 0.0);
    std::vector<double> inertia = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotConfig()->setPayload(mass, cog, aom, inertia);
    auto robot_mode = rpc_cli->getRobotInterface(robot_name)->getRobotState()->getRobotModeType();
    cout << robot_mode << endl;
    if (robot_mode == RobotModeType::Running)
    {
      RCLCPP_INFO(this->get_logger(), "The arm is powered on and running.");
    }
    else
    {
      ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->poweron();
      if (ret == AuboErrorCodes::AUBO_OK)
        waitForRobotMode(RobotModeType::Idle);
      else
        RCLCPP_INFO(this->get_logger(),"powerOn failed");
      
      ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->startup();
      if (ret == AuboErrorCodes::AUBO_OK)
      {
        waitForRobotMode(RobotModeType::Running);
        RCLCPP_INFO(this->get_logger(), "startup success");
      }
      else
        RCLCPP_INFO(this->get_logger(),"startup failed");
    }
  }
  else if (request->cmd == "powerOff")
  {
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->poweroff();
    if (ret == AuboErrorCodes::AUBO_OK)
    {
      waitForRobotMode(RobotModeType::PowerOff);
      RCLCPP_INFO(this->get_logger(), "poweroff success");
    }
    else
    {
      RCLCPP_INFO(this->get_logger(), "poweroff failed");
    }
  }
  else if (request->cmd == "stop")
  {
    handleArmStopped();
  }
  else if (request->cmd == "unlockProtectiveStop")
  {
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotManage()->setUnlockProtectiveStop();
    if (ret == AuboErrorCodes::AUBO_OK)
      RCLCPP_INFO(this->get_logger(), "unlock ProtectiveStop success.");
    else
      RCLCPP_INFO(this->get_logger(), "unlock ProtectiveStop failed.");
  }
  else if (request->cmd == "setTcp")
  {
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotConfig()->setTcpOffset(request->tcp_offset);
    if (ret == AuboErrorCodes::AUBO_OK)
      RCLCPP_INFO(this->get_logger(), "set tcp kinematics success.");
    else
      RCLCPP_INFO(this->get_logger(), "set tcp kinematics failed.");
  }
  else if (request->cmd == "setPayload")
  {
    double mass = request->payload;
    std::vector<double> cog = {0.0, 0.0, 0.0};
    std::vector<double> aom(0.0, 0.0);
    std::vector<double> inertia = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotConfig()->setPayload(mass, cog, aom, inertia);

    if (ret == AuboErrorCodes::AUBO_OK)
      RCLCPP_INFO(this->get_logger(), "set payload success.");
    else
      RCLCPP_INFO(this->get_logger(), "set payload failed.");
  }
  else if (request->cmd == "jointMove")
  {
    if (start_move_ || move_type_ != MoveType::Idel)
    {
      RCLCPP_INFO(this->get_logger(), "moving type: %d", move_type_);
      ret = AuboErrorCodes::AUBO_BAD_STATE;
      response->result = false;
      response->result_code = ret;
      return;
    }

    start_move_ = true;
    move_type_ = MoveType::MoveJ;

    // block
    bool result = jointMove(request->joints, request->speed_fraction);

    start_move_ = false;
    move_type_ = MoveType::Idel;

    if (result)
      ret = AuboErrorCodes::AUBO_OK;
    else
      ret = AuboErrorCodes::AUBO_BAD_STATE;
  }
  else if (request->cmd == "setCollisionLevel")
  {
    ret = rpc_cli->getRobotInterface(robot_name)->getRobotConfig()->setCollisionLevel(request->collision_level);
    if (ret == AuboErrorCodes::AUBO_OK)
      RCLCPP_INFO(this->get_logger(), "set collision level %d success.", request->collision_level);
    else
      RCLCPP_INFO(this->get_logger(), "set collision level failed.");
  }

  if (ret == AuboErrorCodes::AUBO_OK)
  {
    response->result = true;
    response->result_code = to_string(ret);
  }
  else
  {
    response->result = false;
    response->result_code = to_string(ret);
  }
}

void AuboRos2Driver::moveitControllerCallback(const trajectory_msgs::msg::JointTrajectoryPoint::ConstSharedPtr msg)
{
  PlanningState ps;
  for(int i = 0; i < 6; i++)
  {
    ps.joint_pos_[i] = msg->positions[i];
    ps.joint_vel_[i] = msg->velocities[i];
    ps.joint_acc_[i] = msg->accelerations[i];
  }

  if (moveit_controller_queue_.size_approx() == 0)
  {
    if (move_type_ != MoveType::Idel || start_move_)
    {
      RCLCPP_INFO(this->get_logger(), "moving type: %d", move_type_);
      return;
    }

    if (jointsCompare(ps.joint_pos_, actual_joints_, 0.02))
    {
      RCLCPP_INFO(this->get_logger(), "trajectory error");
      return;
    }
  }

  if (jointsCompare(ps.joint_pos_, last_recieve_ps.joint_pos_))
  {
    if (moveit_controller_queue_.size_approx() == 0)
      RCLCPP_INFO(this->get_logger(), "new trajectory!");
    last_recieve_ps = ps;
    moveit_controller_queue_.enqueue(ps);
  }
}
