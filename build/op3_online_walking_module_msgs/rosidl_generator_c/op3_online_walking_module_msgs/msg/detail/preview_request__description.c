// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:msg/PreviewRequest.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/msg/detail/preview_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__msg__PreviewRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0xad, 0x89, 0xb3, 0xe0, 0x63, 0x03, 0xd7,
      0xfd, 0x0f, 0x25, 0x59, 0x2f, 0xde, 0xb2, 0xdf,
      0x0f, 0x0f, 0xc4, 0x37, 0x1e, 0xbe, 0x8a, 0x70,
      0x2e, 0xb0, 0x92, 0x9a, 0xcb, 0x11, 0x8c, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/PreviewRequest";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__msg__PreviewRequest__FIELD_NAME__control_cycle[] = "control_cycle";
static char op3_online_walking_module_msgs__msg__PreviewRequest__FIELD_NAME__lipm_height[] = "lipm_height";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__msg__PreviewRequest__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__msg__PreviewRequest__FIELD_NAME__control_cycle, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewRequest__FIELD_NAME__lipm_height, 11, 11},
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
op3_online_walking_module_msgs__msg__PreviewRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME, 49, 49},
      {op3_online_walking_module_msgs__msg__PreviewRequest__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 control_cycle\n"
  "float64 lipm_height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__msg__PreviewRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME, 49, 49},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__msg__PreviewRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__msg__PreviewRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
