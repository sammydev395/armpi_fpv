// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from armpi_fpv_kinematics:srv/SetJointValue.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joint_value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
armpi_fpv_kinematics__srv__SetJointValue_Request__init(armpi_fpv_kinematics__srv__SetJointValue_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_value
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_value, 0)) {
    armpi_fpv_kinematics__srv__SetJointValue_Request__fini(msg);
    return false;
  }
  return true;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Request__fini(armpi_fpv_kinematics__srv__SetJointValue_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_value
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_value);
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Request__are_equal(const armpi_fpv_kinematics__srv__SetJointValue_Request * lhs, const armpi_fpv_kinematics__srv__SetJointValue_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_value
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_value), &(rhs->joint_value)))
  {
    return false;
  }
  return true;
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Request__copy(
  const armpi_fpv_kinematics__srv__SetJointValue_Request * input,
  armpi_fpv_kinematics__srv__SetJointValue_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_value
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_value), &(output->joint_value)))
  {
    return false;
  }
  return true;
}

armpi_fpv_kinematics__srv__SetJointValue_Request *
armpi_fpv_kinematics__srv__SetJointValue_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Request * msg = (armpi_fpv_kinematics__srv__SetJointValue_Request *)allocator.allocate(sizeof(armpi_fpv_kinematics__srv__SetJointValue_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(armpi_fpv_kinematics__srv__SetJointValue_Request));
  bool success = armpi_fpv_kinematics__srv__SetJointValue_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Request__destroy(armpi_fpv_kinematics__srv__SetJointValue_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    armpi_fpv_kinematics__srv__SetJointValue_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__init(armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Request * data = NULL;

  if (size) {
    data = (armpi_fpv_kinematics__srv__SetJointValue_Request *)allocator.zero_allocate(size, sizeof(armpi_fpv_kinematics__srv__SetJointValue_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = armpi_fpv_kinematics__srv__SetJointValue_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        armpi_fpv_kinematics__srv__SetJointValue_Request__fini(&data[i - 1]);
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
armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__fini(armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * array)
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
      armpi_fpv_kinematics__srv__SetJointValue_Request__fini(&array->data[i]);
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

armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence *
armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * array = (armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence *)allocator.allocate(sizeof(armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__destroy(armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__are_equal(const armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * lhs, const armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!armpi_fpv_kinematics__srv__SetJointValue_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__copy(
  const armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * input,
  armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(armpi_fpv_kinematics__srv__SetJointValue_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    armpi_fpv_kinematics__srv__SetJointValue_Request * data =
      (armpi_fpv_kinematics__srv__SetJointValue_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!armpi_fpv_kinematics__srv__SetJointValue_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          armpi_fpv_kinematics__srv__SetJointValue_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!armpi_fpv_kinematics__srv__SetJointValue_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
armpi_fpv_kinematics__srv__SetJointValue_Response__init(armpi_fpv_kinematics__srv__SetJointValue_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // solution
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    armpi_fpv_kinematics__srv__SetJointValue_Response__fini(msg);
    return false;
  }
  return true;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Response__fini(armpi_fpv_kinematics__srv__SetJointValue_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // solution
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Response__are_equal(const armpi_fpv_kinematics__srv__SetJointValue_Response * lhs, const armpi_fpv_kinematics__srv__SetJointValue_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // solution
  if (lhs->solution != rhs->solution) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Response__copy(
  const armpi_fpv_kinematics__srv__SetJointValue_Response * input,
  armpi_fpv_kinematics__srv__SetJointValue_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // solution
  output->solution = input->solution;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

armpi_fpv_kinematics__srv__SetJointValue_Response *
armpi_fpv_kinematics__srv__SetJointValue_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Response * msg = (armpi_fpv_kinematics__srv__SetJointValue_Response *)allocator.allocate(sizeof(armpi_fpv_kinematics__srv__SetJointValue_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(armpi_fpv_kinematics__srv__SetJointValue_Response));
  bool success = armpi_fpv_kinematics__srv__SetJointValue_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Response__destroy(armpi_fpv_kinematics__srv__SetJointValue_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    armpi_fpv_kinematics__srv__SetJointValue_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__init(armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Response * data = NULL;

  if (size) {
    data = (armpi_fpv_kinematics__srv__SetJointValue_Response *)allocator.zero_allocate(size, sizeof(armpi_fpv_kinematics__srv__SetJointValue_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = armpi_fpv_kinematics__srv__SetJointValue_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        armpi_fpv_kinematics__srv__SetJointValue_Response__fini(&data[i - 1]);
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
armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__fini(armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * array)
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
      armpi_fpv_kinematics__srv__SetJointValue_Response__fini(&array->data[i]);
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

armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence *
armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * array = (armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence *)allocator.allocate(sizeof(armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__destroy(armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__are_equal(const armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * lhs, const armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!armpi_fpv_kinematics__srv__SetJointValue_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__copy(
  const armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * input,
  armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(armpi_fpv_kinematics__srv__SetJointValue_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    armpi_fpv_kinematics__srv__SetJointValue_Response * data =
      (armpi_fpv_kinematics__srv__SetJointValue_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!armpi_fpv_kinematics__srv__SetJointValue_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          armpi_fpv_kinematics__srv__SetJointValue_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!armpi_fpv_kinematics__srv__SetJointValue_Response__copy(
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
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"

bool
armpi_fpv_kinematics__srv__SetJointValue_Event__init(armpi_fpv_kinematics__srv__SetJointValue_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    armpi_fpv_kinematics__srv__SetJointValue_Event__fini(msg);
    return false;
  }
  // request
  if (!armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__init(&msg->request, 0)) {
    armpi_fpv_kinematics__srv__SetJointValue_Event__fini(msg);
    return false;
  }
  // response
  if (!armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__init(&msg->response, 0)) {
    armpi_fpv_kinematics__srv__SetJointValue_Event__fini(msg);
    return false;
  }
  return true;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Event__fini(armpi_fpv_kinematics__srv__SetJointValue_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__fini(&msg->request);
  // response
  armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__fini(&msg->response);
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Event__are_equal(const armpi_fpv_kinematics__srv__SetJointValue_Event * lhs, const armpi_fpv_kinematics__srv__SetJointValue_Event * rhs)
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
  if (!armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Event__copy(
  const armpi_fpv_kinematics__srv__SetJointValue_Event * input,
  armpi_fpv_kinematics__srv__SetJointValue_Event * output)
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
  if (!armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

armpi_fpv_kinematics__srv__SetJointValue_Event *
armpi_fpv_kinematics__srv__SetJointValue_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Event * msg = (armpi_fpv_kinematics__srv__SetJointValue_Event *)allocator.allocate(sizeof(armpi_fpv_kinematics__srv__SetJointValue_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(armpi_fpv_kinematics__srv__SetJointValue_Event));
  bool success = armpi_fpv_kinematics__srv__SetJointValue_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Event__destroy(armpi_fpv_kinematics__srv__SetJointValue_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    armpi_fpv_kinematics__srv__SetJointValue_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__init(armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Event * data = NULL;

  if (size) {
    data = (armpi_fpv_kinematics__srv__SetJointValue_Event *)allocator.zero_allocate(size, sizeof(armpi_fpv_kinematics__srv__SetJointValue_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = armpi_fpv_kinematics__srv__SetJointValue_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        armpi_fpv_kinematics__srv__SetJointValue_Event__fini(&data[i - 1]);
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
armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__fini(armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * array)
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
      armpi_fpv_kinematics__srv__SetJointValue_Event__fini(&array->data[i]);
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

armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence *
armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * array = (armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence *)allocator.allocate(sizeof(armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__destroy(armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__are_equal(const armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * lhs, const armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!armpi_fpv_kinematics__srv__SetJointValue_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence__copy(
  const armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * input,
  armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(armpi_fpv_kinematics__srv__SetJointValue_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    armpi_fpv_kinematics__srv__SetJointValue_Event * data =
      (armpi_fpv_kinematics__srv__SetJointValue_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!armpi_fpv_kinematics__srv__SetJointValue_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          armpi_fpv_kinematics__srv__SetJointValue_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!armpi_fpv_kinematics__srv__SetJointValue_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
