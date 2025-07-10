// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/joint_range.h"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__STRUCT_H_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/JointRange in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__msg__JointRange
{
  double min;
  double max;
} armpi_fpv_kinematics__msg__JointRange;

// Struct for a sequence of armpi_fpv_kinematics__msg__JointRange.
typedef struct armpi_fpv_kinematics__msg__JointRange__Sequence
{
  armpi_fpv_kinematics__msg__JointRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__msg__JointRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__STRUCT_H_
