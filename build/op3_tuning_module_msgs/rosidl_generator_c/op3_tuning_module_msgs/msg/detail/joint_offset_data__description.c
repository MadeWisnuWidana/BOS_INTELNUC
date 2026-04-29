// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_tuning_module_msgs:msg/JointOffsetData.idl
// generated code does not contain a copyright notice

#include "op3_tuning_module_msgs/msg/detail/joint_offset_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_tuning_module_msgs
const rosidl_type_hash_t *
op3_tuning_module_msgs__msg__JointOffsetData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0x22, 0x15, 0xa5, 0x47, 0x4b, 0x7b, 0xc3,
      0x8b, 0x7c, 0x47, 0x5e, 0xa1, 0x60, 0x7a, 0x43,
      0x11, 0xe3, 0xdc, 0x6c, 0xdd, 0xd2, 0xb5, 0xa2,
      0x84, 0x2f, 0x56, 0xef, 0x8d, 0xd3, 0x69, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_tuning_module_msgs__msg__JointOffsetData__TYPE_NAME[] = "op3_tuning_module_msgs/msg/JointOffsetData";

// Define type names, field names, and default values
static char op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__joint_name[] = "joint_name";
static char op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__goal_value[] = "goal_value";
static char op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__offset_value[] = "offset_value";
static char op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__p_gain[] = "p_gain";
static char op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__i_gain[] = "i_gain";
static char op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__d_gain[] = "d_gain";

static rosidl_runtime_c__type_description__Field op3_tuning_module_msgs__msg__JointOffsetData__FIELDS[] = {
  {
    {op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__goal_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__offset_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__p_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__i_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_tuning_module_msgs__msg__JointOffsetData__FIELD_NAME__d_gain, 6, 6},
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
op3_tuning_module_msgs__msg__JointOffsetData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_tuning_module_msgs__msg__JointOffsetData__TYPE_NAME, 42, 42},
      {op3_tuning_module_msgs__msg__JointOffsetData__FIELDS, 6, 6},
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
op3_tuning_module_msgs__msg__JointOffsetData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_tuning_module_msgs__msg__JointOffsetData__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 103, 103},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_tuning_module_msgs__msg__JointOffsetData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_tuning_module_msgs__msg__JointOffsetData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
