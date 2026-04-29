// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:srv/GetJointPose.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/srv/detail/get_joint_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
op3_online_walking_module_msgs__srv__GetJointPose_Request__init(op3_online_walking_module_msgs__srv__GetJointPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Request__fini(op3_online_walking_module_msgs__srv__GetJointPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Request__are_equal(const op3_online_walking_module_msgs__srv__GetJointPose_Request * lhs, const op3_online_walking_module_msgs__srv__GetJointPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Request__copy(
  const op3_online_walking_module_msgs__srv__GetJointPose_Request * input,
  op3_online_walking_module_msgs__srv__GetJointPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

op3_online_walking_module_msgs__srv__GetJointPose_Request *
op3_online_walking_module_msgs__srv__GetJointPose_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Request * msg = (op3_online_walking_module_msgs__srv__GetJointPose_Request *)allocator.allocate(sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Request));
  bool success = op3_online_walking_module_msgs__srv__GetJointPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Request__destroy(op3_online_walking_module_msgs__srv__GetJointPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__srv__GetJointPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__init(op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Request * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__srv__GetJointPose_Request *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__srv__GetJointPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__srv__GetJointPose_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__fini(op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      op3_online_walking_module_msgs__srv__GetJointPose_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence *
op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * array = (op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__destroy(op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__are_equal(const op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * lhs, const op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__srv__GetJointPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__copy(
  const op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * input,
  op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__srv__GetJointPose_Request * data =
      (op3_online_walking_module_msgs__srv__GetJointPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__srv__GetJointPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__srv__GetJointPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__srv__GetJointPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "op3_online_walking_module_msgs/msg/detail/joint_pose__functions.h"

bool
op3_online_walking_module_msgs__srv__GetJointPose_Response__init(op3_online_walking_module_msgs__srv__GetJointPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!op3_online_walking_module_msgs__msg__JointPose__init(&msg->pose)) {
    op3_online_walking_module_msgs__srv__GetJointPose_Response__fini(msg);
    return false;
  }
  return true;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Response__fini(op3_online_walking_module_msgs__srv__GetJointPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose
  op3_online_walking_module_msgs__msg__JointPose__fini(&msg->pose);
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Response__are_equal(const op3_online_walking_module_msgs__srv__GetJointPose_Response * lhs, const op3_online_walking_module_msgs__srv__GetJointPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!op3_online_walking_module_msgs__msg__JointPose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Response__copy(
  const op3_online_walking_module_msgs__srv__GetJointPose_Response * input,
  op3_online_walking_module_msgs__srv__GetJointPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!op3_online_walking_module_msgs__msg__JointPose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

op3_online_walking_module_msgs__srv__GetJointPose_Response *
op3_online_walking_module_msgs__srv__GetJointPose_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Response * msg = (op3_online_walking_module_msgs__srv__GetJointPose_Response *)allocator.allocate(sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Response));
  bool success = op3_online_walking_module_msgs__srv__GetJointPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Response__destroy(op3_online_walking_module_msgs__srv__GetJointPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__srv__GetJointPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__init(op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Response * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__srv__GetJointPose_Response *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__srv__GetJointPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__srv__GetJointPose_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__fini(op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      op3_online_walking_module_msgs__srv__GetJointPose_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence *
op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * array = (op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__destroy(op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__are_equal(const op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * lhs, const op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__srv__GetJointPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__copy(
  const op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * input,
  op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__srv__GetJointPose_Response * data =
      (op3_online_walking_module_msgs__srv__GetJointPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__srv__GetJointPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__srv__GetJointPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__srv__GetJointPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "op3_online_walking_module_msgs/srv/detail/get_joint_pose__functions.h"

bool
op3_online_walking_module_msgs__srv__GetJointPose_Event__init(op3_online_walking_module_msgs__srv__GetJointPose_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(msg);
    return false;
  }
  // request
  if (!op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__init(&msg->request, 0)) {
    op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(msg);
    return false;
  }
  // response
  if (!op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__init(&msg->response, 0)) {
    op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(msg);
    return false;
  }
  return true;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(op3_online_walking_module_msgs__srv__GetJointPose_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__fini(&msg->request);
  // response
  op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__fini(&msg->response);
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Event__are_equal(const op3_online_walking_module_msgs__srv__GetJointPose_Event * lhs, const op3_online_walking_module_msgs__srv__GetJointPose_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Event__copy(
  const op3_online_walking_module_msgs__srv__GetJointPose_Event * input,
  op3_online_walking_module_msgs__srv__GetJointPose_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!op3_online_walking_module_msgs__srv__GetJointPose_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!op3_online_walking_module_msgs__srv__GetJointPose_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

op3_online_walking_module_msgs__srv__GetJointPose_Event *
op3_online_walking_module_msgs__srv__GetJointPose_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Event * msg = (op3_online_walking_module_msgs__srv__GetJointPose_Event *)allocator.allocate(sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Event));
  bool success = op3_online_walking_module_msgs__srv__GetJointPose_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Event__destroy(op3_online_walking_module_msgs__srv__GetJointPose_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__init(op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Event * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__srv__GetJointPose_Event *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__srv__GetJointPose_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__fini(op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence *
op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * array = (op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__destroy(op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__are_equal(const op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * lhs, const op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__srv__GetJointPose_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence__copy(
  const op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * input,
  op3_online_walking_module_msgs__srv__GetJointPose_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__srv__GetJointPose_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__srv__GetJointPose_Event * data =
      (op3_online_walking_module_msgs__srv__GetJointPose_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__srv__GetJointPose_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__srv__GetJointPose_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__srv__GetJointPose_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
