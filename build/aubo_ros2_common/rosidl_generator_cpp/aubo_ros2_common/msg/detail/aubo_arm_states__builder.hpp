// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_states.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__BUILDER_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aubo_ros2_common
{

namespace msg
{

namespace builder
{

class Init_AuboArmStates_in_motion
{
public:
  explicit Init_AuboArmStates_in_motion(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::msg::AuboArmStates in_motion(::aubo_ros2_common::msg::AuboArmStates::_in_motion_type arg)
  {
    msg_.in_motion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_protective_stopped
{
public:
  explicit Init_AuboArmStates_protective_stopped(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  Init_AuboArmStates_in_motion protective_stopped(::aubo_ros2_common::msg::AuboArmStates::_protective_stopped_type arg)
  {
    msg_.protective_stopped = std::move(arg);
    return Init_AuboArmStates_in_motion(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_singularity_stopped
{
public:
  explicit Init_AuboArmStates_singularity_stopped(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  Init_AuboArmStates_protective_stopped singularity_stopped(::aubo_ros2_common::msg::AuboArmStates::_singularity_stopped_type arg)
  {
    msg_.singularity_stopped = std::move(arg);
    return Init_AuboArmStates_protective_stopped(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_emergency_stopped
{
public:
  explicit Init_AuboArmStates_emergency_stopped(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  Init_AuboArmStates_singularity_stopped emergency_stopped(::aubo_ros2_common::msg::AuboArmStates::_emergency_stopped_type arg)
  {
    msg_.emergency_stopped = std::move(arg);
    return Init_AuboArmStates_singularity_stopped(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_collision_stopped
{
public:
  explicit Init_AuboArmStates_collision_stopped(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  Init_AuboArmStates_emergency_stopped collision_stopped(::aubo_ros2_common::msg::AuboArmStates::_collision_stopped_type arg)
  {
    msg_.collision_stopped = std::move(arg);
    return Init_AuboArmStates_emergency_stopped(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_arm_power_status
{
public:
  explicit Init_AuboArmStates_arm_power_status(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  Init_AuboArmStates_collision_stopped arm_power_status(::aubo_ros2_common::msg::AuboArmStates::_arm_power_status_type arg)
  {
    msg_.arm_power_status = std::move(arg);
    return Init_AuboArmStates_collision_stopped(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_collision_level
{
public:
  explicit Init_AuboArmStates_collision_level(::aubo_ros2_common::msg::AuboArmStates & msg)
  : msg_(msg)
  {}
  Init_AuboArmStates_arm_power_status collision_level(::aubo_ros2_common::msg::AuboArmStates::_collision_level_type arg)
  {
    msg_.collision_level = std::move(arg);
    return Init_AuboArmStates_arm_power_status(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

class Init_AuboArmStates_move_type
{
public:
  Init_AuboArmStates_move_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboArmStates_collision_level move_type(::aubo_ros2_common::msg::AuboArmStates::_move_type_type arg)
  {
    msg_.move_type = std::move(arg);
    return Init_AuboArmStates_collision_level(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::msg::AuboArmStates>()
{
  return aubo_ros2_common::msg::builder::Init_AuboArmStates_move_type();
}

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__BUILDER_HPP_
