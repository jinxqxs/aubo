// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_event.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__TRAITS_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aubo_ros2_common/msg/detail/aubo_arm_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aubo_ros2_common
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuboArmEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: event_type
  {
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << ", ";
  }

  // member: event_code
  {
    out << "event_code: ";
    rosidl_generator_traits::value_to_yaml(msg.event_code, out);
    out << ", ";
  }

  // member: event_content
  {
    out << "event_content: ";
    rosidl_generator_traits::value_to_yaml(msg.event_content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuboArmEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << "\n";
  }

  // member: event_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_code: ";
    rosidl_generator_traits::value_to_yaml(msg.event_code, out);
    out << "\n";
  }

  // member: event_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_content: ";
    rosidl_generator_traits::value_to_yaml(msg.event_content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboArmEvent & msg, bool use_flow_style = false)
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
  const aubo_ros2_common::msg::AuboArmEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::msg::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::msg::AuboArmEvent & msg)
{
  return aubo_ros2_common::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::msg::AuboArmEvent>()
{
  return "aubo_ros2_common::msg::AuboArmEvent";
}

template<>
inline const char * name<aubo_ros2_common::msg::AuboArmEvent>()
{
  return "aubo_ros2_common/msg/AuboArmEvent";
}

template<>
struct has_fixed_size<aubo_ros2_common::msg::AuboArmEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aubo_ros2_common::msg::AuboArmEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aubo_ros2_common::msg::AuboArmEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__TRAITS_HPP_
