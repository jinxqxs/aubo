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

void AuboRos2Driver::moveitControllerThread()
{
  rclcpp::Rate loop_rate(UPDATE_RATE_);

  int ret = 0;
  servo_joint_state_ = ServoJointState::Waiting;

  while (rclcpp::ok())
  {
    if (moveit_controller_queue_.size_approx() > 0 && !start_move_)
    {
      rpc_cli->getRobotInterface(robot_name)->getMotionControl()->setServoMode(true);
      int i = 0;
      while (!rpc_cli->getRobotInterface(robot_name)->getMotionControl()->isServoModeEnabled() && i < 5)
      {
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
        i++;
      }
      if (rpc_cli->getRobotInterface(robot_name)->getMotionControl()->isServoModeEnabled())
      {
        start_move_ = true;
        move_type_ = MoveType::Trajectory;
        servo_joint_state_ = ServoJointState::Sending;
      }
    }

    if (start_move_ && move_type_ == MoveType::Trajectory)
    {
      if (servo_joint_state_ == ServoJointState::ServoJointError || servo_joint_state_ == ServoJointState::UserStopped)
      {
        RCLCPP_INFO(this->get_logger(), "servoJoint stopped: %d", servo_joint_state_);

        std::vector<double> q = {};
        rpc_cli->getRobotInterface(robot_name)->getMotionControl()->servoJoint(q, 3, 3, 0.01, 0.1, 200);

        servo_joint_state_ = ServoJointState::Waiting;
      }
      else if (servo_joint_state_ == ServoJointState::Sending)
      {
        if (moveit_controller_queue_.size_approx() > 0)
        {
          moveit_controller_queue_.try_dequeue(moveit_ps_);
          std::vector<double> q;
          for (int i = 0; i < 6; i++)
          {
            q.push_back(moveit_ps_.joint_pos_[i]);
            target_joints_[i] = moveit_ps_.joint_pos_[i];
          }

          ret = rpc_cli->getRobotInterface(robot_name)->getMotionControl()->servoJoint(q, 3, 3, 0.01, 0.1, 200);

          if (ret < 0)
          {
            RCLCPP_INFO(this->get_logger(), "servoJoint error ret: %d", ret);
            servo_joint_state_ = ServoJointState::ServoJointError;
          }
        }
        else
        {
          if (checkReachTarget())
          {
            RCLCPP_INFO(this->get_logger(), "reach target!");
            start_move_ = false;
            move_type_ = MoveType::Idel;
            servo_joint_state_ = ServoJointState::Waiting;
          }
          else
          {
            if (rpc_cli->getRobotInterface(robot_name)->getRobotState()->isSteady())
            {
              RCLCPP_INFO(this->get_logger(), "stopped! but not reach target");

              start_move_ = false;
              move_type_ = MoveType::Idel;
              servo_joint_state_ = ServoJointState::Waiting;
            }
          }
        }
      }
    }

    loop_rate.sleep();
  }
}

bool AuboRos2Driver::checkReachTarget()
{
  bool ret = true;
  for (int i = 0; i < ARM_DOF; i++)
  {
    if(fabs(target_joints_[i] - actual_joints_[i]) > 0.001)
    {
      ret = false;
      break;
    }
  }
  return ret;
}

bool AuboRos2Driver::jointsCompare(double *joint1, double *joint2, double threshhold)
{
  bool ret = false;
  for (int i = 0; i < ARM_DOF; i++)
  {
    if (fabs(joint1[i] - joint2[i]) >= threshhold)
    {
      ret = true;
      break;
    }
  }
  return ret;
}
