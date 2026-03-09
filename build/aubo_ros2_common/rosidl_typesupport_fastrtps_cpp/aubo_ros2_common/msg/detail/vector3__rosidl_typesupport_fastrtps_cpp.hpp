// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from aubo_ros2_common:msg/Vector3.idl
// generated code does not contain a copyright notice

#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "aubo_ros2_common/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace aubo_ros2_common
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_serialize(
  const aubo_ros2_common::msg::Vector3 & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common::msg::Vector3 & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
get_serialized_size(
  const aubo_ros2_common::msg::Vector3 & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_serialize_key(
  const aubo_ros2_common::msg::Vector3 & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
get_serialized_size_key(
  const aubo_ros2_common::msg::Vector3 & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
max_serialized_size_key_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aubo_ros2_common

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aubo_ros2_common, msg, Vector3)();

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
