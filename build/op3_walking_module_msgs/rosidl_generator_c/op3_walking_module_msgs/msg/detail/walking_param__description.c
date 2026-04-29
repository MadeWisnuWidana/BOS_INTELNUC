// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#include "op3_walking_module_msgs/msg/detail/walking_param__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_walking_module_msgs
const rosidl_type_hash_t *
op3_walking_module_msgs__msg__WalkingParam__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0xb7, 0x4e, 0x96, 0x63, 0x58, 0x43, 0x7e,
      0xc8, 0x8c, 0x30, 0xc1, 0x96, 0x51, 0xa0, 0x4f,
      0xc1, 0x67, 0xad, 0x01, 0x5e, 0xf2, 0x39, 0x97,
      0x62, 0x0b, 0xcc, 0x2c, 0x6e, 0x41, 0xc5, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME[] = "op3_walking_module_msgs/msg/WalkingParam";

// Define type names, field names, and default values
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_x_offset[] = "init_x_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_y_offset[] = "init_y_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_z_offset[] = "init_z_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_roll_offset[] = "init_roll_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_pitch_offset[] = "init_pitch_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_yaw_offset[] = "init_yaw_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__period_time[] = "period_time";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__dsp_ratio[] = "dsp_ratio";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__step_fb_ratio[] = "step_fb_ratio";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__x_move_amplitude[] = "x_move_amplitude";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__y_move_amplitude[] = "y_move_amplitude";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__z_move_amplitude[] = "z_move_amplitude";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__angle_move_amplitude[] = "angle_move_amplitude";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__move_aim_on[] = "move_aim_on";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_enable[] = "balance_enable";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_hip_roll_gain[] = "balance_hip_roll_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_knee_gain[] = "balance_knee_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_ankle_roll_gain[] = "balance_ankle_roll_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_ankle_pitch_gain[] = "balance_ankle_pitch_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__y_swap_amplitude[] = "y_swap_amplitude";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__z_swap_amplitude[] = "z_swap_amplitude";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__arm_swing_gain[] = "arm_swing_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__pelvis_offset[] = "pelvis_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__hip_pitch_offset[] = "hip_pitch_offset";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__p_gain[] = "p_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__i_gain[] = "i_gain";
static char op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__d_gain[] = "d_gain";

static rosidl_runtime_c__type_description__Field op3_walking_module_msgs__msg__WalkingParam__FIELDS[] = {
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_x_offset, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_y_offset, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_z_offset, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_roll_offset, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_pitch_offset, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__init_yaw_offset, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__period_time, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__dsp_ratio, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__step_fb_ratio, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__x_move_amplitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__y_move_amplitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__z_move_amplitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__angle_move_amplitude, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__move_aim_on, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_enable, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_hip_roll_gain, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_knee_gain, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_ankle_roll_gain, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__balance_ankle_pitch_gain, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__y_swap_amplitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__z_swap_amplitude, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__arm_swing_gain, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__pelvis_offset, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__hip_pitch_offset, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__p_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__i_gain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__FIELD_NAME__d_gain, 6, 6},
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
op3_walking_module_msgs__msg__WalkingParam__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 40, 40},
      {op3_walking_module_msgs__msg__WalkingParam__FIELDS, 27, 27},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "####### walking init pose #######\n"
  "float32 init_x_offset\n"
  "float32 init_y_offset\n"
  "float32 init_z_offset\n"
  "float32 init_roll_offset\n"
  "float32 init_pitch_offset\n"
  "float32 init_yaw_offset\n"
  "\n"
  "####### time parameter #####\n"
  "float32 period_time\n"
  "float32 dsp_ratio\n"
  "float32 step_fb_ratio\n"
  "\n"
  "########## walking parameter ########\n"
  "float32 x_move_amplitude\n"
  "float32 y_move_amplitude\n"
  "float32 z_move_amplitude\n"
  "float32 angle_move_amplitude\n"
  "bool move_aim_on\n"
  "\n"
  "########## balance parameter ##########\n"
  "bool balance_enable\n"
  "float32 balance_hip_roll_gain\n"
  "float32 balance_knee_gain\n"
  "float32 balance_ankle_roll_gain\n"
  "float32 balance_ankle_pitch_gain\n"
  "float32 y_swap_amplitude\n"
  "float32 z_swap_amplitude\n"
  "float32 arm_swing_gain\n"
  "float32 pelvis_offset\n"
  "float32 hip_pitch_offset\n"
  "\n"
  "########## gain parameter ##########\n"
  "int32 p_gain\n"
  "int32 i_gain\n"
  "int32 d_gain";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 803, 803},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_walking_module_msgs__msg__WalkingParam__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
