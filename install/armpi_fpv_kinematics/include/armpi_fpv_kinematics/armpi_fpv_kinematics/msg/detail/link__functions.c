// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/msg/detail/link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
armpi_fpv_kinematics__msg__Link__init(armpi_fpv_kinematics__msg__Link * msg)
{
  if (!msg) {
    return false;
  }
  // base_link
  // link1
  // link2
  // link3
  // end_effector_link
  return true;
}

void
armpi_fpv_kinematics__msg__Link__fini(armpi_fpv_kinematics__msg__Link * msg)
{
  if (!msg) {
    return;
  }
  // base_link
  // link1
  // link2
  // link3
  // end_effector_link
}

bool
armpi_fpv_kinematics__msg__Link__are_equal(const armpi_fpv_kinematics__msg__Link * lhs, const armpi_fpv_kinematics__msg__Link * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_link
  if (lhs->base_link != rhs->base_link) {
    return false;
  }
  // link1
  if (lhs->link1 != rhs->link1) {
    return false;
  }
  // link2
  if (lhs->link2 != rhs->link2) {
    return false;
  }
  // link3
  if (lhs->link3 != rhs->link3) {
    return false;
  }
  // end_effector_link
  if (lhs->end_effector_link != rhs->end_effector_link) {
    return false;
  }
  return true;
}

bool
armpi_fpv_kinematics__msg__Link__copy(
  const armpi_fpv_kinematics__msg__Link * input,
  armpi_fpv_kinematics__msg__Link * output)
{
  if (!input || !output) {
    return false;
  }
  // base_link
  output->base_link = input->base_link;
  // link1
  output->link1 = input->link1;
  // link2
  output->link2 = input->link2;
  // link3
  output->link3 = input->link3;
  // end_effector_link
  output->end_effector_link = input->end_effector_link;
  return true;
}

armpi_fpv_kinematics__msg__Link *
armpi_fpv_kinematics__msg__Link__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__msg__Link * msg = (armpi_fpv_kinematics__msg__Link *)allocator.allocate(sizeof(armpi_fpv_kinematics__msg__Link), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(armpi_fpv_kinematics__msg__Link));
  bool success = armpi_fpv_kinematics__msg__Link__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
armpi_fpv_kinematics__msg__Link__destroy(armpi_fpv_kinematics__msg__Link * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    armpi_fpv_kinematics__msg__Link__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
armpi_fpv_kinematics__msg__Link__Sequence__init(armpi_fpv_kinematics__msg__Link__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__msg__Link * data = NULL;

  if (size) {
    data = (armpi_fpv_kinematics__msg__Link *)allocator.zero_allocate(size, sizeof(armpi_fpv_kinematics__msg__Link), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = armpi_fpv_kinematics__msg__Link__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        armpi_fpv_kinematics__msg__Link__fini(&data[i - 1]);
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
armpi_fpv_kinematics__msg__Link__Sequence__fini(armpi_fpv_kinematics__msg__Link__Sequence * array)
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
      armpi_fpv_kinematics__msg__Link__fini(&array->data[i]);
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

armpi_fpv_kinematics__msg__Link__Sequence *
armpi_fpv_kinematics__msg__Link__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armpi_fpv_kinematics__msg__Link__Sequence * array = (armpi_fpv_kinematics__msg__Link__Sequence *)allocator.allocate(sizeof(armpi_fpv_kinematics__msg__Link__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = armpi_fpv_kinematics__msg__Link__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
armpi_fpv_kinematics__msg__Link__Sequence__destroy(armpi_fpv_kinematics__msg__Link__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    armpi_fpv_kinematics__msg__Link__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
armpi_fpv_kinematics__msg__Link__Sequence__are_equal(const armpi_fpv_kinematics__msg__Link__Sequence * lhs, const armpi_fpv_kinematics__msg__Link__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!armpi_fpv_kinematics__msg__Link__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
armpi_fpv_kinematics__msg__Link__Sequence__copy(
  const armpi_fpv_kinematics__msg__Link__Sequence * input,
  armpi_fpv_kinematics__msg__Link__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(armpi_fpv_kinematics__msg__Link);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    armpi_fpv_kinematics__msg__Link * data =
      (armpi_fpv_kinematics__msg__Link *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!armpi_fpv_kinematics__msg__Link__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          armpi_fpv_kinematics__msg__Link__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!armpi_fpv_kinematics__msg__Link__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
