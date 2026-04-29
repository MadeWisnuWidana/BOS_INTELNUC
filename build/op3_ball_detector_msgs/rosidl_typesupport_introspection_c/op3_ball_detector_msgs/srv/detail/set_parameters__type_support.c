// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_ball_detector_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_ball_detector_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
#include "op3_ball_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_ball_detector_msgs/srv/detail/set_parameters__functions.h"
#include "op3_ball_detector_msgs/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `params`
#include "op3_ball_detector_msgs/msg/ball_detector_params.h"
// Member `params`
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_ball_detector_msgs__srv__SetParameters_Request__init(message_memory);
}

void op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_fini_function(void * message_memory)
{
  op3_ball_detector_msgs__srv__SetParameters_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array[1] = {
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_ball_detector_msgs__srv__SetParameters_Request, params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_members = {
  "op3_ball_detector_msgs__srv",  // message namespace
  "SetParameters_Request",  // message name
  1,  // number of fields
  sizeof(op3_ball_detector_msgs__srv__SetParameters_Request),
  false,  // has_any_key_member_
  op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array,  // message members
  op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle = {
  0,
  &op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_members,
  get_message_typesupport_handle_function,
  &op3_ball_detector_msgs__srv__SetParameters_Request__get_type_hash,
  &op3_ball_detector_msgs__srv__SetParameters_Request__get_type_description,
  &op3_ball_detector_msgs__srv__SetParameters_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_ball_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Request)() {
  op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, msg, BallDetectorParams)();
  if (!op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle.typesupport_identifier) {
    op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "op3_ball_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__functions.h"
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `returns`
// already included above
// #include "op3_ball_detector_msgs/msg/ball_detector_params.h"
// Member `returns`
// already included above
// #include "op3_ball_detector_msgs/msg/detail/ball_detector_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_ball_detector_msgs__srv__SetParameters_Response__init(message_memory);
}

void op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_fini_function(void * message_memory)
{
  op3_ball_detector_msgs__srv__SetParameters_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array[1] = {
  {
    "returns",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_ball_detector_msgs__srv__SetParameters_Response, returns),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_members = {
  "op3_ball_detector_msgs__srv",  // message namespace
  "SetParameters_Response",  // message name
  1,  // number of fields
  sizeof(op3_ball_detector_msgs__srv__SetParameters_Response),
  false,  // has_any_key_member_
  op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array,  // message members
  op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle = {
  0,
  &op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_members,
  get_message_typesupport_handle_function,
  &op3_ball_detector_msgs__srv__SetParameters_Response__get_type_hash,
  &op3_ball_detector_msgs__srv__SetParameters_Response__get_type_description,
  &op3_ball_detector_msgs__srv__SetParameters_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_ball_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Response)() {
  op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, msg, BallDetectorParams)();
  if (!op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle.typesupport_identifier) {
    op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "op3_ball_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__functions.h"
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "op3_ball_detector_msgs/srv/set_parameters.h"
// Member `request`
// Member `response`
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_ball_detector_msgs__srv__SetParameters_Event__init(message_memory);
}

void op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_fini_function(void * message_memory)
{
  op3_ball_detector_msgs__srv__SetParameters_Event__fini(message_memory);
}

size_t op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__size_function__SetParameters_Event__request(
  const void * untyped_member)
{
  const op3_ball_detector_msgs__srv__SetParameters_Request__Sequence * member =
    (const op3_ball_detector_msgs__srv__SetParameters_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_const_function__SetParameters_Event__request(
  const void * untyped_member, size_t index)
{
  const op3_ball_detector_msgs__srv__SetParameters_Request__Sequence * member =
    (const op3_ball_detector_msgs__srv__SetParameters_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_function__SetParameters_Event__request(
  void * untyped_member, size_t index)
{
  op3_ball_detector_msgs__srv__SetParameters_Request__Sequence * member =
    (op3_ball_detector_msgs__srv__SetParameters_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__fetch_function__SetParameters_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const op3_ball_detector_msgs__srv__SetParameters_Request * item =
    ((const op3_ball_detector_msgs__srv__SetParameters_Request *)
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_const_function__SetParameters_Event__request(untyped_member, index));
  op3_ball_detector_msgs__srv__SetParameters_Request * value =
    (op3_ball_detector_msgs__srv__SetParameters_Request *)(untyped_value);
  *value = *item;
}

void op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__assign_function__SetParameters_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  op3_ball_detector_msgs__srv__SetParameters_Request * item =
    ((op3_ball_detector_msgs__srv__SetParameters_Request *)
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_function__SetParameters_Event__request(untyped_member, index));
  const op3_ball_detector_msgs__srv__SetParameters_Request * value =
    (const op3_ball_detector_msgs__srv__SetParameters_Request *)(untyped_value);
  *item = *value;
}

bool op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__resize_function__SetParameters_Event__request(
  void * untyped_member, size_t size)
{
  op3_ball_detector_msgs__srv__SetParameters_Request__Sequence * member =
    (op3_ball_detector_msgs__srv__SetParameters_Request__Sequence *)(untyped_member);
  op3_ball_detector_msgs__srv__SetParameters_Request__Sequence__fini(member);
  return op3_ball_detector_msgs__srv__SetParameters_Request__Sequence__init(member, size);
}

size_t op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__size_function__SetParameters_Event__response(
  const void * untyped_member)
{
  const op3_ball_detector_msgs__srv__SetParameters_Response__Sequence * member =
    (const op3_ball_detector_msgs__srv__SetParameters_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_const_function__SetParameters_Event__response(
  const void * untyped_member, size_t index)
{
  const op3_ball_detector_msgs__srv__SetParameters_Response__Sequence * member =
    (const op3_ball_detector_msgs__srv__SetParameters_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_function__SetParameters_Event__response(
  void * untyped_member, size_t index)
{
  op3_ball_detector_msgs__srv__SetParameters_Response__Sequence * member =
    (op3_ball_detector_msgs__srv__SetParameters_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__fetch_function__SetParameters_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const op3_ball_detector_msgs__srv__SetParameters_Response * item =
    ((const op3_ball_detector_msgs__srv__SetParameters_Response *)
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_const_function__SetParameters_Event__response(untyped_member, index));
  op3_ball_detector_msgs__srv__SetParameters_Response * value =
    (op3_ball_detector_msgs__srv__SetParameters_Response *)(untyped_value);
  *value = *item;
}

void op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__assign_function__SetParameters_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  op3_ball_detector_msgs__srv__SetParameters_Response * item =
    ((op3_ball_detector_msgs__srv__SetParameters_Response *)
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_function__SetParameters_Event__response(untyped_member, index));
  const op3_ball_detector_msgs__srv__SetParameters_Response * value =
    (const op3_ball_detector_msgs__srv__SetParameters_Response *)(untyped_value);
  *item = *value;
}

bool op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__resize_function__SetParameters_Event__response(
  void * untyped_member, size_t size)
{
  op3_ball_detector_msgs__srv__SetParameters_Response__Sequence * member =
    (op3_ball_detector_msgs__srv__SetParameters_Response__Sequence *)(untyped_member);
  op3_ball_detector_msgs__srv__SetParameters_Response__Sequence__fini(member);
  return op3_ball_detector_msgs__srv__SetParameters_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_ball_detector_msgs__srv__SetParameters_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(op3_ball_detector_msgs__srv__SetParameters_Event, request),  // bytes offset in struct
    NULL,  // default value
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__size_function__SetParameters_Event__request,  // size() function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_const_function__SetParameters_Event__request,  // get_const(index) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_function__SetParameters_Event__request,  // get(index) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__fetch_function__SetParameters_Event__request,  // fetch(index, &value) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__assign_function__SetParameters_Event__request,  // assign(index, value) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__resize_function__SetParameters_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(op3_ball_detector_msgs__srv__SetParameters_Event, response),  // bytes offset in struct
    NULL,  // default value
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__size_function__SetParameters_Event__response,  // size() function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_const_function__SetParameters_Event__response,  // get_const(index) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__get_function__SetParameters_Event__response,  // get(index) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__fetch_function__SetParameters_Event__response,  // fetch(index, &value) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__assign_function__SetParameters_Event__response,  // assign(index, value) function pointer
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__resize_function__SetParameters_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_members = {
  "op3_ball_detector_msgs__srv",  // message namespace
  "SetParameters_Event",  // message name
  3,  // number of fields
  sizeof(op3_ball_detector_msgs__srv__SetParameters_Event),
  false,  // has_any_key_member_
  op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_member_array,  // message members
  op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_type_support_handle = {
  0,
  &op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_members,
  get_message_typesupport_handle_function,
  &op3_ball_detector_msgs__srv__SetParameters_Event__get_type_hash,
  &op3_ball_detector_msgs__srv__SetParameters_Event__get_type_description,
  &op3_ball_detector_msgs__srv__SetParameters_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_ball_detector_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Event)() {
  op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Request)();
  op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Response)();
  if (!op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_type_support_handle.typesupport_identifier) {
    op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "op3_ball_detector_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "op3_ball_detector_msgs/srv/detail/set_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_members = {
  "op3_ball_detector_msgs__srv",  // service namespace
  "SetParameters",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle,
  NULL,  // response message
  // op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle
  NULL  // event_message
  // op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle
};


static rosidl_service_type_support_t op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle = {
  0,
  &op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_members,
  get_service_typesupport_handle_function,
  &op3_ball_detector_msgs__srv__SetParameters_Request__rosidl_typesupport_introspection_c__SetParameters_Request_message_type_support_handle,
  &op3_ball_detector_msgs__srv__SetParameters_Response__rosidl_typesupport_introspection_c__SetParameters_Response_message_type_support_handle,
  &op3_ball_detector_msgs__srv__SetParameters_Event__rosidl_typesupport_introspection_c__SetParameters_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    op3_ball_detector_msgs,
    srv,
    SetParameters
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    op3_ball_detector_msgs,
    srv,
    SetParameters
  ),
  &op3_ball_detector_msgs__srv__SetParameters__get_type_hash,
  &op3_ball_detector_msgs__srv__SetParameters__get_type_description,
  &op3_ball_detector_msgs__srv__SetParameters__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_ball_detector_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters)(void) {
  if (!op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.typesupport_identifier) {
    op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_ball_detector_msgs, srv, SetParameters_Event)()->data;
  }

  return &op3_ball_detector_msgs__srv__detail__set_parameters__rosidl_typesupport_introspection_c__SetParameters_service_type_support_handle;
}
