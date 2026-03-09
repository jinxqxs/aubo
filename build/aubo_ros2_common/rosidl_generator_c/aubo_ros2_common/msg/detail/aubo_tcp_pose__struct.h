// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_tcp_pose.h"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__STRUCT_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'target_position'
// Member 'target_rotation'
// Member 'actual_position'
// Member 'actual_rotation'
#include "aubo_ros2_common/msg/detail/vector3__struct.h"

/// Struct defined in msg/AuboTcpPose in the package aubo_ros2_common.
typedef struct aubo_ros2_common__msg__AuboTcpPose
{
  aubo_ros2_common__msg__Vector3 target_position;
  aubo_ros2_common__msg__Vector3 target_rotation;
  aubo_ros2_common__msg__Vector3 actual_position;
  aubo_ros2_common__msg__Vector3 actual_rotation;
} aubo_ros2_common__msg__AuboTcpPose;

// Struct for a sequence of aubo_ros2_common__msg__AuboTcpPose.
typedef struct aubo_ros2_common__msg__AuboTcpPose__Sequence
{
  aubo_ros2_common__msg__AuboTcpPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__msg__AuboTcpPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__STRUCT_H_
