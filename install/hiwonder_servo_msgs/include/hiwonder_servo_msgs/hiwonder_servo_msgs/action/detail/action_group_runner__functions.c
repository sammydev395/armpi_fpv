// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hiwonder_servo_msgs:action/ActionGroupRunner.idl
// generated code does not contain a copyright notice
#include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__init(hiwonder_servo_msgs__action__ActionGroupRunner_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(msg);
    return false;
  }
  // repeat
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(hiwonder_servo_msgs__action__ActionGroupRunner_Goal * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // repeat
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_Goal * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // repeat
  if (lhs->repeat != rhs->repeat) {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_Goal * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // repeat
  output->repeat = input->repeat;
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_Goal *
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_Goal *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_Goal *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_Goal * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `name`
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Result__init(hiwonder_servo_msgs__action__ActionGroupRunner_Result * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(msg);
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(hiwonder_servo_msgs__action__ActionGroupRunner_Result * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Result__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_Result * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Result__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_Result * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_Result *
hiwonder_servo_msgs__action__ActionGroupRunner_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Result * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_Result *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Result));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Result__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Result * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_Result *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_Result * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__init(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(msg);
    return false;
  }
  // step
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // step
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // step
  if (lhs->step != rhs->step) {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // step
  output->step = input->step;
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_Feedback *
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_Feedback *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_Feedback *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__init(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__init(&msg->goal)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(&msg->goal);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__init(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__copy(
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
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__init(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * rhs)
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
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * output)
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
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event *
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__init(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__init(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__init(&msg->result)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(&msg->result);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__init(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__init(&msg->request, 0)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__init(&msg->response, 0)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__fini(&msg->request);
  // response
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__fini(&msg->response);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * rhs)
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
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * output)
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
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event *
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"

bool
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__init(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__init(&msg->feedback)) {
    hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(&msg->feedback);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage *
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * msg = (hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage));
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__init(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * data = NULL;

  if (size) {
    data = (hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage *)allocator.zero_allocate(size, sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(&data[i - 1]);
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
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__fini(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * array)
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
      hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(&array->data[i]);
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

hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence *
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * array = (hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence *)allocator.allocate(sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__destroy(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__are_equal(const hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * lhs, const hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence__copy(
  const hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * input,
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * data =
      (hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
