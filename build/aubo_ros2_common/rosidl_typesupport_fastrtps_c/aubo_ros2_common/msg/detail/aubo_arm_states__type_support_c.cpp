// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_arm_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__functions.h"
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


// forward declare type support functions


using _AuboArmStates__ros_msg_type = aubo_ros2_common__msg__AuboArmStates;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_aubo_ros2_common__msg__AuboArmStates(
  const aubo_ros2_common__msg__AuboArmStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: move_type
  {
    cdr << ros_message->move_type;
  }

  // Field name: collision_level
  {
    cdr << ros_message->collision_level;
  }

  // Field name: arm_power_status
  {
    cdr << (ros_message->arm_power_status ? true : false);
  }

  // Field name: collision_stopped
  {
    cdr << (ros_message->collision_stopped ? true : false);
  }

  // Field name: emergency_stopped
  {
    cdr << (ros_message->emergency_stopped ? true : false);
  }

  // Field name: singularity_stopped
  {
    cdr << (ros_message->singularity_stopped ? true : false);
  }

  // Field name: protective_stopped
  {
    cdr << (ros_message->protective_stopped ? true : false);
  }

  // Field name: in_motion
  {
    cdr << (ros_message->in_motion ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_deserialize_aubo_ros2_common__msg__AuboArmStates(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common__msg__AuboArmStates * ros_message)
{
  // Field name: move_type
  {
    cdr >> ros_message->move_type;
  }

  // Field name: collision_level
  {
    cdr >> ros_message->collision_level;
  }

  // Field name: arm_power_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arm_power_status = tmp ? true : false;
  }

  // Field name: collision_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->collision_stopped = tmp ? true : false;
  }

  // Field name: emergency_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stopped = tmp ? true : false;
  }

  // Field name: singularity_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->singularity_stopped = tmp ? true : false;
  }

  // Field name: protective_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->protective_stopped = tmp ? true : false;
  }

  // Field name: in_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_motion = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_aubo_ros2_common__msg__AuboArmStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AuboArmStates__ros_msg_type * ros_message = static_cast<const _AuboArmStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: move_type
  {
    size_t item_size = sizeof(ros_message->move_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_level
  {
    size_t item_size = sizeof(ros_message->collision_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: arm_power_status
  {
    size_t item_size = sizeof(ros_message->arm_power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_stopped
  {
    size_t item_size = sizeof(ros_message->collision_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stopped
  {
    size_t item_size = sizeof(ros_message->emergency_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: singularity_stopped
  {
    size_t item_size = sizeof(ros_message->singularity_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: protective_stopped
  {
    size_t item_size = sizeof(ros_message->protective_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: in_motion
  {
    size_t item_size = sizeof(ros_message->in_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_aubo_ros2_common__msg__AuboArmStates(
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

  // Field name: move_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: collision_level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: arm_power_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: collision_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: singularity_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: protective_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: in_motion
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aubo_ros2_common__msg__AuboArmStates;
    is_plain =
      (
      offsetof(DataType, in_motion) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_key_aubo_ros2_common__msg__AuboArmStates(
  const aubo_ros2_common__msg__AuboArmStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: move_type
  {
    cdr << ros_message->move_type;
  }

  // Field name: collision_level
  {
    cdr << ros_message->collision_level;
  }

  // Field name: arm_power_status
  {
    cdr << (ros_message->arm_power_status ? true : false);
  }

  // Field name: collision_stopped
  {
    cdr << (ros_message->collision_stopped ? true : false);
  }

  // Field name: emergency_stopped
  {
    cdr << (ros_message->emergency_stopped ? true : false);
  }

  // Field name: singularity_stopped
  {
    cdr << (ros_message->singularity_stopped ? true : false);
  }

  // Field name: protective_stopped
  {
    cdr << (ros_message->protective_stopped ? true : false);
  }

  // Field name: in_motion
  {
    cdr << (ros_message->in_motion ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_key_aubo_ros2_common__msg__AuboArmStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AuboArmStates__ros_msg_type * ros_message = static_cast<const _AuboArmStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: move_type
  {
    size_t item_size = sizeof(ros_message->move_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_level
  {
    size_t item_size = sizeof(ros_message->collision_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: arm_power_status
  {
    size_t item_size = sizeof(ros_message->arm_power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: collision_stopped
  {
    size_t item_size = sizeof(ros_message->collision_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stopped
  {
    size_t item_size = sizeof(ros_message->emergency_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: singularity_stopped
  {
    size_t item_size = sizeof(ros_message->singularity_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: protective_stopped
  {
    size_t item_size = sizeof(ros_message->protective_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: in_motion
  {
    size_t item_size = sizeof(ros_message->in_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_key_aubo_ros2_common__msg__AuboArmStates(
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
  // Field name: move_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: collision_level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: arm_power_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: collision_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: singularity_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: protective_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: in_motion
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aubo_ros2_common__msg__AuboArmStates;
    is_plain =
      (
      offsetof(DataType, in_motion) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AuboArmStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const aubo_ros2_common__msg__AuboArmStates * ros_message = static_cast<const aubo_ros2_common__msg__AuboArmStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_aubo_ros2_common__msg__AuboArmStates(ros_message, cdr);
}

static bool _AuboArmStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  aubo_ros2_common__msg__AuboArmStates * ros_message = static_cast<aubo_ros2_common__msg__AuboArmStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_aubo_ros2_common__msg__AuboArmStates(cdr, ros_message);
}

static uint32_t _AuboArmStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aubo_ros2_common__msg__AuboArmStates(
      untyped_ros_message, 0));
}

static size_t _AuboArmStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aubo_ros2_common__msg__AuboArmStates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AuboArmStates = {
  "aubo_ros2_common::msg",
  "AuboArmStates",
  _AuboArmStates__cdr_serialize,
  _AuboArmStates__cdr_deserialize,
  _AuboArmStates__get_serialized_size,
  _AuboArmStates__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AuboArmStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AuboArmStates,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboArmStates__get_type_hash,
  &aubo_ros2_common__msg__AuboArmStates__get_type_description,
  &aubo_ros2_common__msg__AuboArmStates__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, msg, AuboArmStates)() {
  return &_AuboArmStates__type_support;
}

#if defined(__cplusplus)
}
#endif
