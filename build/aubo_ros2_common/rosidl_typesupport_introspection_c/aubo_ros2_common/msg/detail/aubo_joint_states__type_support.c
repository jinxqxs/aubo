// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aubo_ros2_common/msg/detail/aubo_joint_states__rosidl_typesupport_introspection_c.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aubo_ros2_common/msg/detail/aubo_joint_states__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_joint_states__struct.h"


// Include directives for member types
// Member `target_current`
// Member `actual_current`
// Member `target_position`
// Member `actual_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aubo_ros2_common__msg__AuboJointStates__init(message_memory);
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_fini_function(void * message_memory)
{
  aubo_ros2_common__msg__AuboJointStates__fini(message_memory);
}

size_t aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__target_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__target_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__target_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__target_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__target_current(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__target_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__target_current(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__target_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__actual_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__actual_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__actual_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__actual_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__actual_current(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__actual_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__actual_current(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__actual_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__target_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__target_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__target_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__target_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__target_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__target_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__target_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__target_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__actual_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__actual_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__actual_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__actual_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__actual_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__actual_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_member_array[4] = {
  {
    "target_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboJointStates, target_current),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__target_current,  // size() function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__target_current,  // get_const(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__target_current,  // get(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__target_current,  // fetch(index, &value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__target_current,  // assign(index, value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__target_current  // resize(index) function pointer
  },
  {
    "actual_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboJointStates, actual_current),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__actual_current,  // size() function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__actual_current,  // get_const(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__actual_current,  // get(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__actual_current,  // fetch(index, &value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__actual_current,  // assign(index, value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__actual_current  // resize(index) function pointer
  },
  {
    "target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboJointStates, target_position),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__target_position,  // size() function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__target_position,  // get_const(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__target_position,  // get(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__target_position,  // fetch(index, &value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__target_position,  // assign(index, value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__target_position  // resize(index) function pointer
  },
  {
    "actual_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common__msg__AuboJointStates, actual_position),  // bytes offset in struct
    NULL,  // default value
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__size_function__AuboJointStates__actual_position,  // size() function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_const_function__AuboJointStates__actual_position,  // get_const(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__get_function__AuboJointStates__actual_position,  // get(index) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__fetch_function__AuboJointStates__actual_position,  // fetch(index, &value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__assign_function__AuboJointStates__actual_position,  // assign(index, value) function pointer
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__resize_function__AuboJointStates__actual_position  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_members = {
  "aubo_ros2_common__msg",  // message namespace
  "AuboJointStates",  // message name
  4,  // number of fields
  sizeof(aubo_ros2_common__msg__AuboJointStates),
  false,  // has_any_key_member_
  aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_member_array,  // message members
  aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_init_function,  // function to initialize message memory (memory has to be allocated)
  aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_type_support_handle = {
  0,
  &aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboJointStates__get_type_hash,
  &aubo_ros2_common__msg__AuboJointStates__get_type_description,
  &aubo_ros2_common__msg__AuboJointStates__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, msg, AuboJointStates)() {
  if (!aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_type_support_handle.typesupport_identifier) {
    aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aubo_ros2_common__msg__AuboJointStates__rosidl_typesupport_introspection_c__AuboJointStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
