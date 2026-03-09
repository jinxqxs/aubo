// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_joint_states.h"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__STRUCT_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'target_current'
// Member 'actual_current'
// Member 'target_position'
// Member 'actual_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AuboJointStates in the package aubo_ros2_common.
typedef struct aubo_ros2_common__msg__AuboJointStates
{
  rosidl_runtime_c__int16__Sequence target_current;
  rosidl_runtime_c__int16__Sequence actual_current;
  rosidl_runtime_c__double__Sequence target_position;
  rosidl_runtime_c__double__Sequence actual_position;
} aubo_ros2_common__msg__AuboJointStates;

// Struct for a sequence of aubo_ros2_common__msg__AuboJointStates.
typedef struct aubo_ros2_common__msg__AuboJointStates__Sequence
{
  aubo_ros2_common__msg__AuboJointStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__msg__AuboJointStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__STRUCT_H_
