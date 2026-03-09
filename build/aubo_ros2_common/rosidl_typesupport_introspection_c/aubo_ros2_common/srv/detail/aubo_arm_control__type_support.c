// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aubo_ros2_common/srv/detail/aubo_arm_control__rosidl_typesupport_introspection_c.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"
#include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.h"


// Include directives for member types
// Member `cmd`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `tcp_offset`
// Member `joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aubo_ros2_common__srv__AuboArmControl_Request__init(message_memory);
}

void aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_fini_function(void * message_memory)
{
  aubo_ros2_common__srv__AuboArmControl_Request__fini(message_memory);
}

size_t aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Request__tcp_offset(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Request__tcp_offset(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Request__tcp_offset(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Request__tcp_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Request__tcp_offset(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Request__tcp_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Request__tcp_offset(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Request__tcp_offset(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Request__joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Request__joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Request__joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Request__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Request__joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Request__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Request__joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Request__joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_member_array[7] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tcp_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, tcp_offset),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Request__tcp_offset,  // size() function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Request__tcp_offset,  // get_const(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Request__tcp_offset,  // get(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Request__tcp_offset,  // fetch(index, &value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Request__tcp_offset,  // assign(index, value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Request__tcp_offset  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, payload),  // bytes offset in struct
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
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, collision_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, joints),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Request__joints,  // size() function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Request__joints,  // get_const(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Request__joints,  // get(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Request__joints,  // fetch(index, &value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Request__joints,  // assign(index, value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Request__joints  // resize(index) function pointer
  },
  {
    "speed_fraction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Request, speed_fraction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_members = {
  "aubo_ros2_common__srv",  // message namespace
  "AuboArmControl_Request",  // message name
  7,  // number of fields
  sizeof(aubo_ros2_common__srv__AuboArmControl_Request),
  false,  // has_any_key_member_
  aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_member_array,  // message members
  aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_type_support_handle = {
  0,
  &aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Request__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl_Request__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Request)() {
  if (!aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.h"


// Include directives for member types
// Member `result_code`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aubo_ros2_common__srv__AuboArmControl_Response__init(message_memory);
}

void aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_fini_function(void * message_memory)
{
  aubo_ros2_common__srv__AuboArmControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Response, result_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_members = {
  "aubo_ros2_common__srv",  // message namespace
  "AuboArmControl_Response",  // message name
  2,  // number of fields
  sizeof(aubo_ros2_common__srv__AuboArmControl_Response),
  false,  // has_any_key_member_
  aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_member_array,  // message members
  aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle = {
  0,
  &aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Response__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl_Response__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Response)() {
  if (!aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "aubo_ros2_common/srv/aubo_arm_control.h"
// Member `request`
// Member `response`
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aubo_ros2_common__srv__AuboArmControl_Event__init(message_memory);
}

void aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_fini_function(void * message_memory)
{
  aubo_ros2_common__srv__AuboArmControl_Event__fini(message_memory);
}

size_t aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Event__request(
  const void * untyped_member)
{
  const aubo_ros2_common__srv__AuboArmControl_Request__Sequence * member =
    (const aubo_ros2_common__srv__AuboArmControl_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Event__request(
  const void * untyped_member, size_t index)
{
  const aubo_ros2_common__srv__AuboArmControl_Request__Sequence * member =
    (const aubo_ros2_common__srv__AuboArmControl_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Event__request(
  void * untyped_member, size_t index)
{
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence * member =
    (aubo_ros2_common__srv__AuboArmControl_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aubo_ros2_common__srv__AuboArmControl_Request * item =
    ((const aubo_ros2_common__srv__AuboArmControl_Request *)
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Event__request(untyped_member, index));
  aubo_ros2_common__srv__AuboArmControl_Request * value =
    (aubo_ros2_common__srv__AuboArmControl_Request *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aubo_ros2_common__srv__AuboArmControl_Request * item =
    ((aubo_ros2_common__srv__AuboArmControl_Request *)
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Event__request(untyped_member, index));
  const aubo_ros2_common__srv__AuboArmControl_Request * value =
    (const aubo_ros2_common__srv__AuboArmControl_Request *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Event__request(
  void * untyped_member, size_t size)
{
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence * member =
    (aubo_ros2_common__srv__AuboArmControl_Request__Sequence *)(untyped_member);
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence__fini(member);
  return aubo_ros2_common__srv__AuboArmControl_Request__Sequence__init(member, size);
}

size_t aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Event__response(
  const void * untyped_member)
{
  const aubo_ros2_common__srv__AuboArmControl_Response__Sequence * member =
    (const aubo_ros2_common__srv__AuboArmControl_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Event__response(
  const void * untyped_member, size_t index)
{
  const aubo_ros2_common__srv__AuboArmControl_Response__Sequence * member =
    (const aubo_ros2_common__srv__AuboArmControl_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Event__response(
  void * untyped_member, size_t index)
{
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence * member =
    (aubo_ros2_common__srv__AuboArmControl_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aubo_ros2_common__srv__AuboArmControl_Response * item =
    ((const aubo_ros2_common__srv__AuboArmControl_Response *)
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Event__response(untyped_member, index));
  aubo_ros2_common__srv__AuboArmControl_Response * value =
    (aubo_ros2_common__srv__AuboArmControl_Response *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aubo_ros2_common__srv__AuboArmControl_Response * item =
    ((aubo_ros2_common__srv__AuboArmControl_Response *)
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Event__response(untyped_member, index));
  const aubo_ros2_common__srv__AuboArmControl_Response * value =
    (const aubo_ros2_common__srv__AuboArmControl_Response *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Event__response(
  void * untyped_member, size_t size)
{
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence * member =
    (aubo_ros2_common__srv__AuboArmControl_Response__Sequence *)(untyped_member);
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence__fini(member);
  return aubo_ros2_common__srv__AuboArmControl_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Event, request),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Event__request,  // size() function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Event__request,  // get_const(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Event__request,  // get(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Event__request,  // fetch(index, &value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Event__request,  // assign(index, value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(aubo_ros2_common__srv__AuboArmControl_Event, response),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__size_function__AuboArmControl_Event__response,  // size() function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_const_function__AuboArmControl_Event__response,  // get_const(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__get_function__AuboArmControl_Event__response,  // get(index) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__fetch_function__AuboArmControl_Event__response,  // fetch(index, &value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__assign_function__AuboArmControl_Event__response,  // assign(index, value) function pointer
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__resize_function__AuboArmControl_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_members = {
  "aubo_ros2_common__srv",  // message namespace
  "AuboArmControl_Event",  // message name
  3,  // number of fields
  sizeof(aubo_ros2_common__srv__AuboArmControl_Event),
  false,  // has_any_key_member_
  aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_member_array,  // message members
  aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_type_support_handle = {
  0,
  &aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Event__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl_Event__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Event)() {
  aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Request)();
  aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Response)();
  if (!aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_members = {
  "aubo_ros2_common__srv",  // service namespace
  "AuboArmControl",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_type_support_handle,
  NULL,  // response message
  // aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle
  NULL  // event_message
  // aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle
};


static rosidl_service_type_support_t aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_type_support_handle = {
  0,
  &aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_members,
  get_service_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Request__rosidl_typesupport_introspection_c__AuboArmControl_Request_message_type_support_handle,
  &aubo_ros2_common__srv__AuboArmControl_Response__rosidl_typesupport_introspection_c__AuboArmControl_Response_message_type_support_handle,
  &aubo_ros2_common__srv__AuboArmControl_Event__rosidl_typesupport_introspection_c__AuboArmControl_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aubo_ros2_common,
    srv,
    AuboArmControl
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aubo_ros2_common,
    srv,
    AuboArmControl
  ),
  &aubo_ros2_common__srv__AuboArmControl__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl)(void) {
  if (!aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Event)()->data;
  }

  return &aubo_ros2_common__srv__detail__aubo_arm_control__rosidl_typesupport_introspection_c__AuboArmControl_service_type_support_handle;
}
