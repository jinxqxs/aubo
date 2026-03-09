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

bool AuboRos2Driver::connectArmController()
{
  int ret = AuboErrorCodes::AUBO_OK;

  string server_host;

  if (this->get_parameter("robot_ip", server_host))
  {
    RCLCPP_INFO(this->get_logger(), "robot ip: %s", server_host.c_str());
  }
  else
  {
    RCLCPP_INFO(this->get_logger(), "robot ip: %s", server_host.c_str());
    server_host = "192.168.29.2";
  }

  // login
  rpc_cli = std::make_shared<RpcClient>();
  rpc_cli->setRequestTimeout(1000);

  int max_link_times = 5;
  int count = 0;
  do
  {
    count++;
    ret = rpc_cli->connect(server_host, 30004);
  } while (ret != AuboErrorCodes::AUBO_OK && count < max_link_times);

  if (ret == AuboErrorCodes::AUBO_OK)
  {
    rpc_cli->login("aubo", "123456");
    rpc_cli->setEventHandler([this](int event)
                             { RCLCPP_INFO(this->get_logger(), "aubo rpc event id: %d", event); });
    robot_name = rpc_cli->getRobotNames().front();

    RCLCPP_INFO(this->get_logger(), "robot name: %s", robot_name.c_str());

    rpc_cli->getRuntimeMachine()->start();

    rtde_cli = std::make_shared<RtdeClient>();
    rtde_cli->connect(server_host, 30010);
    rtde_cli->login("aubo", "123456");
    rtde_cli->setEventHandler([this](int event)
                              { RCLCPP_INFO(this->get_logger(), "aubo rtde event id: %d", event); });
    int status_topic = rtde_cli->setTopic(false,
                                          {"R1_robot_mode", "R1_safety_mode", "runtime_state", "R1_actual_main_voltage", "R1_actual_robot_voltage", "R1_collision_level", "R1_operationalModeSelectorInput", "R1_message"},
                                          50, 7);

    rtde_cli->subscribe(status_topic, [this](InputParser &parser)
                        {
        std::unique_lock<std::mutex> lck(rtde_mtx_);
        robot_mode_ = parser.popRobotModeType();
        safety_mode_ = parser.popSafetyModeType();
        runtime_state_ = parser.popRuntimeState();
        actual_main_voltage_ = parser.popDouble();
        actual_robot_voltage_ = parser.popDouble();
        collision_level_ = parser.popInt16();
        operational_mode_ = parser.popOperationalModeType();
        robot_msg_ = parser.popRobotMsgVector(); });

    int joint_topic = rtde_cli->setTopic(false,
                                         {"R1_target_q", "R1_actual_q", "R1_target_current", "R1_actual_current", "R1_target_moment", "R1_joint_torque_sensor", "R1_target_TCP_pose", "R1_actual_TCP_pose", "R1_actual_tool_pose", "R1_actual_TCP_speed"},
                                         50, 8);

    rtde_cli->subscribe(joint_topic, [this](InputParser &parser)
                        {
      std::unique_lock<std::mutex> lck(rtde_mtx_);
      target_joint_ = parser.popVectorDouble();
      actual_joint_ = parser.popVectorDouble();
      target_current_ = parser.popVectorDouble();
      actual_current_ = parser.popVectorDouble();
      target_torque_ = parser.popVectorDouble();
      actual_torque_ = parser.popVectorDouble();
      target_tcp_pose_ = parser.popVectorDouble();
      actual_tcp_pose_ = parser.popVectorDouble();
      actual_tool_pose_ = parser.popVectorDouble();
      actual_tcp_speed_ = parser.popVectorDouble(); });

    std::cout << "login success." << std::endl;

    RCLCPP_INFO(this->get_logger(), "SoftwareVersion: %d", rpc_cli->getSystemInfo()->getControlSoftwareVersionCode());
    RCLCPP_INFO(this->get_logger(), "InterfaceVersion: %d", rpc_cli->getSystemInfo()->getInterfaceVersionCode());
    RCLCPP_INFO(this->get_logger(), "ControlSoftwareBuildDate: %s", rpc_cli->getSystemInfo()->getControlSoftwareBuildDate().c_str());
    RCLCPP_INFO(this->get_logger(), "ControlSoftwareVersionHash: %s", rpc_cli->getSystemInfo()->getControlSoftwareVersionHash().c_str());
    RCLCPP_INFO(this->get_logger(), "ControlSystemTime: %ld", rpc_cli->getSystemInfo()->getControlSystemTime());

    return true;
  }
  else
  {
    std::cout << "login failed." << std::endl;
    RCLCPP_INFO(this->get_logger(), "login failed.");
    return false;
  }

  return true;
}

void AuboRos2Driver::waitForRobotMode(RobotModeType target_mode)
{
  int count = 0;
  auto current_mode = rpc_cli->getRobotInterface(robot_name)->getRobotState()->getRobotModeType();

  while (current_mode != target_mode && count < 10)
  {
    cout << "arm current mode: " << current_mode << endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    current_mode = rpc_cli->getRobotInterface(robot_name)->getRobotState()->getRobotModeType();
    count ++;
  }
}

bool AuboRos2Driver::jointMove(std::vector<double> &target_joints, const double &speed_fraction)
{
  int ret = AuboErrorCodes::AUBO_OK;
  bool result = false;

  rpc_cli->getRobotInterface(robot_name)->getMotionControl()->setSpeedFraction(speed_fraction == 0.0? 1:speed_fraction);

  ret = rpc_cli->getRobotInterface(robot_name)->getMotionControl()->moveJoint(target_joints, MAX_JOINT_ACC, MAX_JOINT_VEL, 0, 0);
  if (ret == AuboErrorCodes::AUBO_OK)
  {
    RCLCPP_INFO(this->get_logger(), "send movej success.");
  }
  else
  {
    RCLCPP_INFO(this->get_logger(), "send movej failed. %d", ret);
    return false;
  }

  for (int i = 0; i < 6; i++)
    target_joints[i] = target_joints[i];

  const int max_retry_count = 50;
  int cnt = 0;

  int exec_id = rpc_cli->getRobotInterface(robot_name)->getMotionControl()->getExecId();

  while (exec_id == -1)
  {
    if (cnt++ > max_retry_count)
    {
      return false;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    exec_id = rpc_cli->getRobotInterface(robot_name)->getMotionControl()->getExecId();
  }

  while (rpc_cli->getRobotInterface(robot_name)->getMotionControl()->getExecId() != -1)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
  }

  result = true;
  RCLCPP_INFO(this->get_logger(), "move joint success");
  return result;
}

void AuboRos2Driver::handleArmStopped()
{
  if (move_type_ == MoveType::Trajectory)
  {
    if (moveit_controller_queue_.size_approx() > 0)
    {
      servo_joint_state_ = ServoJointState::UserStopped;

      std_msgs::msg::String msg;
      msg.data = "stop";
      moveit_execution_pub_->publish(msg);

      //rpc_cli->getRobotInterface(robot_name)->getMotionControl()->setServoMode(false);

      while (moveit_controller_queue_.size_approx() > 0)
      {
        moveit_controller_queue_.pop();
      }
    }

    rpc_cli->getRobotInterface(robot_name)->getMotionControl()->setServoMode(false);
  }
  else if (move_type_ == MoveType::MoveJ)
    rpc_cli->getRobotInterface(robot_name)->getMotionControl()->stopJoint(MAX_JOINT_ACC);
  else
    RCLCPP_INFO(this->get_logger(), "idle");

  start_move_ = false;
  move_type_ = MoveType::Idel;
  RCLCPP_INFO(this->get_logger(), "handle arm stopped");
}
