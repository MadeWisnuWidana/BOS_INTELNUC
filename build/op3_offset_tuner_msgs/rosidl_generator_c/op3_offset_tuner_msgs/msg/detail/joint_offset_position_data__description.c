// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_offset_tuner_msgs:msg/JointOffsetPositionData.idl
// generated code does not contain a copyright notice

#include "op3_offset_tuner_msgs/msg/detail/joint_offset_position_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x91, 0x34, 0x5d, 0x5e, 0xdd, 0xa0, 0xc7,
      0x10, 0x6e, 0xc1, 0xa6, 0xb3, 0x86, 0x8e, 0x2e,
      0xec, 0x9e, 0x96, 0x66, 0xb2, 0x1a, 0xa1, 0x9f,
      0x8d, 0x1a, 0xad, 0x28, 0xca, 0x4f, 0x92, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME[] = "op3_offset_tuner_msgs/msg/JointOffsetPositionData";

// Define type names, field names, and default values
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__joint_name[] = "joint_name";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__goal_value[] = "goal_value";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__offset_value[] = "offset_value";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__present_value[] = "present_value";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__p_gain[] = "p_gain";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__i_gain[] = "i_gain";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__d_gain[] = "d_gain";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__goal_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__offset_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__present_value, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__p_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__i_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELD_NAME__d_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME, 49, 49},
      {op3_offset_tuner_msgs__msg__JointOffsetPositionData__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string  joint_name\n"
  "float64 goal_value\n"
  "float64 offset_value\n"
  "float64 present_value\n"
  "int32   p_gain\n"
  "int32   i_gain\n"
  "int32   d_gain";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME, 49, 49},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 125, 125},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
