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

#ifndef AUBO_DRIVER_H_
#define AUBO_DRIVER_H_

#include <string>
#include <thread>

#include "readerwriterqueue.h"

#include "aubo_sdk/rpc.h"
#include "aubo_sdk/rtde.h"
#include "aubo/robot/robot_state.h"
#include "aubo/math.h"

#include "aubo_ros2_metaType.h"

#include "rclcpp/rclcpp.hpp"
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>
#include <control_msgs/action/follow_joint_trajectory.hpp>

#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int16.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

#include "aubo_ros2_common/msg/aubo_arm_event.hpp"
#include "aubo_ros2_common/msg/aubo_arm_states.hpp"
#include "aubo_ros2_common/msg/aubo_joint_states.hpp"
#include "aubo_ros2_common/msg/aubo_tcp_pose.hpp"

#include "aubo_ros2_common/srv/aubo_arm_control.hpp"

using namespace std;
using namespace arcs::aubo_sdk;
using namespace arcs::common_interface;

namespace aubo_ros2_driver
{

class AuboRos2Driver : public rclcpp::Node
{
public:
  AuboRos2Driver();

  bool start();

private:
  bool connectArmController();
  void waitForRobotMode(RobotModeType target_mode);
  bool jointMove(std::vector<double> &target_joints, const double &speed_fraction = 1);
  void handleArmStopped();

  void moveitControllerThread();
  bool checkReachTarget();
  bool jointsCompare(double *joint1, double *joint2, double threshhold = 0.000001);

private:
  rclcpp::TimerBase::SharedPtr states_pub_timer_;
  rclcpp::Publisher<aubo_ros2_common::msg::AuboJointStates>::SharedPtr joint_states_pub_;
  rclcpp::Publisher<aubo_ros2_common::msg::AuboTcpPose>::SharedPtr tcp_pose_pub_;
  rclcpp::Publisher<aubo_ros2_common::msg::AuboArmStates>::SharedPtr arm_states_pub_;
  rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr sensor_joint_states_pub_;
  rclcpp::Publisher<control_msgs::action::FollowJointTrajectory_Feedback>::SharedPtr fjt_feedback_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr moveit_execution_pub_;
  rclcpp::Publisher<std_msgs::msg::Int16>::SharedPtr collision_level_pub_;

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr robot_control_sub_;
  rclcpp::Subscription<trajectory_msgs::msg::JointTrajectoryPoint>::SharedPtr moveit_controller_sub_;

  rclcpp::Service<aubo_ros2_common::srv::AuboArmControl>::SharedPtr arm_control_srv_;

  void intervalStatesCallback();

  void armControlServiceCallback(const std::shared_ptr<aubo_ros2_common::srv::AuboArmControl::Request> request,
                                 std::shared_ptr<aubo_ros2_common::srv::AuboArmControl::Response> response);

  void moveitControllerCallback(const trajectory_msgs::msg::JointTrajectoryPoint::ConstSharedPtr msg);

  void robotControlCallback(const std_msgs::msg::String::ConstSharedPtr msg);

private:
  RpcClientPtr rpc_cli;
  RtdeClientPtr rtde_cli;

  std::mutex rtde_mtx_;

  OperationalModeType operational_mode_ = OperationalModeType::Disabled;
  RobotControlModeType control_mode_ = RobotControlModeType::Unknown;
  RobotModeType robot_mode_ = RobotModeType::NoController;
  SafetyModeType safety_mode_ = SafetyModeType::Normal;
  RuntimeState runtime_state_ = RuntimeState::Stopped;
  double actual_main_voltage_ = 0;
  double actual_robot_voltage_ = 0;
  int collision_level_;
  RobotMsgVector robot_msg_;

  std::vector<double> target_joint_{std::vector<double>(
      6, 0.)};
  std::vector<double> actual_joint_{std::vector<double>(
      6, 0.)};
  std::vector<double> target_current_{std::vector<double>(
      6, 0.)};
  std::vector<double> actual_current_{std::vector<double>(
      6, 0.)};
  std::vector<double> target_torque_{std::vector<double>(
      6, 0.)};
  std::vector<double> actual_torque_{std::vector<double>(
      6, 0.)};
  std::vector<double> target_tcp_pose_{std::vector<double>(
      6, 0.)};
  std::vector<double> actual_tcp_pose_{std::vector<double>(
      6, 0.)};
  std::vector<double> actual_tool_pose_{std::vector<double>(
      6, 0.)};
  std::vector<double> actual_tcp_speed_{std::vector<double>(
      6, 0.)};

  std::string robot_name;

  RobotState robot_state_;
  
  double target_joints_[6];
  double actual_joints_[6];

  bool start_move_;
  int move_type_;

  int servo_joint_state_;
  PlanningState moveit_ps_;
  moodycamel::ReaderWriterQueue<PlanningState> moveit_controller_queue_;

  std::thread *moveit_controller_thread_;

  PlanningState last_recieve_ps;
};

}

#endif
