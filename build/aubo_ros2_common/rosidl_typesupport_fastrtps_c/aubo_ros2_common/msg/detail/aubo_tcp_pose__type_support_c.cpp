// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__struct.h"
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "aubo_ros2_common/msg/detail/vector3__functions.h"  // actual_position, actual_rotation, target_position, target_rotation

// forward declare type support functions

bool cdr_serialize_aubo_ros2_common__msg__Vector3(
  const aubo_ros2_common__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_aubo_ros2_common__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common__msg__Vector3 * ros_message);

size_t get_serialized_size_aubo_ros2_common__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_aubo_ros2_common__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_aubo_ros2_common__msg__Vector3(
  const aubo_ros2_common__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_aubo_ros2_common__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_aubo_ros2_common__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, msg, Vector3)();


using _AuboTcpPose__ros_msg_type = aubo_ros2_common__msg__AuboTcpPose;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_aubo_ros2_common__msg__AuboTcpPose(
  const aubo_ros2_common__msg__AuboTcpPose * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_position
  {
    cdr_serialize_aubo_ros2_common__msg__Vector3(
      &ros_message->target_position, cdr);
  }

  // Field name: target_rotation
  {
    cdr_serialize_aubo_ros2_common__msg__Vector3(
      &ros_message->target_rotation, cdr);
  }

  // Field name: actual_position
  {
    cdr_serialize_aubo_ros2_common__msg__Vector3(
      &ros_message->actual_position, cdr);
  }

  // Field name: actual_rotation
  {
    cdr_serialize_aubo_ros2_common__msg__Vector3(
      &ros_message->actual_rotation, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_deserialize_aubo_ros2_common__msg__AuboTcpPose(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common__msg__AuboTcpPose * ros_message)
{
  // Field name: target_position
  {
    cdr_deserialize_aubo_ros2_common__msg__Vector3(cdr, &ros_message->target_position);
  }

  // Field name: target_rotation
  {
    cdr_deserialize_aubo_ros2_common__msg__Vector3(cdr, &ros_message->target_rotation);
  }

  // Field name: actual_position
  {
    cdr_deserialize_aubo_ros2_common__msg__Vector3(cdr, &ros_message->actual_position);
  }

  // Field name: actual_rotation
  {
    cdr_deserialize_aubo_ros2_common__msg__Vector3(cdr, &ros_message->actual_rotation);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_aubo_ros2_common__msg__AuboTcpPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AuboTcpPose__ros_msg_type * ros_message = static_cast<const _AuboTcpPose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_position
  current_alignment += get_serialized_size_aubo_ros2_common__msg__Vector3(
    &(ros_message->target_position), current_alignment);

  // Field name: target_rotation
  current_alignment += get_serialized_size_aubo_ros2_common__msg__Vector3(
    &(ros_message->target_rotation), current_alignment);

  // Field name: actual_position
  current_alignment += get_serialized_size_aubo_ros2_common__msg__Vector3(
    &(ros_message->actual_position), current_alignment);

  // Field name: actual_rotation
  current_alignment += get_serialized_size_aubo_ros2_common__msg__Vector3(
    &(ros_message->actual_rotation), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_aubo_ros2_common__msg__AuboTcpPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: target_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: target_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: actual_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: actual_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aubo_ros2_common__msg__AuboTcpPose;
    is_plain =
      (
      offsetof(DataType, actual_rotation) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_key_aubo_ros2_common__msg__AuboTcpPose(
  const aubo_ros2_common__msg__AuboTcpPose * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_position
  {
    cdr_serialize_key_aubo_ros2_common__msg__Vector3(
      &ros_message->target_position, cdr);
  }

  // Field name: target_rotation
  {
    cdr_serialize_key_aubo_ros2_common__msg__Vector3(
      &ros_message->target_rotation, cdr);
  }

  // Field name: actual_position
  {
    cdr_serialize_key_aubo_ros2_common__msg__Vector3(
      &ros_message->actual_position, cdr);
  }

  // Field name: actual_rotation
  {
    cdr_serialize_key_aubo_ros2_common__msg__Vector3(
      &ros_message->actual_rotation, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_key_aubo_ros2_common__msg__AuboTcpPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AuboTcpPose__ros_msg_type * ros_message = static_cast<const _AuboTcpPose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_position
  current_alignment += get_serialized_size_key_aubo_ros2_common__msg__Vector3(
    &(ros_message->target_position), current_alignment);

  // Field name: target_rotation
  current_alignment += get_serialized_size_key_aubo_ros2_common__msg__Vector3(
    &(ros_message->target_rotation), current_alignment);

  // Field name: actual_position
  current_alignment += get_serialized_size_key_aubo_ros2_common__msg__Vector3(
    &(ros_message->actual_position), current_alignment);

  // Field name: actual_rotation
  current_alignment += get_serialized_size_key_aubo_ros2_common__msg__Vector3(
    &(ros_message->actual_rotation), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_key_aubo_ros2_common__msg__AuboTcpPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: target_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: target_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: actual_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: actual_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_aubo_ros2_common__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aubo_ros2_common__msg__AuboTcpPose;
    is_plain =
      (
      offsetof(DataType, actual_rotation) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AuboTcpPose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const aubo_ros2_common__msg__AuboTcpPose * ros_message = static_cast<const aubo_ros2_common__msg__AuboTcpPose *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_aubo_ros2_common__msg__AuboTcpPose(ros_message, cdr);
}

static bool _AuboTcpPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  aubo_ros2_common__msg__AuboTcpPose * ros_message = static_cast<aubo_ros2_common__msg__AuboTcpPose *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_aubo_ros2_common__msg__AuboTcpPose(cdr, ros_message);
}

static uint32_t _AuboTcpPose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aubo_ros2_common__msg__AuboTcpPose(
      untyped_ros_message, 0));
}

static size_t _AuboTcpPose__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aubo_ros2_common__msg__AuboTcpPose(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AuboTcpPose = {
  "aubo_ros2_common::msg",
  "AuboTcpPose",
  _AuboTcpPose__cdr_serialize,
  _AuboTcpPose__cdr_deserialize,
  _AuboTcpPose__get_serialized_size,
  _AuboTcpPose__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AuboTcpPose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AuboTcpPose,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_hash,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_description,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, msg, AuboTcpPose)() {
  return &_AuboTcpPose__type_support;
}

#if defined(__cplusplus)
}
#endif
