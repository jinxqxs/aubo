// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace aubo_ros2_common
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const aubo_ros2_common::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  aubo_ros2_common::msg::Vector3 &);
size_t get_serialized_size(
  const aubo_ros2_common::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const aubo_ros2_common::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const aubo_ros2_common::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_key_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace aubo_ros2_common

// functions for aubo_ros2_common::msg::Vector3 already declared above

// functions for aubo_ros2_common::msg::Vector3 already declared above

// functions for aubo_ros2_common::msg::Vector3 already declared above


namespace aubo_ros2_common
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_serialize(
  const aubo_ros2_common::msg::AuboTcpPose & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_position
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target_position,
    cdr);

  // Member: target_rotation
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target_rotation,
    cdr);

  // Member: actual_position
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.actual_position,
    cdr);

  // Member: actual_rotation
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.actual_rotation,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common::msg::AuboTcpPose & ros_message)
{
  // Member: target_position
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target_position);

  // Member: target_rotation
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target_rotation);

  // Member: actual_position
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.actual_position);

  // Member: actual_rotation
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.actual_rotation);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
get_serialized_size(
  const aubo_ros2_common::msg::AuboTcpPose & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_position
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target_position, current_alignment);

  // Member: target_rotation
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target_rotation, current_alignment);

  // Member: actual_position
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.actual_position, current_alignment);

  // Member: actual_rotation
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.actual_rotation, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
max_serialized_size_AuboTcpPose(
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

  // Member: target_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: target_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: actual_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: actual_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
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
    using DataType = aubo_ros2_common::msg::AuboTcpPose;
    is_plain =
      (
      offsetof(DataType, actual_rotation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_serialize_key(
  const aubo_ros2_common::msg::AuboTcpPose & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_position
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.target_position,
    cdr);

  // Member: target_rotation
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.target_rotation,
    cdr);

  // Member: actual_position
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.actual_position,
    cdr);

  // Member: actual_rotation
  aubo_ros2_common::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.actual_rotation,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
get_serialized_size_key(
  const aubo_ros2_common::msg::AuboTcpPose & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_position
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.target_position, current_alignment);

  // Member: target_rotation
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.target_rotation, current_alignment);

  // Member: actual_position
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.actual_position, current_alignment);

  // Member: actual_rotation
  current_alignment +=
    aubo_ros2_common::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.actual_rotation, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
max_serialized_size_key_AuboTcpPose(
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

  // Member: target_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: target_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: actual_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: actual_rotation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        aubo_ros2_common::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
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
    using DataType = aubo_ros2_common::msg::AuboTcpPose;
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
  auto typed_message =
    static_cast<const aubo_ros2_common::msg::AuboTcpPose *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AuboTcpPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aubo_ros2_common::msg::AuboTcpPose *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AuboTcpPose__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aubo_ros2_common::msg::AuboTcpPose *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AuboTcpPose__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AuboTcpPose(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AuboTcpPose__callbacks = {
  "aubo_ros2_common::msg",
  "AuboTcpPose",
  _AuboTcpPose__cdr_serialize,
  _AuboTcpPose__cdr_deserialize,
  _AuboTcpPose__get_serialized_size,
  _AuboTcpPose__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AuboTcpPose__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AuboTcpPose__callbacks,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_hash,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_description,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aubo_ros2_common

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
get_message_type_support_handle<aubo_ros2_common::msg::AuboTcpPose>()
{
  return &aubo_ros2_common::msg::typesupport_fastrtps_cpp::_AuboTcpPose__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aubo_ros2_common, msg, AuboTcpPose)() {
  return &aubo_ros2_common::msg::typesupport_fastrtps_cpp::_AuboTcpPose__handle;
}

#ifdef __cplusplus
}
#endif
