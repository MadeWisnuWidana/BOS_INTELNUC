// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:srv/GetJointPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_online_walking_module_msgs/srv/get_joint_pose.h"


#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetJointPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} op3_online_walking_module_msgs__srv__GetJointPose_Request;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetJointPose_Request.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence
{
  op3_online_walking_module_msgs__srv__GetJointPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "op3_online_walking_module_msgs/msg/detail/joint_pose__struct.h"

/// Struct defined in srv/GetJointPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Response
{
  op3_online_walking_module_msgs__msg__JointPose pose;
} op3_online_walking_module_msgs__srv__GetJointPose_Response;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetJointPose_Response.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence
{
  op3_online_walking_module_msgs__srv__GetJointPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  op3_online_walking_module_msgs__srv__GetJointPose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  op3_online_walking_module_msgs__srv__GetJointPose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetJointPose in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence request;
  op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence response;
} op3_online_walking_module_msgs__srv__GetJointPose_Event;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetJointPose_Event.
typedef struct op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence
{
  op3_online_walking_module_msgs__srv__GetJointPose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__STRUCT_H_
