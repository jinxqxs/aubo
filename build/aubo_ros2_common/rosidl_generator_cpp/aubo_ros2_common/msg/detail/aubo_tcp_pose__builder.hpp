// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_tcp_pose.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__BUILDER_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aubo_ros2_common
{

namespace msg
{

namespace builder
{

class Init_AuboTcpPose_actual_rotation
{
public:
  explicit Init_AuboTcpPose_actual_rotation(::aubo_ros2_common::msg::AuboTcpPose & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::msg::AuboTcpPose actual_rotation(::aubo_ros2_common::msg::AuboTcpPose::_actual_rotation_type arg)
  {
    msg_.actual_rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboTcpPose msg_;
};

class Init_AuboTcpPose_actual_position
{
public:
  explicit Init_AuboTcpPose_actual_position(::aubo_ros2_common::msg::AuboTcpPose & msg)
  : msg_(msg)
  {}
  Init_AuboTcpPose_actual_rotation actual_position(::aubo_ros2_common::msg::AuboTcpPose::_actual_position_type arg)
  {
    msg_.actual_position = std::move(arg);
    return Init_AuboTcpPose_actual_rotation(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboTcpPose msg_;
};

class Init_AuboTcpPose_target_rotation
{
public:
  explicit Init_AuboTcpPose_target_rotation(::aubo_ros2_common::msg::AuboTcpPose & msg)
  : msg_(msg)
  {}
  Init_AuboTcpPose_actual_position target_rotation(::aubo_ros2_common::msg::AuboTcpPose::_target_rotation_type arg)
  {
    msg_.target_rotation = std::move(arg);
    return Init_AuboTcpPose_actual_position(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboTcpPose msg_;
};

class Init_AuboTcpPose_target_position
{
public:
  Init_AuboTcpPose_target_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboTcpPose_target_rotation target_position(::aubo_ros2_common::msg::AuboTcpPose::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_AuboTcpPose_target_rotation(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboTcpPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::msg::AuboTcpPose>()
{
  return aubo_ros2_common::msg::builder::Init_AuboTcpPose_target_position();
}

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__BUILDER_HPP_
