// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "op3_online_walking_module_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__struct.h"
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "op3_online_walking_module_msgs/msg/detail/step2_d__functions.h"  // footsteps_2d

// forward declare type support functions

bool cdr_serialize_op3_online_walking_module_msgs__msg__Step2D(
  const op3_online_walking_module_msgs__msg__Step2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_op3_online_walking_module_msgs__msg__Step2D(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs__msg__Step2D * ros_message);

size_t get_serialized_size_op3_online_walking_module_msgs__msg__Step2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_op3_online_walking_module_msgs__msg__Step2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_op3_online_walking_module_msgs__msg__Step2D(
  const op3_online_walking_module_msgs__msg__Step2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_op3_online_walking_module_msgs__msg__Step2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_op3_online_walking_module_msgs__msg__Step2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_online_walking_module_msgs, msg, Step2D)();


using _Step2DArray__ros_msg_type = op3_online_walking_module_msgs__msg__Step2DArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
bool cdr_serialize_op3_online_walking_module_msgs__msg__Step2DArray(
  const op3_online_walking_module_msgs__msg__Step2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: step_time
  {
    cdr << ros_message->step_time;
  }

  // Field name: footsteps_2d
  {
    size_t size = ros_message->footsteps_2d.size;
    auto array_ptr = ros_message->footsteps_2d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_op3_online_walking_module_msgs__msg__Step2D(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
bool cdr_deserialize_op3_online_walking_module_msgs__msg__Step2DArray(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs__msg__Step2DArray * ros_message)
{
  // Field name: step_time
  {
    cdr >> ros_message->step_time;
  }

  // Field name: footsteps_2d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->footsteps_2d.data) {
      op3_online_walking_module_msgs__msg__Step2D__Sequence__fini(&ros_message->footsteps_2d);
    }
    if (!op3_online_walking_module_msgs__msg__Step2D__Sequence__init(&ros_message->footsteps_2d, size)) {
      fprintf(stderr, "failed to create array for field 'footsteps_2d'");
      return false;
    }
    auto array_ptr = ros_message->footsteps_2d.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_op3_online_walking_module_msgs__msg__Step2D(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
size_t get_serialized_size_op3_online_walking_module_msgs__msg__Step2DArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Step2DArray__ros_msg_type * ros_message = static_cast<const _Step2DArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: step_time
  {
    size_t item_size = sizeof(ros_message->step_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: footsteps_2d
  {
    size_t array_size = ros_message->footsteps_2d.size;
    auto array_ptr = ros_message->footsteps_2d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_op3_online_walking_module_msgs__msg__Step2D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
size_t max_serialized_size_op3_online_walking_module_msgs__msg__Step2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: step_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: footsteps_2d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_op3_online_walking_module_msgs__msg__Step2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_online_walking_module_msgs__msg__Step2DArray;
    is_plain =
      (
      offsetof(DataType, footsteps_2d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
bool cdr_serialize_key_op3_online_walking_module_msgs__msg__Step2DArray(
  const op3_online_walking_module_msgs__msg__Step2DArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: step_time
  {
    cdr << ros_message->step_time;
  }

  // Field name: footsteps_2d
  {
    size_t size = ros_message->footsteps_2d.size;
    auto array_ptr = ros_message->footsteps_2d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_op3_online_walking_module_msgs__msg__Step2D(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
size_t get_serialized_size_key_op3_online_walking_module_msgs__msg__Step2DArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Step2DArray__ros_msg_type * ros_message = static_cast<const _Step2DArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: step_time
  {
    size_t item_size = sizeof(ros_message->step_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: footsteps_2d
  {
    size_t array_size = ros_message->footsteps_2d.size;
    auto array_ptr = ros_message->footsteps_2d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_op3_online_walking_module_msgs__msg__Step2D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
size_t max_serialized_size_key_op3_online_walking_module_msgs__msg__Step2DArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: step_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: footsteps_2d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_op3_online_walking_module_msgs__msg__Step2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_online_walking_module_msgs__msg__Step2DArray;
    is_plain =
      (
      offsetof(DataType, footsteps_2d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Step2DArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const op3_online_walking_module_msgs__msg__Step2DArray * ros_message = static_cast<const op3_online_walking_module_msgs__msg__Step2DArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_op3_online_walking_module_msgs__msg__Step2DArray(ros_message, cdr);
}

static bool _Step2DArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  op3_online_walking_module_msgs__msg__Step2DArray * ros_message = static_cast<op3_online_walking_module_msgs__msg__Step2DArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_op3_online_walking_module_msgs__msg__Step2DArray(cdr, ros_message);
}

static uint32_t _Step2DArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_op3_online_walking_module_msgs__msg__Step2DArray(
      untyped_ros_message, 0));
}

static size_t _Step2DArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_op3_online_walking_module_msgs__msg__Step2DArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Step2DArray = {
  "op3_online_walking_module_msgs::msg",
  "Step2DArray",
  _Step2DArray__cdr_serialize,
  _Step2DArray__cdr_deserialize,
  _Step2DArray__get_serialized_size,
  _Step2DArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Step2DArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Step2DArray,
  get_message_typesupport_handle_function,
  &op3_online_walking_module_msgs__msg__Step2DArray__get_type_hash,
  &op3_online_walking_module_msgs__msg__Step2DArray__get_type_description,
  &op3_online_walking_module_msgs__msg__Step2DArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_online_walking_module_msgs, msg, Step2DArray)() {
  return &_Step2DArray__type_support;
}

#if defined(__cplusplus)
}
#endif
