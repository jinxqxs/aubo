// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aubo_ros2_common:msg/Vector3.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/vector3.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__BUILDER_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aubo_ros2_common/msg/detail/vector3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aubo_ros2_common
{

namespace msg
{

namespace builder
{

class Init_Vector3_z
{
public:
  explicit Init_Vector3_z(::aubo_ros2_common::msg::Vector3 & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::msg::Vector3 z(::aubo_ros2_common::msg::Vector3::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::msg::Vector3 msg_;
};

class Init_Vector3_y
{
public:
  explicit Init_Vector3_y(::aubo_ros2_common::msg::Vector3 & msg)
  : msg_(msg)
  {}
  Init_Vector3_z y(::aubo_ros2_common::msg::Vector3::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vector3_z(msg_);
  }

private:
  ::aubo_ros2_common::msg::Vector3 msg_;
};

class Init_Vector3_x
{
public:
  Init_Vector3_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector3_y x(::aubo_ros2_common::msg::Vector3::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector3_y(msg_);
  }

private:
  ::aubo_ros2_common::msg::Vector3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::msg::Vector3>()
{
  return aubo_ros2_common::msg::builder::Init_Vector3_x();
}

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__BUILDER_HPP_
