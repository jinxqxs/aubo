// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_arm_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.hpp"

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


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_serialize(
  const aubo_ros2_common::msg::AuboArmStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: move_type
  cdr << ros_message.move_type;

  // Member: collision_level
  cdr << ros_message.collision_level;

  // Member: arm_power_status
  cdr << (ros_message.arm_power_status ? true : false);

  // Member: collision_stopped
  cdr << (ros_message.collision_stopped ? true : false);

  // Member: emergency_stopped
  cdr << (ros_message.emergency_stopped ? true : false);

  // Member: singularity_stopped
  cdr << (ros_message.singularity_stopped ? true : false);

  // Member: protective_stopped
  cdr << (ros_message.protective_stopped ? true : false);

  // Member: in_motion
  cdr << (ros_message.in_motion ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aubo_ros2_common::msg::AuboArmStates & ros_message)
{
  // Member: move_type
  cdr >> ros_message.move_type;

  // Member: collision_level
  cdr >> ros_message.collision_level;

  // Member: arm_power_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arm_power_status = tmp ? true : false;
  }

  // Member: collision_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.collision_stopped = tmp ? true : false;
  }

  // Member: emergency_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stopped = tmp ? true : false;
  }

  // Member: singularity_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.singularity_stopped = tmp ? true : false;
  }

  // Member: protective_stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.protective_stopped = tmp ? true : false;
  }

  // Member: in_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_motion = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
get_serialized_size(
  const aubo_ros2_common::msg::AuboArmStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: move_type
  {
    size_t item_size = sizeof(ros_message.move_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_level
  {
    size_t item_size = sizeof(ros_message.collision_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: arm_power_status
  {
    size_t item_size = sizeof(ros_message.arm_power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_stopped
  {
    size_t item_size = sizeof(ros_message.collision_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stopped
  {
    size_t item_size = sizeof(ros_message.emergency_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: singularity_stopped
  {
    size_t item_size = sizeof(ros_message.singularity_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: protective_stopped
  {
    size_t item_size = sizeof(ros_message.protective_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: in_motion
  {
    size_t item_size = sizeof(ros_message.in_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
max_serialized_size_AuboArmStates(
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

  // Member: move_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: collision_level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: arm_power_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: collision_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: emergency_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: singularity_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: protective_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: in_motion
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
    using DataType = aubo_ros2_common::msg::AuboArmStates;
    is_plain =
      (
      offsetof(DataType, in_motion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
cdr_serialize_key(
  const aubo_ros2_common::msg::AuboArmStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: move_type
  cdr << ros_message.move_type;

  // Member: collision_level
  cdr << ros_message.collision_level;

  // Member: arm_power_status
  cdr << (ros_message.arm_power_status ? true : false);

  // Member: collision_stopped
  cdr << (ros_message.collision_stopped ? true : false);

  // Member: emergency_stopped
  cdr << (ros_message.emergency_stopped ? true : false);

  // Member: singularity_stopped
  cdr << (ros_message.singularity_stopped ? true : false);

  // Member: protective_stopped
  cdr << (ros_message.protective_stopped ? true : false);

  // Member: in_motion
  cdr << (ros_message.in_motion ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
get_serialized_size_key(
  const aubo_ros2_common::msg::AuboArmStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: move_type
  {
    size_t item_size = sizeof(ros_message.move_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_level
  {
    size_t item_size = sizeof(ros_message.collision_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: arm_power_status
  {
    size_t item_size = sizeof(ros_message.arm_power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: collision_stopped
  {
    size_t item_size = sizeof(ros_message.collision_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stopped
  {
    size_t item_size = sizeof(ros_message.emergency_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: singularity_stopped
  {
    size_t item_size = sizeof(ros_message.singularity_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: protective_stopped
  {
    size_t item_size = sizeof(ros_message.protective_stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: in_motion
  {
    size_t item_size = sizeof(ros_message.in_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aubo_ros2_common
max_serialized_size_key_AuboArmStates(
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

  // Member: move_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: collision_level
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: arm_power_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: collision_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: singularity_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: protective_stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_motion
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
    using DataType = aubo_ros2_common::msg::AuboArmStates;
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
  auto typed_message =
    static_cast<const aubo_ros2_common::msg::AuboArmStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AuboArmStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aubo_ros2_common::msg::AuboArmStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AuboArmStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aubo_ros2_common::msg::AuboArmStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AuboArmStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AuboArmStates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AuboArmStates__callbacks = {
  "aubo_ros2_common::msg",
  "AuboArmStates",
  _AuboArmStates__cdr_serialize,
  _AuboArmStates__cdr_deserialize,
  _AuboArmStates__get_serialized_size,
  _AuboArmStates__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AuboArmStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AuboArmStates__callbacks,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboArmStates__get_type_hash,
  &aubo_ros2_common__msg__AuboArmStates__get_type_description,
  &aubo_ros2_common__msg__AuboArmStates__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aubo_ros2_common

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aubo_ros2_common
const rosidl_message_type_support_t *
get_message_type_support_handle<aubo_ros2_common::msg::AuboArmStates>()
{
  return &aubo_ros2_common::msg::typesupport_fastrtps_cpp::_AuboArmStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aubo_ros2_common, msg, AuboArmStates)() {
  return &aubo_ros2_common::msg::typesupport_fastrtps_cpp::_AuboArmStates__handle;
}

#ifdef __cplusplus
}
#endif
