// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_arm_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aubo_ros2_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_event__struct.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_event__functions.h"
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

#include "rosidl_runtime_c/string.h"  // event_content
#include "rosidl_runtime_c/string_functions.h"  // event_content

// forward declare type support functions


using _AuboArmEvent__ros_msg_type = aubo_ros2_common__msg__AuboArmEvent;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_aubo_ros2_common__msg__AuboArmEvent(
  const aubo_ros2_common__msg__AuboArmEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: event_type
  {
    cdr << ros_message->event_type;
  }

  // Field name: event_code
  {
    cdr << ros_message->event_code;
  }

  // Field name: event_content
  {
    const rosidl_runtime_c__String * str = &ros_message->event_content;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_deserialize_aubo_ros2_common__msg__AuboArmEvent(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common__msg__AuboArmEvent * ros_message)
{
  // Field name: event_type
  {
    cdr >> ros_message->event_type;
  }

  // Field name: event_code
  {
    cdr >> ros_message->event_code;
  }

  // Field name: event_content
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->event_content.data) {
      rosidl_runtime_c__String__init(&ros_message->event_content);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->event_content,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'event_content'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_aubo_ros2_common__msg__AuboArmEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AuboArmEvent__ros_msg_type * ros_message = static_cast<const _AuboArmEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: event_type
  {
    size_t item_size = sizeof(ros_message->event_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: event_code
  {
    size_t item_size = sizeof(ros_message->event_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: event_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->event_content.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_aubo_ros2_common__msg__AuboArmEvent(
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

  // Field name: event_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: event_code
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: event_content
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aubo_ros2_common__msg__AuboArmEvent;
    is_plain =
      (
      offsetof(DataType, event_content) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
bool cdr_serialize_key_aubo_ros2_common__msg__AuboArmEvent(
  const aubo_ros2_common__msg__AuboArmEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: event_type
  {
    cdr << ros_message->event_type;
  }

  // Field name: event_code
  {
    cdr << ros_message->event_code;
  }

  // Field name: event_content
  {
    const rosidl_runtime_c__String * str = &ros_message->event_content;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t get_serialized_size_key_aubo_ros2_common__msg__AuboArmEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AuboArmEvent__ros_msg_type * ros_message = static_cast<const _AuboArmEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: event_type
  {
    size_t item_size = sizeof(ros_message->event_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: event_code
  {
    size_t item_size = sizeof(ros_message->event_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: event_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->event_content.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aubo_ros2_common
size_t max_serialized_size_key_aubo_ros2_common__msg__AuboArmEvent(
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
  // Field name: event_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: event_code
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: event_content
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aubo_ros2_common__msg__AuboArmEvent;
    is_plain =
      (
      offsetof(DataType, event_content) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AuboArmEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const aubo_ros2_common__msg__AuboArmEvent * ros_message = static_cast<const aubo_ros2_common__msg__AuboArmEvent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_aubo_ros2_common__msg__AuboArmEvent(ros_message, cdr);
}

static bool _AuboArmEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  aubo_ros2_common__msg__AuboArmEvent * ros_message = static_cast<aubo_ros2_common__msg__AuboArmEvent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_aubo_ros2_common__msg__AuboArmEvent(cdr, ros_message);
}

static uint32_t _AuboArmEvent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aubo_ros2_common__msg__AuboArmEvent(
      untyped_ros_message, 0));
}

static size_t _AuboArmEvent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aubo_ros2_common__msg__AuboArmEvent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AuboArmEvent = {
  "aubo_ros2_common::msg",
  "AuboArmEvent",
  _AuboArmEvent__cdr_serialize,
  _AuboArmEvent__cdr_deserialize,
  _AuboArmEvent__get_serialized_size,
  _AuboArmEvent__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AuboArmEvent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AuboArmEvent,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboArmEvent__get_type_hash,
  &aubo_ros2_common__msg__AuboArmEvent__get_type_description,
  &aubo_ros2_common__msg__AuboArmEvent__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, msg, AuboArmEvent)() {
  return &_AuboArmEvent__type_support;
}

#if defined(__cplusplus)
}
#endif
