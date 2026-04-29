// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotis_controller_msgs:msg/JointCtrlModule.idl
// generated code does not contain a copyright notice

#include "robotis_controller_msgs/msg/detail/joint_ctrl_module__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__msg__JointCtrlModule__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xca, 0x77, 0x36, 0x34, 0xf0, 0x2e, 0xe9,
      0xea, 0x25, 0x42, 0xb9, 0x78, 0xac, 0xf3, 0xd0,
      0x39, 0x34, 0xe7, 0x02, 0xfa, 0x49, 0x91, 0x08,
      0x2f, 0x09, 0xbf, 0xbf, 0x4f, 0xa9, 0x96, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotis_controller_msgs__msg__JointCtrlModule__TYPE_NAME[] = "robotis_controller_msgs/msg/JointCtrlModule";

// Define type names, field names, and default values
static char robotis_controller_msgs__msg__JointCtrlModule__FIELD_NAME__joint_name[] = "joint_name";
static char robotis_controller_msgs__msg__JointCtrlModule__FIELD_NAME__module_name[] = "module_name";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__msg__JointCtrlModule__FIELDS[] = {
  {
    {robotis_controller_msgs__msg__JointCtrlModule__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__msg__JointCtrlModule__FIELD_NAME__module_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotis_controller_msgs__msg__JointCtrlModule__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__msg__JointCtrlModule__TYPE_NAME, 43, 43},
      {robotis_controller_msgs__msg__JointCtrlModule__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] joint_name\n"
  "string[] module_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__msg__JointCtrlModule__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__msg__JointCtrlModule__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__msg__JointCtrlModule__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__msg__JointCtrlModule__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
