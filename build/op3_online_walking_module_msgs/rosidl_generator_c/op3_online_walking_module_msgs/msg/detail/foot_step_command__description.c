// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__msg__FootStepCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x63, 0xb7, 0x51, 0xb8, 0x25, 0xad, 0x9d,
      0xea, 0x0c, 0xdc, 0xad, 0xae, 0x4f, 0x69, 0xd4,
      0xfc, 0xc8, 0x06, 0xfa, 0xe6, 0x8f, 0xf2, 0x8d,
      0x91, 0x4e, 0xdc, 0xd0, 0xcd, 0x48, 0xa4, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_online_walking_module_msgs__msg__FootStepCommand__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/FootStepCommand";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__command[] = "command";
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__start_leg[] = "start_leg";
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_num[] = "step_num";
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_time[] = "step_time";
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_length[] = "step_length";
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__side_length[] = "side_length";
static char op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_angle[] = "step_angle";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__msg__FootStepCommand__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__start_leg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_num, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_length, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__side_length, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepCommand__FIELD_NAME__step_angle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__msg__FootStepCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__msg__FootStepCommand__TYPE_NAME, 50, 50},
      {op3_online_walking_module_msgs__msg__FootStepCommand__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string  command\n"
  "string  start_leg\n"
  "int32   step_num\n"
  "float64 step_time\n"
  "float64 step_length\n"
  "float64 side_length\n"
  "float64 step_angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__msg__FootStepCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__msg__FootStepCommand__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 128, 128},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__msg__FootStepCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__msg__FootStepCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
