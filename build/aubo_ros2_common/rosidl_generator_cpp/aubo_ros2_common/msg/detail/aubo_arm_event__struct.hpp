// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_event.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__STRUCT_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aubo_ros2_common__msg__AuboArmEvent __attribute__((deprecated))
#else
# define DEPRECATED__aubo_ros2_common__msg__AuboArmEvent __declspec(deprecated)
#endif

namespace aubo_ros2_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuboArmEvent_
{
  using Type = AuboArmEvent_<ContainerAllocator>;

  explicit AuboArmEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0;
      this->event_code = 0;
      this->event_content = "";
    }
  }

  explicit AuboArmEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0;
      this->event_code = 0;
      this->event_content = "";
    }
  }

  // field types and members
  using _event_type_type =
    int16_t;
  _event_type_type event_type;
  using _event_code_type =
    int16_t;
  _event_code_type event_code;
  using _event_content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_content_type event_content;

  // setters for named parameter idiom
  Type & set__event_type(
    const int16_t & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__event_code(
    const int16_t & _arg)
  {
    this->event_code = _arg;
    return *this;
  }
  Type & set__event_content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aubo_ros2_common__msg__AuboArmEvent
    std::shared_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aubo_ros2_common__msg__AuboArmEvent
    std::shared_ptr<aubo_ros2_common::msg::AuboArmEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuboArmEvent_ & other) const
  {
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->event_code != other.event_code) {
      return false;
    }
    if (this->event_content != other.event_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuboArmEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuboArmEvent_

// alias to use template instance with default allocator
using AuboArmEvent =
  aubo_ros2_common::msg::AuboArmEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_EVENT__STRUCT_HPP_
