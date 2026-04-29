// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/msg/detail/preview_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__msg__PreviewResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0xbf, 0xa9, 0x2e, 0x05, 0x65, 0x7f, 0x48,
      0xdb, 0xc7, 0x57, 0xd4, 0x7b, 0x17, 0x98, 0xbf,
      0xa4, 0xe6, 0x7b, 0x95, 0xe9, 0xe4, 0xfd, 0x26,
      0xec, 0x44, 0xba, 0xb7, 0xcc, 0x0f, 0x92, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/PreviewResponse";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__k_row[] = "k_row";
static char op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__k_col[] = "k_col";
static char op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__k[] = "k";
static char op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__p_row[] = "p_row";
static char op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__p_col[] = "p_col";
static char op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__p[] = "p";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__msg__PreviewResponse__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__k_row, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__k_col, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__k, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__p_row, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__p_col, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__FIELD_NAME__p, 1, 1},
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
op3_online_walking_module_msgs__msg__PreviewResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME, 50, 50},
      {op3_online_walking_module_msgs__msg__PreviewResponse__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 k_row\n"
  "int32 k_col\n"
  "float64[] k\n"
  "int32 p_row\n"
  "int32 p_col\n"
  "float64[] p";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__msg__PreviewResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__msg__PreviewResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__msg__PreviewResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
