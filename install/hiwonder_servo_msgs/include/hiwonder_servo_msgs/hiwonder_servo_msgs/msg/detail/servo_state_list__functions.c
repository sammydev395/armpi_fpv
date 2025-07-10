// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `servo_states`
#include "hiwonder_servo_msgs/msg/detail/servo_state__functions.h"

bool
hiwonder_servo_msgs__msg__ServoStateList__init(hiwonder_servo_msgs__msg__ServoStateList * msg)
{
  if (!msg) {
    return false;
  }
  // servo_states
  if (!hiwonder_servo_msgs__msg__ServoState__Sequence__init(&msg->servo_states, 0)) {
    hiwonder_servo_msgs__msg__ServoStateList__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__msg__ServoStateList__fini(hiwonder_servo_msgs__msg__ServoStateList * msg)
{
  if (!msg) {
    return;
  }
  // servo_states
  hiwonder_servo_msgs__msg__ServoState__Sequence__fini(&msg->servo_states);
}

bool
hiwonder_servo_msgs__msg__ServoStateList__are_equal(const hiwonder_servo_msgs__msg__ServoStateList * lhs, const hiwonder_servo_msgs__msg__ServoStateList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_states
  if (!hiwonder_servo_msgs__msg__ServoState__Sequence__are_equal(
      &(lhs->servo_states), &(rhs->servo_states)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__msg__ServoStateList__copy(
  const hiwonder_servo_msgs__msg__ServoStateList * input,
  hiwonder_servo_msgs__msg__ServoStateList * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_states
  if (!hiwonder_servo_msgs__msg__ServoState__Sequence__copy(
      &(input->servo_states), &(output->servo_states)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__msg__ServoStateList *
hiwonder_servo_msgs__msg__ServoStateList__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__msg__ServoStateList * msg = (hiwonder_servo_msgs__msg__ServoStateList *)allocator.allocate(sizeof(hiwonder_servo_msgs__msg__ServoStateList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__msg__ServoStateList));
  bool success = hiwonder_servo_msgs__msg__ServoStateList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__msg__ServoStateList__destroy(hiwonder_servo_msgs__msg__ServoStateList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__msg__ServoStateList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__msg__ServoStateList__Sequence__init(hiwonder_servo_msgs__msg__ServoStateList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__msg__ServoStateList * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__msg__ServoStateList *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__msg__ServoStateList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__msg__ServoStateList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__msg__ServoStateList__fini(&data[i - 1]);
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
hiwonder_servo_msgs__msg__ServoStateList__Sequence__fini(hiwonder_servo_msgs__msg__ServoStateList__Sequence * array)
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
      hiwonder_servo_msgs__msg__ServoStateList__fini(&array->data[i]);
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

hiwonder_servo_msgs__msg__ServoStateList__Sequence *
hiwonder_servo_msgs__msg__ServoStateList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__msg__ServoStateList__Sequence * array = (hiwonder_servo_msgs__msg__ServoStateList__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__msg__ServoStateList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__msg__ServoStateList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__msg__ServoStateList__Sequence__destroy(hiwonder_servo_msgs__msg__ServoStateList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__msg__ServoStateList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__msg__ServoStateList__Sequence__are_equal(const hiwonder_servo_msgs__msg__ServoStateList__Sequence * lhs, const hiwonder_servo_msgs__msg__ServoStateList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__msg__ServoStateList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__msg__ServoStateList__Sequence__copy(
  const hiwonder_servo_msgs__msg__ServoStateList__Sequence * input,
  hiwonder_servo_msgs__msg__ServoStateList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__msg__ServoStateList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__msg__ServoStateList * data =
      (hiwonder_servo_msgs__msg__ServoStateList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__msg__ServoStateList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__msg__ServoStateList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__msg__ServoStateList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
