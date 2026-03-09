// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice
#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_aubo_ros2_common__msg__AuboArmStates(
  const aubo_ros2_common__msg__AuboArmStates * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_deserialize_aubo_ros2_common__msg__AuboArmStates(
  eprosima::fastcdr::Cdr &,
  aubo_ros2_common__msg__AuboArmStates * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_aubo_ros2_common__msg__AuboArmStates(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_aubo_ros2_common__msg__AuboArmStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_key_aubo_ros2_common__msg__AuboArmStates(
  const aubo_ros2_common__msg__AuboArmStates * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_key_aubo_ros2_common__msg__AuboArmStates(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_key_aubo_ros2_common__msg__AuboArmStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, msg, AuboArmStates)();

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
