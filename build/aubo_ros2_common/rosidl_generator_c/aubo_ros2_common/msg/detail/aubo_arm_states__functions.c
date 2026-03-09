// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_arm_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aubo_ros2_common__msg__AuboArmStates__init(aubo_ros2_common__msg__AuboArmStates * msg)
{
  if (!msg) {
    return false;
  }
  // move_type
  // collision_level
  // arm_power_status
  // collision_stopped
  // emergency_stopped
  // singularity_stopped
  // protective_stopped
  // in_motion
  return true;
}

void
aubo_ros2_common__msg__AuboArmStates__fini(aubo_ros2_common__msg__AuboArmStates * msg)
{
  if (!msg) {
    return;
  }
  // move_type
  // collision_level
  // arm_power_status
  // collision_stopped
  // emergency_stopped
  // singularity_stopped
  // protective_stopped
  // in_motion
}

bool
aubo_ros2_common__msg__AuboArmStates__are_equal(const aubo_ros2_common__msg__AuboArmStates * lhs, const aubo_ros2_common__msg__AuboArmStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // move_type
  if (lhs->move_type != rhs->move_type) {
    return false;
  }
  // collision_level
  if (lhs->collision_level != rhs->collision_level) {
    return false;
  }
  // arm_power_status
  if (lhs->arm_power_status != rhs->arm_power_status) {
    return false;
  }
  // collision_stopped
  if (lhs->collision_stopped != rhs->collision_stopped) {
    return false;
  }
  // emergency_stopped
  if (lhs->emergency_stopped != rhs->emergency_stopped) {
    return false;
  }
  // singularity_stopped
  if (lhs->singularity_stopped != rhs->singularity_stopped) {
    return false;
  }
  // protective_stopped
  if (lhs->protective_stopped != rhs->protective_stopped) {
    return false;
  }
  // in_motion
  if (lhs->in_motion != rhs->in_motion) {
    return false;
  }
  return true;
}

bool
aubo_ros2_common__msg__AuboArmStates__copy(
  const aubo_ros2_common__msg__AuboArmStates * input,
  aubo_ros2_common__msg__AuboArmStates * output)
{
  if (!input || !output) {
    return false;
  }
  // move_type
  output->move_type = input->move_type;
  // collision_level
  output->collision_level = input->collision_level;
  // arm_power_status
  output->arm_power_status = input->arm_power_status;
  // collision_stopped
  output->collision_stopped = input->collision_stopped;
  // emergency_stopped
  output->emergency_stopped = input->emergency_stopped;
  // singularity_stopped
  output->singularity_stopped = input->singularity_stopped;
  // protective_stopped
  output->protective_stopped = input->protective_stopped;
  // in_motion
  output->in_motion = input->in_motion;
  return true;
}

aubo_ros2_common__msg__AuboArmStates *
aubo_ros2_common__msg__AuboArmStates__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__msg__AuboArmStates * msg = (aubo_ros2_common__msg__AuboArmStates *)allocator.allocate(sizeof(aubo_ros2_common__msg__AuboArmStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aubo_ros2_common__msg__AuboArmStates));
  bool success = aubo_ros2_common__msg__AuboArmStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aubo_ros2_common__msg__AuboArmStates__destroy(aubo_ros2_common__msg__AuboArmStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aubo_ros2_common__msg__AuboArmStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aubo_ros2_common__msg__AuboArmStates__Sequence__init(aubo_ros2_common__msg__AuboArmStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__msg__AuboArmStates * data = NULL;

  if (size) {
    data = (aubo_ros2_common__msg__AuboArmStates *)allocator.zero_allocate(size, sizeof(aubo_ros2_common__msg__AuboArmStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aubo_ros2_common__msg__AuboArmStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aubo_ros2_common__msg__AuboArmStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aubo_ros2_common__msg__AuboArmStates__Sequence__fini(aubo_ros2_common__msg__AuboArmStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aubo_ros2_common__msg__AuboArmStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aubo_ros2_common__msg__AuboArmStates__Sequence *
aubo_ros2_common__msg__AuboArmStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__msg__AuboArmStates__Sequence * array = (aubo_ros2_common__msg__AuboArmStates__Sequence *)allocator.allocate(sizeof(aubo_ros2_common__msg__AuboArmStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aubo_ros2_common__msg__AuboArmStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aubo_ros2_common__msg__AuboArmStates__Sequence__destroy(aubo_ros2_common__msg__AuboArmStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aubo_ros2_common__msg__AuboArmStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aubo_ros2_common__msg__AuboArmStates__Sequence__are_equal(const aubo_ros2_common__msg__AuboArmStates__Sequence * lhs, const aubo_ros2_common__msg__AuboArmStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aubo_ros2_common__msg__AuboArmStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aubo_ros2_common__msg__AuboArmStates__Sequence__copy(
  const aubo_ros2_common__msg__AuboArmStates__Sequence * input,
  aubo_ros2_common__msg__AuboArmStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aubo_ros2_common__msg__AuboArmStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aubo_ros2_common__msg__AuboArmStates * data =
      (aubo_ros2_common__msg__AuboArmStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aubo_ros2_common__msg__AuboArmStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aubo_ros2_common__msg__AuboArmStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aubo_ros2_common__msg__AuboArmStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
