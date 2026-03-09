// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aubo_ros2_common:msg/Vector3.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/vector3.h"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__STRUCT_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Vector3 in the package aubo_ros2_common.
typedef struct aubo_ros2_common__msg__Vector3
{
  double x;
  double y;
  double z;
} aubo_ros2_common__msg__Vector3;

// Struct for a sequence of aubo_ros2_common__msg__Vector3.
typedef struct aubo_ros2_common__msg__Vector3__Sequence
{
  aubo_ros2_common__msg__Vector3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__msg__Vector3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__VECTOR3__STRUCT_H_
