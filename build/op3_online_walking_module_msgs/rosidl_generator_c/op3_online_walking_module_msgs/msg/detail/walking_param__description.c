// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/msg/detail/walking_param__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__msg__WalkingParam__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x59, 0x36, 0xea, 0x3f, 0x54, 0x11, 0x35,
      0x96, 0x24, 0x57, 0x2a, 0xcc, 0x58, 0x75, 0x6d,
      0x99, 0x26, 0x7f, 0x8e, 0xff, 0x0f, 0x62, 0xaa,
      0xcd, 0x93, 0x11, 0xa0, 0xd0, 0xc0, 0xc0, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_online_walking_module_msgs__msg__WalkingParam__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/WalkingParam";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__dsp_ratio[] = "dsp_ratio";
static char op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__lipm_height[] = "lipm_height";
static char op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__foot_height_max[] = "foot_height_max";
static char op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__zmp_offset_x[] = "zmp_offset_x";
static char op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__zmp_offset_y[] = "zmp_offset_y";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__msg__WalkingParam__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__dsp_ratio, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__lipm_height, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__foot_height_max, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__zmp_offset_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__WalkingParam__FIELD_NAME__zmp_offset_y, 12, 12},
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
op3_online_walking_module_msgs__msg__WalkingParam__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 47, 47},
      {op3_online_walking_module_msgs__msg__WalkingParam__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 dsp_ratio\n"
  "float64 lipm_height\n"
  "float64 foot_height_max\n"
  "float64 zmp_offset_x\n"
  "float64 zmp_offset_y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 104, 104},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__msg__WalkingParam__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
