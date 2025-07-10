// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/joints_range.h"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__STRUCT_H_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'joint1'
// Member 'joint2'
// Member 'joint3'
// Member 'joint4'
// Member 'joint5'
#include "armpi_fpv_kinematics/msg/detail/joint_range__struct.h"

/// Struct defined in msg/JointsRange in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__msg__JointsRange
{
  armpi_fpv_kinematics__msg__JointRange joint1;
  armpi_fpv_kinematics__msg__JointRange joint2;
  armpi_fpv_kinematics__msg__JointRange joint3;
  armpi_fpv_kinematics__msg__JointRange joint4;
  armpi_fpv_kinematics__msg__JointRange joint5;
} armpi_fpv_kinematics__msg__JointsRange;

// Struct for a sequence of armpi_fpv_kinematics__msg__JointsRange.
typedef struct armpi_fpv_kinematics__msg__JointsRange__Sequence
{
  armpi_fpv_kinematics__msg__JointsRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__msg__JointsRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__STRUCT_H_
