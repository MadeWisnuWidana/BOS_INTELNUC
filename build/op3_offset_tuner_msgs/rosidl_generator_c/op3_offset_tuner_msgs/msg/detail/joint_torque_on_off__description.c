// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_offset_tuner_msgs:msg/JointTorqueOnOff.idl
// generated code does not contain a copyright notice

#include "op3_offset_tuner_msgs/msg/detail/joint_torque_on_off__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x90, 0xbb, 0x20, 0xf2, 0x41, 0x7e, 0x40,
      0x26, 0x8c, 0xf2, 0xa2, 0xc2, 0x02, 0xd6, 0x25,
      0x04, 0x20, 0xfc, 0x5a, 0x36, 0x9b, 0xa4, 0x37,
      0x5a, 0x0f, 0x61, 0x74, 0x42, 0xa3, 0x42, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_offset_tuner_msgs__msg__JointTorqueOnOff__TYPE_NAME[] = "op3_offset_tuner_msgs/msg/JointTorqueOnOff";

// Define type names, field names, and default values
static char op3_offset_tuner_msgs__msg__JointTorqueOnOff__FIELD_NAME__joint_name[] = "joint_name";
static char op3_offset_tuner_msgs__msg__JointTorqueOnOff__FIELD_NAME__torque_enable[] = "torque_enable";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__msg__JointTorqueOnOff__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__msg__JointTorqueOnOff__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointTorqueOnOff__FIELD_NAME__torque_enable, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__msg__JointTorqueOnOff__TYPE_NAME, 42, 42},
      {op3_offset_tuner_msgs__msg__JointTorqueOnOff__FIELDS, 2, 2},
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
  "bool    torque_enable";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__msg__JointTorqueOnOff__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
