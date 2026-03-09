// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_joint_states.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__BUILDER_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aubo_ros2_common/msg/detail/aubo_joint_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aubo_ros2_common
{

namespace msg
{

namespace builder
{

class Init_AuboJointStates_actual_position
{
public:
  explicit Init_AuboJointStates_actual_position(::aubo_ros2_common::msg::AuboJointStates & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::msg::AuboJointStates actual_position(::aubo_ros2_common::msg::AuboJointStates::_actual_position_type arg)
  {
    msg_.actual_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboJointStates msg_;
};

class Init_AuboJointStates_target_position
{
public:
  explicit Init_AuboJointStates_target_position(::aubo_ros2_common::msg::AuboJointStates & msg)
  : msg_(msg)
  {}
  Init_AuboJointStates_actual_position target_position(::aubo_ros2_common::msg::AuboJointStates::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_AuboJointStates_actual_position(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboJointStates msg_;
};

class Init_AuboJointStates_actual_current
{
public:
  explicit Init_AuboJointStates_actual_current(::aubo_ros2_common::msg::AuboJointStates & msg)
  : msg_(msg)
  {}
  Init_AuboJointStates_target_position actual_current(::aubo_ros2_common::msg::AuboJointStates::_actual_current_type arg)
  {
    msg_.actual_current = std::move(arg);
    return Init_AuboJointStates_target_position(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboJointStates msg_;
};

class Init_AuboJointStates_target_current
{
public:
  Init_AuboJointStates_target_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboJointStates_actual_current target_current(::aubo_ros2_common::msg::AuboJointStates::_target_current_type arg)
  {
    msg_.target_current = std::move(arg);
    return Init_AuboJointStates_actual_current(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboJointStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::msg::AuboJointStates>()
{
  return aubo_ros2_common::msg::builder::Init_AuboJointStates_target_current();
}

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__BUILDER_HPP_
