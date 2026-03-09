// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_states.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__TRAITS_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aubo_ros2_common
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuboArmStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: move_type
  {
    out << "move_type: ";
    rosidl_generator_traits::value_to_yaml(msg.move_type, out);
    out << ", ";
  }

  // member: collision_level
  {
    out << "collision_level: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_level, out);
    out << ", ";
  }

  // member: arm_power_status
  {
    out << "arm_power_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_power_status, out);
    out << ", ";
  }

  // member: collision_stopped
  {
    out << "collision_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_stopped, out);
    out << ", ";
  }

  // member: emergency_stopped
  {
    out << "emergency_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stopped, out);
    out << ", ";
  }

  // member: singularity_stopped
  {
    out << "singularity_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.singularity_stopped, out);
    out << ", ";
  }

  // member: protective_stopped
  {
    out << "protective_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.protective_stopped, out);
    out << ", ";
  }

  // member: in_motion
  {
    out << "in_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.in_motion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuboArmStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_type: ";
    rosidl_generator_traits::value_to_yaml(msg.move_type, out);
    out << "\n";
  }

  // member: collision_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_level: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_level, out);
    out << "\n";
  }

  // member: arm_power_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_power_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_power_status, out);
    out << "\n";
  }

  // member: collision_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_stopped, out);
    out << "\n";
  }

  // member: emergency_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stopped, out);
    out << "\n";
  }

  // member: singularity_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "singularity_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.singularity_stopped, out);
    out << "\n";
  }

  // member: protective_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protective_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.protective_stopped, out);
    out << "\n";
  }

  // member: in_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.in_motion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboArmStates & msg, bool use_flow_style = false)
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
  const aubo_ros2_common::msg::AuboArmStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::msg::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::msg::AuboArmStates & msg)
{
  return aubo_ros2_common::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::msg::AuboArmStates>()
{
  return "aubo_ros2_common::msg::AuboArmStates";
}

template<>
inline const char * name<aubo_ros2_common::msg::AuboArmStates>()
{
  return "aubo_ros2_common/msg/AuboArmStates";
}

template<>
struct has_fixed_size<aubo_ros2_common::msg::AuboArmStates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aubo_ros2_common::msg::AuboArmStates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aubo_ros2_common::msg::AuboArmStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__TRAITS_HPP_
