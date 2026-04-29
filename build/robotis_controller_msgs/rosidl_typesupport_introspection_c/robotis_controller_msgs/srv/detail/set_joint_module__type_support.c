// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotis_controller_msgs/srv/detail/set_joint_module__rosidl_typesupport_introspection_c.h"
#include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotis_controller_msgs/srv/detail/set_joint_module__functions.h"
#include "robotis_controller_msgs/srv/detail/set_joint_module__struct.h"


// Include directives for member types
// Member `joint_name`
// Member `module_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotis_controller_msgs__srv__SetJointModule_Request__init(message_memory);
}

void robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_fini_function(void * message_memory)
{
  robotis_controller_msgs__srv__SetJointModule_Request__fini(message_memory);
}

size_t robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__size_function__SetJointModule_Request__joint_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Request__joint_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_function__SetJointModule_Request__joint_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Request__joint_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Request__joint_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Request__joint_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_function__SetJointModule_Request__joint_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Request__joint_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__size_function__SetJointModule_Request__module_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Request__module_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_function__SetJointModule_Request__module_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Request__module_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Request__module_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Request__module_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_function__SetJointModule_Request__module_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Request__module_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_member_array[2] = {
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__SetJointModule_Request, joint_name),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__size_function__SetJointModule_Request__joint_name,  // size() function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Request__joint_name,  // get_const(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_function__SetJointModule_Request__joint_name,  // get(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Request__joint_name,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Request__joint_name,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Request__joint_name  // resize(index) function pointer
  },
  {
    "module_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__SetJointModule_Request, module_name),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__size_function__SetJointModule_Request__module_name,  // size() function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Request__module_name,  // get_const(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__get_function__SetJointModule_Request__module_name,  // get(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Request__module_name,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Request__module_name,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Request__module_name  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_members = {
  "robotis_controller_msgs__srv",  // message namespace
  "SetJointModule_Request",  // message name
  2,  // number of fields
  sizeof(robotis_controller_msgs__srv__SetJointModule_Request),
  false,  // has_any_key_member_
  robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_member_array,  // message members
  robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_members,
  get_message_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetJointModule_Request__get_type_hash,
  &robotis_controller_msgs__srv__SetJointModule_Request__get_type_description,
  &robotis_controller_msgs__srv__SetJointModule_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Request)() {
  if (!robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__functions.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotis_controller_msgs__srv__SetJointModule_Response__init(message_memory);
}

void robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_fini_function(void * message_memory)
{
  robotis_controller_msgs__srv__SetJointModule_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__SetJointModule_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_members = {
  "robotis_controller_msgs__srv",  // message namespace
  "SetJointModule_Response",  // message name
  1,  // number of fields
  sizeof(robotis_controller_msgs__srv__SetJointModule_Response),
  false,  // has_any_key_member_
  robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_member_array,  // message members
  robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_members,
  get_message_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetJointModule_Response__get_type_hash,
  &robotis_controller_msgs__srv__SetJointModule_Response__get_type_description,
  &robotis_controller_msgs__srv__SetJointModule_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Response)() {
  if (!robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__functions.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "robotis_controller_msgs/srv/set_joint_module.h"
// Member `request`
// Member `response`
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotis_controller_msgs__srv__SetJointModule_Event__init(message_memory);
}

void robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_fini_function(void * message_memory)
{
  robotis_controller_msgs__srv__SetJointModule_Event__fini(message_memory);
}

size_t robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__size_function__SetJointModule_Event__request(
  const void * untyped_member)
{
  const robotis_controller_msgs__srv__SetJointModule_Request__Sequence * member =
    (const robotis_controller_msgs__srv__SetJointModule_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Event__request(
  const void * untyped_member, size_t index)
{
  const robotis_controller_msgs__srv__SetJointModule_Request__Sequence * member =
    (const robotis_controller_msgs__srv__SetJointModule_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_function__SetJointModule_Event__request(
  void * untyped_member, size_t index)
{
  robotis_controller_msgs__srv__SetJointModule_Request__Sequence * member =
    (robotis_controller_msgs__srv__SetJointModule_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robotis_controller_msgs__srv__SetJointModule_Request * item =
    ((const robotis_controller_msgs__srv__SetJointModule_Request *)
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Event__request(untyped_member, index));
  robotis_controller_msgs__srv__SetJointModule_Request * value =
    (robotis_controller_msgs__srv__SetJointModule_Request *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robotis_controller_msgs__srv__SetJointModule_Request * item =
    ((robotis_controller_msgs__srv__SetJointModule_Request *)
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_function__SetJointModule_Event__request(untyped_member, index));
  const robotis_controller_msgs__srv__SetJointModule_Request * value =
    (const robotis_controller_msgs__srv__SetJointModule_Request *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Event__request(
  void * untyped_member, size_t size)
{
  robotis_controller_msgs__srv__SetJointModule_Request__Sequence * member =
    (robotis_controller_msgs__srv__SetJointModule_Request__Sequence *)(untyped_member);
  robotis_controller_msgs__srv__SetJointModule_Request__Sequence__fini(member);
  return robotis_controller_msgs__srv__SetJointModule_Request__Sequence__init(member, size);
}

size_t robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__size_function__SetJointModule_Event__response(
  const void * untyped_member)
{
  const robotis_controller_msgs__srv__SetJointModule_Response__Sequence * member =
    (const robotis_controller_msgs__srv__SetJointModule_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Event__response(
  const void * untyped_member, size_t index)
{
  const robotis_controller_msgs__srv__SetJointModule_Response__Sequence * member =
    (const robotis_controller_msgs__srv__SetJointModule_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_function__SetJointModule_Event__response(
  void * untyped_member, size_t index)
{
  robotis_controller_msgs__srv__SetJointModule_Response__Sequence * member =
    (robotis_controller_msgs__srv__SetJointModule_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robotis_controller_msgs__srv__SetJointModule_Response * item =
    ((const robotis_controller_msgs__srv__SetJointModule_Response *)
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Event__response(untyped_member, index));
  robotis_controller_msgs__srv__SetJointModule_Response * value =
    (robotis_controller_msgs__srv__SetJointModule_Response *)(untyped_value);
  *value = *item;
}

void robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robotis_controller_msgs__srv__SetJointModule_Response * item =
    ((robotis_controller_msgs__srv__SetJointModule_Response *)
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_function__SetJointModule_Event__response(untyped_member, index));
  const robotis_controller_msgs__srv__SetJointModule_Response * value =
    (const robotis_controller_msgs__srv__SetJointModule_Response *)(untyped_value);
  *item = *value;
}

bool robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Event__response(
  void * untyped_member, size_t size)
{
  robotis_controller_msgs__srv__SetJointModule_Response__Sequence * member =
    (robotis_controller_msgs__srv__SetJointModule_Response__Sequence *)(untyped_member);
  robotis_controller_msgs__srv__SetJointModule_Response__Sequence__fini(member);
  return robotis_controller_msgs__srv__SetJointModule_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotis_controller_msgs__srv__SetJointModule_Event, info),  // bytes offset in struct
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
    offsetof(robotis_controller_msgs__srv__SetJointModule_Event, request),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__size_function__SetJointModule_Event__request,  // size() function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Event__request,  // get_const(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_function__SetJointModule_Event__request,  // get(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Event__request,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Event__request,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Event__request  // resize(index) function pointer
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
    offsetof(robotis_controller_msgs__srv__SetJointModule_Event, response),  // bytes offset in struct
    NULL,  // default value
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__size_function__SetJointModule_Event__response,  // size() function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointModule_Event__response,  // get_const(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__get_function__SetJointModule_Event__response,  // get(index) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointModule_Event__response,  // fetch(index, &value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__assign_function__SetJointModule_Event__response,  // assign(index, value) function pointer
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__resize_function__SetJointModule_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_members = {
  "robotis_controller_msgs__srv",  // message namespace
  "SetJointModule_Event",  // message name
  3,  // number of fields
  sizeof(robotis_controller_msgs__srv__SetJointModule_Event),
  false,  // has_any_key_member_
  robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_member_array,  // message members
  robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_members,
  get_message_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetJointModule_Event__get_type_hash,
  &robotis_controller_msgs__srv__SetJointModule_Event__get_type_description,
  &robotis_controller_msgs__srv__SetJointModule_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Event)() {
  robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Request)();
  robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Response)();
  if (!robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_members = {
  "robotis_controller_msgs__srv",  // service namespace
  "SetJointModule",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_Request_message_type_support_handle,
  NULL,  // response message
  // robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle
  NULL  // event_message
  // robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle
};


static rosidl_service_type_support_t robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_type_support_handle = {
  0,
  &robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_members,
  get_service_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetJointModule_Request__rosidl_typesupport_introspection_c__SetJointModule_Request_message_type_support_handle,
  &robotis_controller_msgs__srv__SetJointModule_Response__rosidl_typesupport_introspection_c__SetJointModule_Response_message_type_support_handle,
  &robotis_controller_msgs__srv__SetJointModule_Event__rosidl_typesupport_introspection_c__SetJointModule_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robotis_controller_msgs,
    srv,
    SetJointModule
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robotis_controller_msgs,
    srv,
    SetJointModule
  ),
  &robotis_controller_msgs__srv__SetJointModule__get_type_hash,
  &robotis_controller_msgs__srv__SetJointModule__get_type_description,
  &robotis_controller_msgs__srv__SetJointModule__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotis_controller_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule)(void) {
  if (!robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_type_support_handle.typesupport_identifier) {
    robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, srv, SetJointModule_Event)()->data;
  }

  return &robotis_controller_msgs__srv__detail__set_joint_module__rosidl_typesupport_introspection_c__SetJointModule_service_type_support_handle;
}
