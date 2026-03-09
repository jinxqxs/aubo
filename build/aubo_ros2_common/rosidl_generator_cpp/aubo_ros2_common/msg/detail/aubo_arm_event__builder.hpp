// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_event.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__BUILDER_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aubo_ros2_common/msg/detail/aubo_arm_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aubo_ros2_common
{

namespace msg
{

namespace builder
{

class Init_AuboArmEvent_event_content
{
public:
  explicit Init_AuboArmEvent_event_content(::aubo_ros2_common::msg::AuboArmEvent & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::msg::AuboArmEvent event_content(::aubo_ros2_common::msg::AuboArmEvent::_event_content_type arg)
  {
    msg_.event_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmEvent msg_;
};

class Init_AuboArmEvent_event_code
{
public:
  explicit Init_AuboArmEvent_event_code(::aubo_ros2_common::msg::AuboArmEvent & msg)
  : msg_(msg)
  {}
  Init_AuboArmEvent_event_content event_code(::aubo_ros2_common::msg::AuboArmEvent::_event_code_type arg)
  {
    msg_.event_code = std::move(arg);
    return Init_AuboArmEvent_event_content(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmEvent msg_;
};

class Init_AuboArmEvent_event_type
{
public:
  Init_AuboArmEvent_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboArmEvent_event_code event_type(::aubo_ros2_common::msg::AuboArmEvent::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_AuboArmEvent_event_code(msg_);
  }

private:
  ::aubo_ros2_common::msg::AuboArmEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::msg::AuboArmEvent>()
{
  return aubo_ros2_common::msg::builder::Init_AuboArmEvent_event_type();
}

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__BUILDER_HPP_
