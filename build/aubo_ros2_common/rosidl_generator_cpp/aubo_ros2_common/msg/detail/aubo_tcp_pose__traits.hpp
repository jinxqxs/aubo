// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_tcp_pose.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__TRAITS_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_position'
// Member 'target_rotation'
// Member 'actual_position'
// Member 'actual_rotation'
#include "aubo_ros2_common/msg/detail/vector3__traits.hpp"

namespace aubo_ros2_common
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuboTcpPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_position
  {
    out << "target_position: ";
    to_flow_style_yaml(msg.target_position, out);
    out << ", ";
  }

  // member: target_rotation
  {
    out << "target_rotation: ";
    to_flow_style_yaml(msg.target_rotation, out);
    out << ", ";
  }

  // member: actual_position
  {
    out << "actual_position: ";
    to_flow_style_yaml(msg.actual_position, out);
    out << ", ";
  }

  // member: actual_rotation
  {
    out << "actual_rotation: ";
    to_flow_style_yaml(msg.actual_rotation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuboTcpPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position:\n";
    to_block_style_yaml(msg.target_position, out, indentation + 2);
  }

  // member: target_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_rotation:\n";
    to_block_style_yaml(msg.target_rotation, out, indentation + 2);
  }

  // member: actual_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_position:\n";
    to_block_style_yaml(msg.actual_position, out, indentation + 2);
  }

  // member: actual_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_rotation:\n";
    to_block_style_yaml(msg.actual_rotation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboTcpPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aubo_ros2_common

namespace rosidl_generator_traits
{

[[deprecated("use aubo_ros2_common::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aubo_ros2_common::msg::AuboTcpPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::msg::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::msg::AuboTcpPose & msg)
{
  return aubo_ros2_common::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::msg::AuboTcpPose>()
{
  return "aubo_ros2_common::msg::AuboTcpPose";
}

template<>
inline const char * name<aubo_ros2_common::msg::AuboTcpPose>()
{
  return "aubo_ros2_common/msg/AuboTcpPose";
}

template<>
struct has_fixed_size<aubo_ros2_common::msg::AuboTcpPose>
  : std::integral_constant<bool, has_fixed_size<aubo_ros2_common::msg::Vector3>::value> {};

template<>
struct has_bounded_size<aubo_ros2_common::msg::AuboTcpPose>
  : std::integral_constant<bool, has_bounded_size<aubo_ros2_common::msg::Vector3>::value> {};

template<>
struct is_message<aubo_ros2_common::msg::AuboTcpPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__TRAITS_HPP_
