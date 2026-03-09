// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice

#include "aubo_ros2_common/msg/detail/aubo_joint_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__msg__AuboJointStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3f, 0x62, 0x18, 0x1b, 0xc3, 0x20, 0xef, 0xb8,
      0xf0, 0x0e, 0x36, 0x65, 0x98, 0xa5, 0x7a, 0x1b,
      0x33, 0x6d, 0xe4, 0x80, 0x5b, 0xa4, 0x40, 0xcf,
      0x4c, 0xe3, 0x22, 0x0e, 0xc3, 0x5a, 0xb4, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aubo_ros2_common__msg__AuboJointStates__TYPE_NAME[] = "aubo_ros2_common/msg/AuboJointStates";

// Define type names, field names, and default values
static char aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__target_current[] = "target_current";
static char aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__actual_current[] = "actual_current";
static char aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__target_position[] = "target_position";
static char aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__actual_position[] = "actual_position";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__msg__AuboJointStates__FIELDS[] = {
  {
    {aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__target_current, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__actual_current, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboJointStates__FIELD_NAME__actual_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__msg__AuboJointStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__msg__AuboJointStates__TYPE_NAME, 36, 36},
      {aubo_ros2_common__msg__AuboJointStates__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16[] target_current\n"
  "int16[] actual_current\n"
  "float64[] target_position\n"
  "float64[] actual_position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__msg__AuboJointStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__msg__AuboJointStates__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__msg__AuboJointStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__msg__AuboJointStates__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
