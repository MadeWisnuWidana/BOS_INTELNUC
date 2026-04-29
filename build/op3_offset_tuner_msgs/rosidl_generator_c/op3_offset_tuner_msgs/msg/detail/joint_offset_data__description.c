// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_offset_tuner_msgs:msg/JointOffsetData.idl
// generated code does not contain a copyright notice

#include "op3_offset_tuner_msgs/msg/detail/joint_offset_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__msg__JointOffsetData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x74, 0xce, 0x1b, 0x7f, 0x32, 0x04, 0xbe,
      0xe5, 0xc8, 0x57, 0xb0, 0xb3, 0x9b, 0x4e, 0xd0,
      0xd8, 0xc9, 0xd0, 0x55, 0xea, 0xe2, 0xaf, 0x31,
      0xfb, 0x96, 0x96, 0x0a, 0xd6, 0x2f, 0x56, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_offset_tuner_msgs__msg__JointOffsetData__TYPE_NAME[] = "op3_offset_tuner_msgs/msg/JointOffsetData";

// Define type names, field names, and default values
static char op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__joint_name[] = "joint_name";
static char op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__goal_value[] = "goal_value";
static char op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__offset_value[] = "offset_value";
static char op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__p_gain[] = "p_gain";
static char op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__i_gain[] = "i_gain";
static char op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__d_gain[] = "d_gain";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__msg__JointOffsetData__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__goal_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__offset_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__p_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__i_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetData__FIELD_NAME__d_gain, 6, 6},
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
op3_offset_tuner_msgs__msg__JointOffsetData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__msg__JointOffsetData__TYPE_NAME, 41, 41},
      {op3_offset_tuner_msgs__msg__JointOffsetData__FIELDS, 6, 6},
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
  "int32   p_gain\n"
  "int32   i_gain\n"
  "int32   d_gain";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__msg__JointOffsetData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__msg__JointOffsetData__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 103, 103},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__msg__JointOffsetData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__msg__JointOffsetData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
