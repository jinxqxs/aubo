// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_event.h"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__STRUCT_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'event_content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AuboArmEvent in the package aubo_ros2_common.
typedef struct aubo_ros2_common__msg__AuboArmEvent
{
  int16_t event_type;
  int16_t event_code;
  rosidl_runtime_c__String event_content;
} aubo_ros2_common__msg__AuboArmEvent;

// Struct for a sequence of aubo_ros2_common__msg__AuboArmEvent.
typedef struct aubo_ros2_common__msg__AuboArmEvent__Sequence
{
  aubo_ros2_common__msg__AuboArmEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__msg__AuboArmEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__STRUCT_H_
