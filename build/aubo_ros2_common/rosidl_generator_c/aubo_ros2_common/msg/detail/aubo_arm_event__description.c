// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
// generated code does not contain a copyright notice

#include "aubo_ros2_common/msg/detail/aubo_arm_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__msg__AuboArmEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x47, 0x66, 0xb1, 0x63, 0x8e, 0x77, 0xd6,
      0x6f, 0xe7, 0x52, 0x3c, 0x95, 0xad, 0x66, 0x45,
      0x63, 0x23, 0x26, 0x93, 0x30, 0xee, 0xde, 0x06,
      0x7c, 0xea, 0x5b, 0xa0, 0xe8, 0x38, 0x2c, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aubo_ros2_common__msg__AuboArmEvent__TYPE_NAME[] = "aubo_ros2_common/msg/AuboArmEvent";

// Define type names, field names, and default values
static char aubo_ros2_common__msg__AuboArmEvent__FIELD_NAME__event_type[] = "event_type";
static char aubo_ros2_common__msg__AuboArmEvent__FIELD_NAME__event_code[] = "event_code";
static char aubo_ros2_common__msg__AuboArmEvent__FIELD_NAME__event_content[] = "event_content";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__msg__AuboArmEvent__FIELDS[] = {
  {
    {aubo_ros2_common__msg__AuboArmEvent__FIELD_NAME__event_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmEvent__FIELD_NAME__event_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboArmEvent__FIELD_NAME__event_content, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__msg__AuboArmEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__msg__AuboArmEvent__TYPE_NAME, 33, 33},
      {aubo_ros2_common__msg__AuboArmEvent__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 event_type\n"
  "int16 event_code\n"
  "string event_content";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__msg__AuboArmEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__msg__AuboArmEvent__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__msg__AuboArmEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__msg__AuboArmEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
