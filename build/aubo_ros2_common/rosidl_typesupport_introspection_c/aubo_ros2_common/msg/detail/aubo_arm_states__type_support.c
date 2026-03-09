// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aubo_ros2_common/msg/detail/aubo_arm_states__rosidl_typesupport_introspection_c.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aubo_ros2_common__msg__AuboArmStates__init(message_memory);
}

void aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_fini_function(void * message_memory)
{
  aubo_ros2_common__msg__AuboArmStates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_member_array[8] = {
  {
    "move_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, move_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, collision_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_power_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, arm_power_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_stopped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, collision_stopped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stopped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, emergency_stopped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "singularity_stopped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, singularity_stopped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "protective_stopped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, protective_stopped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "in_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmStates, in_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_members = {
  "aubo_ros2_common__msg",  // message namespace
  "AuboArmStates",  // message name
  8,  // number of fields
  sizeof(aubo_ros2_common__msg__AuboArmStates),
  false,  // has_any_key_member_
  aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_member_array,  // message members
  aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_init_function,  // function to initialize message memory (memory has to be allocated)
  aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_type_support_handle = {
  0,
  &aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboArmStates__get_type_hash,
  &aubo_ros2_common__msg__AuboArmStates__get_type_description,
  &aubo_ros2_common__msg__AuboArmStates__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, msg, AuboArmStates)() {
  if (!aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aubo_ros2_common__msg__AuboArmStates__rosidl_typesupport_introspection_c__AuboArmStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
