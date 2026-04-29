// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice
#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_tuning_module_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off_array__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
bool cdr_serialize_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  const op3_tuning_module_msgs__msg__JointTorqueOnOffArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
bool cdr_deserialize_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  eprosima::fastcdr::Cdr &,
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
size_t get_serialized_size_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
size_t max_serialized_size_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
bool cdr_serialize_key_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  const op3_tuning_module_msgs__msg__JointTorqueOnOffArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
size_t get_serialized_size_key_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
size_t max_serialized_size_key_op3_tuning_module_msgs__msg__JointTorqueOnOffArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_tuning_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_tuning_module_msgs, msg, JointTorqueOnOffArray)();

#ifdef __cplusplus
}
#endif

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
