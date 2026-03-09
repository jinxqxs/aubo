// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aubo_ros2_common/msg/detail/aubo_joint_states__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_joint_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aubo_ros2_common
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AuboJointStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aubo_ros2_common::msg::AuboJointStates(_init);
}

void AuboJointStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aubo_ros2_common::msg::AuboJointStates *>(message_memory);
  typed_message->~AuboJointStates();
}

size_t size_function__AuboJointStates__target_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuboJointStates__target_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AuboJointStates__target_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuboJointStates__target_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__AuboJointStates__target_current(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__AuboJointStates__target_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__AuboJointStates__target_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__AuboJointStates__target_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuboJointStates__actual_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuboJointStates__actual_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AuboJointStates__actual_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuboJointStates__actual_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__AuboJointStates__actual_current(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__AuboJointStates__actual_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__AuboJointStates__actual_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__AuboJointStates__actual_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuboJointStates__target_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuboJointStates__target_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__AuboJointStates__target_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuboJointStates__target_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AuboJointStates__target_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AuboJointStates__target_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AuboJointStates__target_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__AuboJointStates__target_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuboJointStates__actual_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuboJointStates__actual_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__AuboJointStates__actual_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuboJointStates__actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AuboJointStates__actual_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AuboJointStates__actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AuboJointStates__actual_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__AuboJointStates__actual_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AuboJointStates_message_member_array[4] = {
  {
    "target_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboJointStates, target_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuboJointStates__target_current,  // size() function pointer
    get_const_function__AuboJointStates__target_current,  // get_const(index) function pointer
    get_function__AuboJointStates__target_current,  // get(index) function pointer
    fetch_function__AuboJointStates__target_current,  // fetch(index, &value) function pointer
    assign_function__AuboJointStates__target_current,  // assign(index, value) function pointer
    resize_function__AuboJointStates__target_current  // resize(index) function pointer
  },
  {
    "actual_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboJointStates, actual_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuboJointStates__actual_current,  // size() function pointer
    get_const_function__AuboJointStates__actual_current,  // get_const(index) function pointer
    get_function__AuboJointStates__actual_current,  // get(index) function pointer
    fetch_function__AuboJointStates__actual_current,  // fetch(index, &value) function pointer
    assign_function__AuboJointStates__actual_current,  // assign(index, value) function pointer
    resize_function__AuboJointStates__actual_current  // resize(index) function pointer
  },
  {
    "target_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboJointStates, target_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuboJointStates__target_position,  // size() function pointer
    get_const_function__AuboJointStates__target_position,  // get_const(index) function pointer
    get_function__AuboJointStates__target_position,  // get(index) function pointer
    fetch_function__AuboJointStates__target_position,  // fetch(index, &value) function pointer
    assign_function__AuboJointStates__target_position,  // assign(index, value) function pointer
    resize_function__AuboJointStates__target_position  // resize(index) function pointer
  },
  {
    "actual_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboJointStates, actual_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuboJointStates__actual_position,  // size() function pointer
    get_const_function__AuboJointStates__actual_position,  // get_const(index) function pointer
    get_function__AuboJointStates__actual_position,  // get(index) function pointer
    fetch_function__AuboJointStates__actual_position,  // fetch(index, &value) function pointer
    assign_function__AuboJointStates__actual_position,  // assign(index, value) function pointer
    resize_function__AuboJointStates__actual_position  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AuboJointStates_message_members = {
  "aubo_ros2_common::msg",  // message namespace
  "AuboJointStates",  // message name
  4,  // number of fields
  sizeof(aubo_ros2_common::msg::AuboJointStates),
  false,  // has_any_key_member_
  AuboJointStates_message_member_array,  // message members
  AuboJointStates_init_function,  // function to initialize message memory (memory has to be allocated)
  AuboJointStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AuboJointStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AuboJointStates_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboJointStates__get_type_hash,
  &aubo_ros2_common__msg__AuboJointStates__get_type_description,
  &aubo_ros2_common__msg__AuboJointStates__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aubo_ros2_common


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aubo_ros2_common::msg::AuboJointStates>()
{
  return &::aubo_ros2_common::msg::rosidl_typesupport_introspection_cpp::AuboJointStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aubo_ros2_common, msg, AuboJointStates)() {
  return &::aubo_ros2_common::msg::rosidl_typesupport_introspection_cpp::AuboJointStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
