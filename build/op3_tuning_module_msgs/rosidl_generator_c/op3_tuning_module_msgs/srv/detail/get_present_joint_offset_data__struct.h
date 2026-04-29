// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_tuning_module_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_tuning_module_msgs/srv/get_present_joint_offset_data.h"


#ifndef OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__STRUCT_H_
#define OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPresentJointOffsetData in the package op3_tuning_module_msgs.
typedef struct op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request
{
  uint8_t structure_needs_at_least_one_member;
} op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request;

// Struct for a sequence of op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request.
typedef struct op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__Sequence
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'present_data_array'
#include "op3_tuning_module_msgs/msg/detail/joint_offset_position_data__struct.h"

/// Struct defined in srv/GetPresentJointOffsetData in the package op3_tuning_module_msgs.
typedef struct op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response
{
  op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence present_data_array;
} op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response;

// Struct for a sequence of op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response.
typedef struct op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__Sequence
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event__request__MAX_SIZE = 1
};
// response
enum
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPresentJointOffsetData in the package op3_tuning_module_msgs.
typedef struct op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event
{
  service_msgs__msg__ServiceEventInfo info;
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__Sequence request;
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__Sequence response;
} op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event;

// Struct for a sequence of op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event.
typedef struct op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event__Sequence
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__STRUCT_H_
