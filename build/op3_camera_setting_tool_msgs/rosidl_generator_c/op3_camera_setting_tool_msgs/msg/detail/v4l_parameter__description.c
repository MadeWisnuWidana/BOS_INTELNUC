// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameter.idl
// generated code does not contain a copyright notice

#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__msg__V4lParameter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x4a, 0x8f, 0xfd, 0xc7, 0x85, 0x2d, 0xef,
      0xf2, 0x03, 0xf8, 0x0b, 0xb3, 0xa7, 0xca, 0x43,
      0x93, 0x5c, 0xed, 0x09, 0xa9, 0x37, 0x43, 0x96,
      0x99, 0xa6, 0x95, 0x08, 0x82, 0x7e, 0x24, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_camera_setting_tool_msgs__msg__V4lParameter__TYPE_NAME[] = "op3_camera_setting_tool_msgs/msg/V4lParameter";

// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__msg__V4lParameter__FIELD_NAME__name[] = "name";
static char op3_camera_setting_tool_msgs__msg__V4lParameter__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__msg__V4lParameter__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__msg__V4lParameter__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__V4lParameter__FIELD_NAME__value, 5, 5},
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
op3_camera_setting_tool_msgs__msg__V4lParameter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__msg__V4lParameter__TYPE_NAME, 45, 45},
      {op3_camera_setting_tool_msgs__msg__V4lParameter__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string  name\n"
  "int32   value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__msg__V4lParameter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__msg__V4lParameter__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__msg__V4lParameter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__msg__V4lParameter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
