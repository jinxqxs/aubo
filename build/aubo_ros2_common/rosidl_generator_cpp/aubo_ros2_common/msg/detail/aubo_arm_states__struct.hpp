// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_states.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__STRUCT_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aubo_ros2_common__msg__AuboArmStates __attribute__((deprecated))
#else
# define DEPRECATED__aubo_ros2_common__msg__AuboArmStates __declspec(deprecated)
#endif

namespace aubo_ros2_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuboArmStates_
{
  using Type = AuboArmStates_<ContainerAllocator>;

  explicit AuboArmStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_type = 0;
      this->collision_level = 0;
      this->arm_power_status = false;
      this->collision_stopped = false;
      this->emergency_stopped = false;
      this->singularity_stopped = false;
      this->protective_stopped = false;
      this->in_motion = false;
    }
  }

  explicit AuboArmStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_type = 0;
      this->collision_level = 0;
      this->arm_power_status = false;
      this->collision_stopped = false;
      this->emergency_stopped = false;
      this->singularity_stopped = false;
      this->protective_stopped = false;
      this->in_motion = false;
    }
  }

  // field types and members
  using _move_type_type =
    int16_t;
  _move_type_type move_type;
  using _collision_level_type =
    int16_t;
  _collision_level_type collision_level;
  using _arm_power_status_type =
    bool;
  _arm_power_status_type arm_power_status;
  using _collision_stopped_type =
    bool;
  _collision_stopped_type collision_stopped;
  using _emergency_stopped_type =
    bool;
  _emergency_stopped_type emergency_stopped;
  using _singularity_stopped_type =
    bool;
  _singularity_stopped_type singularity_stopped;
  using _protective_stopped_type =
    bool;
  _protective_stopped_type protective_stopped;
  using _in_motion_type =
    bool;
  _in_motion_type in_motion;

  // setters for named parameter idiom
  Type & set__move_type(
    const int16_t & _arg)
  {
    this->move_type = _arg;
    return *this;
  }
  Type & set__collision_level(
    const int16_t & _arg)
  {
    this->collision_level = _arg;
    return *this;
  }
  Type & set__arm_power_status(
    const bool & _arg)
  {
    this->arm_power_status = _arg;
    return *this;
  }
  Type & set__collision_stopped(
    const bool & _arg)
  {
    this->collision_stopped = _arg;
    return *this;
  }
  Type & set__emergency_stopped(
    const bool & _arg)
  {
    this->emergency_stopped = _arg;
    return *this;
  }
  Type & set__singularity_stopped(
    const bool & _arg)
  {
    this->singularity_stopped = _arg;
    return *this;
  }
  Type & set__protective_stopped(
    const bool & _arg)
  {
    this->protective_stopped = _arg;
    return *this;
  }
  Type & set__in_motion(
    const bool & _arg)
  {
    this->in_motion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aubo_ros2_common__msg__AuboArmStates
    std::shared_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aubo_ros2_common__msg__AuboArmStates
    std::shared_ptr<aubo_ros2_common::msg::AuboArmStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuboArmStates_ & other) const
  {
    if (this->move_type != other.move_type) {
      return false;
    }
    if (this->collision_level != other.collision_level) {
      return false;
    }
    if (this->arm_power_status != other.arm_power_status) {
      return false;
    }
    if (this->collision_stopped != other.collision_stopped) {
      return false;
    }
    if (this->emergency_stopped != other.emergency_stopped) {
      return false;
    }
    if (this->singularity_stopped != other.singularity_stopped) {
      return false;
    }
    if (this->protective_stopped != other.protective_stopped) {
      return false;
    }
    if (this->in_motion != other.in_motion) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuboArmStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuboArmStates_

// alias to use template instance with default allocator
using AuboArmStates =
  aubo_ros2_common::msg::AuboArmStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__STRUCT_HPP_
