// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

#include "aubo_ros2_common/msg/detail/aubo_arm_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__msg__AuboArmStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x98, 0x23, 0x2d, 0x79, 0x3c, 0x64, 0xa7,
      0xa5, 0x6d, 0xca, 0x6e, 0x17, 0x7e, 0x24, 0xea,
      0x03, 0x65, 0xe0, 0x3f, 0xdf, 0xd7, 0x97, 0xb5,
      0x9e, 0x79, 0xd0, 0xb5, 0xe8, 0x91, 0x8e, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aubo_ros2_common__msg__AuboArmStates__TYPE_NAME[] = "aubo_ros2_common/msg/AuboArmStates";

// Define type names, field names, and default values
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__move_type[] = "move_type";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__collision_level[] = "collision_level";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__arm_power_status[] = "arm_power_status";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__collision_stopped[] = "collision_stopped";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__emergency_stopped[] = "emergency_stopped";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__singularity_stopped[] = "singularity_stopped";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__protective_stopped[] = "protective_stopped";
static char aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__in_motion[] = "in_motion";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__msg__AuboArmStates__FIELDS[] = {
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__move_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__collision_level, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__arm_power_status, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__collision_stopped, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__emergency_stopped, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__singularity_stopped, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__protective_stopped, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmStates__FIELD_NAME__in_motion, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__msg__AuboArmStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__msg__AuboArmStates__TYPE_NAME, 34, 34},
      {aubo_ros2_common__msg__AuboArmStates__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 move_type\n"
  "int16 collision_level\n"
  "bool arm_power_status\n"
  "bool collision_stopped\n"
  "bool emergency_stopped\n"
  "bool singularity_stopped\n"
  "bool protective_stopped\n"
  "bool in_motion";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__msg__AuboArmStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__msg__AuboArmStates__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__msg__AuboArmStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__msg__AuboArmStates__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
