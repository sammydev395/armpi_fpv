// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/link.h"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__STRUCT_H_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Link in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__msg__Link
{
  double base_link;
  double link1;
  double link2;
  double link3;
  double end_effector_link;
} armpi_fpv_kinematics__msg__Link;

// Struct for a sequence of armpi_fpv_kinematics__msg__Link.
typedef struct armpi_fpv_kinematics__msg__Link__Sequence
{
  armpi_fpv_kinematics__msg__Link * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__msg__Link__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__STRUCT_H_
