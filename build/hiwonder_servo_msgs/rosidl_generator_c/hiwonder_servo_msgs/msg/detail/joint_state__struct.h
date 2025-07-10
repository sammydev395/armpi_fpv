// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/joint_state.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'servo_ids'
// Member 'servo_temps'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointState in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__JointState
{
  std_msgs__msg__Header header;
  /// joint name
  rosidl_runtime_c__String name;
  /// motor ids controlling this joint
  rosidl_runtime_c__int32__Sequence servo_ids;
  /// motor temperatures, same order as motor_ids
  rosidl_runtime_c__int32__Sequence servo_temps;
  /// commanded position (in radians)
  double goal_pos;
  /// current joint position (in radians)
  double current_pos;
  /// error between commanded and current positions (in radians)
  double error;
  /// current joint speed (in radians per second)
  double velocity;
} hiwonder_servo_msgs__msg__JointState;

// Struct for a sequence of hiwonder_servo_msgs__msg__JointState.
typedef struct hiwonder_servo_msgs__msg__JointState__Sequence
{
  hiwonder_servo_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
