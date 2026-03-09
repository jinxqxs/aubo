// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aubo_ros2_common:msg/Vector3.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aubo_ros2_common/msg/detail/vector3__functions.h"
#include "aubo_ros2_common/msg/detail/vector3__struct.hpp"
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

void Vector3_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aubo_ros2_common::msg::Vector3(_init);
}

void Vector3_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aubo_ros2_common::msg::Vector3 *>(message_memory);
  typed_message->~Vector3();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Vector3_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::Vector3, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::Vector3, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::Vector3, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Vector3_message_members = {
  "aubo_ros2_common::msg",  // message namespace
  "Vector3",  // message name
  3,  // number of fields
  sizeof(aubo_ros2_common::msg::Vector3),
  false,  // has_any_key_member_
  Vector3_message_member_array,  // message members
  Vector3_init_function,  // function to initialize message memory (memory has to be allocated)
  Vector3_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Vector3_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Vector3_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__Vector3__get_type_hash,
  &aubo_ros2_common__msg__Vector3__get_type_description,
  &aubo_ros2_common__msg__Vector3__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aubo_ros2_common


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aubo_ros2_common::msg::Vector3>()
{
  return &::aubo_ros2_common::msg::rosidl_typesupport_introspection_cpp::Vector3_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aubo_ros2_common, msg, Vector3)() {
  return &::aubo_ros2_common::msg::rosidl_typesupport_introspection_cpp::Vector3_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
