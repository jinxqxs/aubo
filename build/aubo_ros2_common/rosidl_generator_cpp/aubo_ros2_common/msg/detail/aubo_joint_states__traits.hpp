// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_joint_states.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__TRAITS_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aubo_ros2_common/msg/detail/aubo_joint_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aubo_ros2_common
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuboJointStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_current
  {
    if (msg.target_current.size() == 0) {
      out << "target_current: []";
    } else {
      out << "target_current: [";
      size_t pending_items = msg.target_current.size();
      for (auto item : msg.target_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_current
  {
    if (msg.actual_current.size() == 0) {
      out << "actual_current: []";
    } else {
      out << "actual_current: [";
      size_t pending_items = msg.actual_current.size();
      for (auto item : msg.actual_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_position
  {
    if (msg.target_position.size() == 0) {
      out << "target_position: []";
    } else {
      out << "target_position: [";
      size_t pending_items = msg.target_position.size();
      for (auto item : msg.target_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_position
  {
    if (msg.actual_position.size() == 0) {
      out << "actual_position: []";
    } else {
      out << "actual_position: [";
      size_t pending_items = msg.actual_position.size();
      for (auto item : msg.actual_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuboJointStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_current.size() == 0) {
      out << "target_current: []\n";
    } else {
      out << "target_current:\n";
      for (auto item : msg.target_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_current.size() == 0) {
      out << "actual_current: []\n";
    } else {
      out << "actual_current:\n";
      for (auto item : msg.actual_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_position.size() == 0) {
      out << "target_position: []\n";
    } else {
      out << "target_position:\n";
      for (auto item : msg.target_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_position.size() == 0) {
      out << "actual_position: []\n";
    } else {
      out << "actual_position:\n";
      for (auto item : msg.actual_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboJointStates & msg, bool use_flow_style = false)
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
  const aubo_ros2_common::msg::AuboJointStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::msg::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::msg::AuboJointStates & msg)
{
  return aubo_ros2_common::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::msg::AuboJointStates>()
{
  return "aubo_ros2_common::msg::AuboJointStates";
}

template<>
inline const char * name<aubo_ros2_common::msg::AuboJointStates>()
{
  return "aubo_ros2_common/msg/AuboJointStates";
}

template<>
struct has_fixed_size<aubo_ros2_common::msg::AuboJointStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aubo_ros2_common::msg::AuboJointStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aubo_ros2_common::msg::AuboJointStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__TRAITS_HPP_
