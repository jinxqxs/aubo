// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_states.h"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__STRUCT_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AuboArmStates in the package aubo_ros2_common.
typedef struct aubo_ros2_common__msg__AuboArmStates
{
  int16_t move_type;
  int16_t collision_level;
  bool arm_power_status;
  bool collision_stopped;
  bool emergency_stopped;
  bool singularity_stopped;
  bool protective_stopped;
  bool in_motion;
} aubo_ros2_common__msg__AuboArmStates;

// Struct for a sequence of aubo_ros2_common__msg__AuboArmStates.
typedef struct aubo_ros2_common__msg__AuboArmStates__Sequence
{
  aubo_ros2_common__msg__AuboArmStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__msg__AuboArmStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__STRUCT_H_
