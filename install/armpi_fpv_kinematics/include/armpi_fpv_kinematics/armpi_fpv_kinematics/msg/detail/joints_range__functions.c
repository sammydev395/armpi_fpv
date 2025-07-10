// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint1`
// Member `joint2`
// Member `joint3`
// Member `joint4`
// Member `joint5`
#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"

bool
armpi_fpv_kinematics__msg__JointsRange__init(armpi_fpv_kinematics__msg__JointsRange * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  if (!armpi_fpv_kinematics__msg__JointRange__init(&msg->joint1)) {
    armpi_fpv_kinematics__msg__JointsRange__fini(msg);
    return false;
  }
  // joint2
  if (!armpi_fpv_kinematics__msg__JointRange__init(&msg->joint2)) {
    armpi_fpv_kinematics__msg__JointsRange__fini(msg);
    return false;
  }
  // joint3
  if (!armpi_fpv_kinematics__msg__JointRange__init(&msg->joint3)) {
    armpi_fpv_kinematics__msg__JointsRange__fini(msg);
    return false;
  }
  // joint4
  if (!armpi_fpv_kinematics__msg__JointRange__init(&msg->joint4)) {
    armpi_fpv_kinematics__msg__JointsRange__fini(msg);
    return false;
  }
  // joint5
  if (!armpi_fpv_kinematics__msg__JointRange__init(&msg->joint5)) {
    armpi_fpv_kinematics__msg__JointsRange__fini(msg);
    return false;
  }
  return true;
}

void
armpi_fpv_kinematics__msg__JointsRange__fini(armpi_fpv_kinematics__msg__JointsRange * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  armpi_fpv_kinematics__msg__JointRange__fini(&msg->joint1);
  // joint2
  armpi_fpv_kinematics__msg__JointRange__fini(&msg->joint2);
  // joint3
  armpi_fpv_kinematics__msg__JointRange__fini(&msg->joint3);
  // joint4
  armpi_fpv_kinematics__msg__JointRange__fini(&msg->joint4);
  // joint5
  armpi_fpv_kinematics__msg__JointRange__fini(&msg->joint5);
}

bool
armpi_fpv_kinematics__msg__JointsRange__are_equal(const armpi_fpv_kinematics__msg__JointsRange * lhs, const armpi_fpv_kinematics__msg__JointsRange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (!armpi_fpv_kinematics__msg__JointRange__are_equal(
      &(lhs->joint1), &(rhs->joint1)))
  {
    return false;
  }
  // joint2
  if (!armpi_fpv_kinematics__msg__JointRange__are_equal(
      &(lhs->joint2), &(rhs->joint2)))
  {
    return false;
  }
  // joint3
  if (!armpi_fpv_kinematics__msg__JointRange__are_equal(
      &(lhs->joint3), &(rhs->joint3)))
  {
    return false;
  }
  // joint4
  if (!armpi_fpv_kinematics__msg__JointRange__are_equal(
      &(lhs->joint4), &(rhs->joint4)))
  {
    return false;
  }
  // joint5
  if (!armpi_fpv_kinematics__msg__JointRange__are_equal(
      &(lhs->joint5), &(rhs->joint5)))
  {
    return false;
  }
  return true;
}

bool
armpi_fpv_kinematics__msg__JointsRange__copy(
  const armpi_fpv_kinematics__msg__JointsRange * input,
  armpi_fpv_kinematics__msg__JointsRange * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  if (!armpi_fpv_kinematics__msg__JointRange__copy(
      &(input->joint1), &(output->joint1)))
  {
    return false;
  }
  // joint2
  if (!armpi_fpv_kinematics__msg__JointRange__copy(
      &(input->joint2), &(output->joint2)))
  {
    return false;
  }
  // joint3
  if (!armpi_fpv_kinematics__msg__JointRange__copy(
      &(input->joint3), &(output->joint3)))
  {
    return false;
  }
  // joint4
  if (!armpi_fpv_kinematics__msg__JointRange__copy(
      &(input->joint4), &(output->joint4)))
  {
    return false;
  }
  // joint5
  if (!armpi_fpv_kinematics__msg__JointRange__copy(
      &(input->joint5), &(output->joint5)))
  {
    return false;
  }
  return true;
}

armpi_fpv_kinematics__msg__JointsRange *
armpi_fpv_kinematics__msg__JointsRange__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__msg__JointsRange * msg = (armpi_fpv_kinematics__msg__JointsRange *)allocator.allocate(sizeof(armpi_fpv_kinematics__msg__JointsRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(armpi_fpv_kinematics__msg__JointsRange));
  bool success = armpi_fpv_kinematics__msg__JointsRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
armpi_fpv_kinematics__msg__JointsRange__destroy(armpi_fpv_kinematics__msg__JointsRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    armpi_fpv_kinematics__msg__JointsRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
armpi_fpv_kinematics__msg__JointsRange__Sequence__init(armpi_fpv_kinematics__msg__JointsRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__msg__JointsRange * data = NULL;

  if (size) {
    data = (armpi_fpv_kinematics__msg__JointsRange *)allocator.zero_allocate(size, sizeof(armpi_fpv_kinematics__msg__JointsRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = armpi_fpv_kinematics__msg__JointsRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        armpi_fpv_kinematics__msg__JointsRange__fini(&data[i - 1]);
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
armpi_fpv_kinematics__msg__JointsRange__Sequence__fini(armpi_fpv_kinematics__msg__JointsRange__Sequence * array)
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
      armpi_fpv_kinematics__msg__JointsRange__fini(&array->data[i]);
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

armpi_fpv_kinematics__msg__JointsRange__Sequence *
armpi_fpv_kinematics__msg__JointsRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__msg__JointsRange__Sequence * array = (armpi_fpv_kinematics__msg__JointsRange__Sequence *)allocator.allocate(sizeof(armpi_fpv_kinematics__msg__JointsRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = armpi_fpv_kinematics__msg__JointsRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
armpi_fpv_kinematics__msg__JointsRange__Sequence__destroy(armpi_fpv_kinematics__msg__JointsRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    armpi_fpv_kinematics__msg__JointsRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
armpi_fpv_kinematics__msg__JointsRange__Sequence__are_equal(const armpi_fpv_kinematics__msg__JointsRange__Sequence * lhs, const armpi_fpv_kinematics__msg__JointsRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!armpi_fpv_kinematics__msg__JointsRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
armpi_fpv_kinematics__msg__JointsRange__Sequence__copy(
  const armpi_fpv_kinematics__msg__JointsRange__Sequence * input,
  armpi_fpv_kinematics__msg__JointsRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(armpi_fpv_kinematics__msg__JointsRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    armpi_fpv_kinematics__msg__JointsRange * data =
      (armpi_fpv_kinematics__msg__JointsRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!armpi_fpv_kinematics__msg__JointsRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          armpi_fpv_kinematics__msg__JointsRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!armpi_fpv_kinematics__msg__JointsRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
