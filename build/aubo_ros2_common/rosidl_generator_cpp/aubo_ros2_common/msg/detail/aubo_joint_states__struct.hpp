// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_joint_states.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__STRUCT_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aubo_ros2_common__msg__AuboJointStates __attribute__((deprecated))
#else
# define DEPRECATED__aubo_ros2_common__msg__AuboJointStates __declspec(deprecated)
#endif

namespace aubo_ros2_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuboJointStates_
{
  using Type = AuboJointStates_<ContainerAllocator>;

  explicit AuboJointStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AuboJointStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _target_current_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _target_current_type target_current;
  using _actual_current_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _actual_current_type actual_current;
  using _target_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _target_position_type target_position;
  using _actual_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _actual_position_type actual_position;

  // setters for named parameter idiom
  Type & set__target_current(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->target_current = _arg;
    return *this;
  }
  Type & set__actual_current(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->actual_current = _arg;
    return *this;
  }
  Type & set__target_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__actual_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->actual_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aubo_ros2_common__msg__AuboJointStates
    std::shared_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aubo_ros2_common__msg__AuboJointStates
    std::shared_ptr<aubo_ros2_common::msg::AuboJointStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuboJointStates_ & other) const
  {
    if (this->target_current != other.target_current) {
      return false;
    }
    if (this->actual_current != other.actual_current) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->actual_position != other.actual_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuboJointStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuboJointStates_

// alias to use template instance with default allocator
using AuboJointStates =
  aubo_ros2_common::msg::AuboJointStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_JOINT_STATES__STRUCT_HPP_
