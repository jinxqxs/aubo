// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/srv/aubo_arm_control.hpp"


#ifndef AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__TRAITS_HPP_
#define AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aubo_ros2_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuboArmControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: tcp_offset
  {
    if (msg.tcp_offset.size() == 0) {
      out << "tcp_offset: []";
    } else {
      out << "tcp_offset: [";
      size_t pending_items = msg.tcp_offset.size();
      for (auto item : msg.tcp_offset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: payload
  {
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
    out << ", ";
  }

  // member: collision_level
  {
    out << "collision_level: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_level, out);
    out << ", ";
  }

  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_fraction
  {
    out << "speed_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_fraction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuboArmControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: tcp_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tcp_offset.size() == 0) {
      out << "tcp_offset: []\n";
    } else {
      out << "tcp_offset:\n";
      for (auto item : msg.tcp_offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
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

  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_fraction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboArmControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aubo_ros2_common

namespace rosidl_generator_traits
{

[[deprecated("use aubo_ros2_common::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aubo_ros2_common::srv::AuboArmControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::srv::AuboArmControl_Request & msg)
{
  return aubo_ros2_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::srv::AuboArmControl_Request>()
{
  return "aubo_ros2_common::srv::AuboArmControl_Request";
}

template<>
inline const char * name<aubo_ros2_common::srv::AuboArmControl_Request>()
{
  return "aubo_ros2_common/srv/AuboArmControl_Request";
}

template<>
struct has_fixed_size<aubo_ros2_common::srv::AuboArmControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aubo_ros2_common::srv::AuboArmControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aubo_ros2_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuboArmControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: result_code
  {
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuboArmControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: result_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboArmControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aubo_ros2_common

namespace rosidl_generator_traits
{

[[deprecated("use aubo_ros2_common::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aubo_ros2_common::srv::AuboArmControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::srv::AuboArmControl_Response & msg)
{
  return aubo_ros2_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::srv::AuboArmControl_Response>()
{
  return "aubo_ros2_common::srv::AuboArmControl_Response";
}

template<>
inline const char * name<aubo_ros2_common::srv::AuboArmControl_Response>()
{
  return "aubo_ros2_common/srv/AuboArmControl_Response";
}

template<>
struct has_fixed_size<aubo_ros2_common::srv::AuboArmControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aubo_ros2_common::srv::AuboArmControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace aubo_ros2_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuboArmControl_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const AuboArmControl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuboArmControl_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aubo_ros2_common

namespace rosidl_generator_traits
{

[[deprecated("use aubo_ros2_common::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aubo_ros2_common::srv::AuboArmControl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  aubo_ros2_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aubo_ros2_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const aubo_ros2_common::srv::AuboArmControl_Event & msg)
{
  return aubo_ros2_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aubo_ros2_common::srv::AuboArmControl_Event>()
{
  return "aubo_ros2_common::srv::AuboArmControl_Event";
}

template<>
inline const char * name<aubo_ros2_common::srv::AuboArmControl_Event>()
{
  return "aubo_ros2_common/srv/AuboArmControl_Event";
}

template<>
struct has_fixed_size<aubo_ros2_common::srv::AuboArmControl_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Event>
  : std::integral_constant<bool, has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Request>::value && has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<aubo_ros2_common::srv::AuboArmControl_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aubo_ros2_common::srv::AuboArmControl>()
{
  return "aubo_ros2_common::srv::AuboArmControl";
}

template<>
inline const char * name<aubo_ros2_common::srv::AuboArmControl>()
{
  return "aubo_ros2_common/srv/AuboArmControl";
}

template<>
struct has_fixed_size<aubo_ros2_common::srv::AuboArmControl>
  : std::integral_constant<
    bool,
    has_fixed_size<aubo_ros2_common::srv::AuboArmControl_Request>::value &&
    has_fixed_size<aubo_ros2_common::srv::AuboArmControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<aubo_ros2_common::srv::AuboArmControl>
  : std::integral_constant<
    bool,
    has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Request>::value &&
    has_bounded_size<aubo_ros2_common::srv::AuboArmControl_Response>::value
  >
{
};

template<>
struct is_service<aubo_ros2_common::srv::AuboArmControl>
  : std::true_type
{
};

template<>
struct is_service_request<aubo_ros2_common::srv::AuboArmControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aubo_ros2_common::srv::AuboArmControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__TRAITS_HPP_
