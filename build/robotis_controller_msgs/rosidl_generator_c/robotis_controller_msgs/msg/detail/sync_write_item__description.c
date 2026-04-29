// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotis_controller_msgs:msg/SyncWriteItem.idl
// generated code does not contain a copyright notice

#include "robotis_controller_msgs/msg/detail/sync_write_item__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__msg__SyncWriteItem__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xeb, 0xd6, 0x2d, 0xb9, 0x4a, 0x20, 0x3c,
      0x5a, 0x68, 0x9d, 0x49, 0x00, 0x95, 0xb6, 0x22,
      0x53, 0x18, 0x45, 0xea, 0x9a, 0x0f, 0x44, 0x14,
      0xc5, 0xeb, 0x26, 0x08, 0xfc, 0x8d, 0x87, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotis_controller_msgs__msg__SyncWriteItem__TYPE_NAME[] = "robotis_controller_msgs/msg/SyncWriteItem";

// Define type names, field names, and default values
static char robotis_controller_msgs__msg__SyncWriteItem__FIELD_NAME__item_name[] = "item_name";
static char robotis_controller_msgs__msg__SyncWriteItem__FIELD_NAME__joint_name[] = "joint_name";
static char robotis_controller_msgs__msg__SyncWriteItem__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__msg__SyncWriteItem__FIELDS[] = {
  {
    {robotis_controller_msgs__msg__SyncWriteItem__FIELD_NAME__item_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__msg__SyncWriteItem__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__msg__SyncWriteItem__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotis_controller_msgs__msg__SyncWriteItem__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__msg__SyncWriteItem__TYPE_NAME, 41, 41},
      {robotis_controller_msgs__msg__SyncWriteItem__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string item_name\n"
  "string[] joint_name\n"
  "uint32[] value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__msg__SyncWriteItem__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__msg__SyncWriteItem__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__msg__SyncWriteItem__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__msg__SyncWriteItem__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
