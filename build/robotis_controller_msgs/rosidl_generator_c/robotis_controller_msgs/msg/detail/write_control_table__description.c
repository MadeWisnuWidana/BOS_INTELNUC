// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotis_controller_msgs:msg/WriteControlTable.idl
// generated code does not contain a copyright notice

#include "robotis_controller_msgs/msg/detail/write_control_table__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__msg__WriteControlTable__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0xd0, 0xf4, 0x1e, 0x5a, 0xd9, 0x12, 0x23,
      0xc6, 0x3a, 0xdf, 0xf3, 0x3b, 0xb4, 0xb2, 0x45,
      0x6e, 0x17, 0xa4, 0x86, 0x53, 0x61, 0x2b, 0xbc,
      0xf4, 0xaa, 0x33, 0xbc, 0x92, 0x8b, 0xe5, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotis_controller_msgs__msg__WriteControlTable__TYPE_NAME[] = "robotis_controller_msgs/msg/WriteControlTable";

// Define type names, field names, and default values
static char robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__joint_name[] = "joint_name";
static char robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__start_item_name[] = "start_item_name";
static char robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__data_length[] = "data_length";
static char robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__msg__WriteControlTable__FIELDS[] = {
  {
    {robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__start_item_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__data_length, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__msg__WriteControlTable__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotis_controller_msgs__msg__WriteControlTable__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__msg__WriteControlTable__TYPE_NAME, 45, 45},
      {robotis_controller_msgs__msg__WriteControlTable__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string joint_name\n"
  "string start_item_name\n"
  "uint16 data_length\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__msg__WriteControlTable__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__msg__WriteControlTable__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__msg__WriteControlTable__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__msg__WriteControlTable__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
