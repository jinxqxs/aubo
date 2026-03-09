// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/srv/aubo_arm_control.h"


#ifndef AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__TYPE_SUPPORT_H_
#define AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "aubo_ros2_common/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  aubo_ros2_common,
  srv,
  AuboArmControl_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  aubo_ros2_common,
  srv,
  AuboArmControl_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  aubo_ros2_common,
  srv,
  AuboArmControl_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  aubo_ros2_common,
  srv,
  AuboArmControl
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  aubo_ros2_common,
  srv,
  AuboArmControl
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  aubo_ros2_common,
  srv,
  AuboArmControl
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__TYPE_SUPPORT_H_
