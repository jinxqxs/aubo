// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aubo_ros2_common/msg/detail/aubo_arm_event__rosidl_typesupport_introspection_c.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_event__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_event__struct.h"


// Include directives for member types
// Member `event_content`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aubo_ros2_common__msg__AuboArmEvent__init(message_memory);
}

void aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_fini_function(void * message_memory)
{
  aubo_ros2_common__msg__AuboArmEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_member_array[3] = {
  {
    "event_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmEvent, event_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmEvent, event_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboArmEvent, event_content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_members = {
  "aubo_ros2_common__msg",  // message namespace
  "AuboArmEvent",  // message name
  3,  // number of fields
  sizeof(aubo_ros2_common__msg__AuboArmEvent),
  false,  // has_any_key_member_
  aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_member_array,  // message members
  aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_type_support_handle = {
  0,
  &aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboArmEvent__get_type_hash,
  &aubo_ros2_common__msg__AuboArmEvent__get_type_description,
  &aubo_ros2_common__msg__AuboArmEvent__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, msg, AuboArmEvent)() {
  if (!aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aubo_ros2_common__msg__AuboArmEvent__rosidl_typesupport_introspection_c__AuboArmEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
