// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ServoState in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__ServoState
{
  /// motor state is at this time
  double timestamp;
  /// motor id
  int32_t id;
  /// commanded position (in encoder units)
  int32_t goal;
  /// current position (in encoder units)
  int32_t position;
  /// difference between current and goal positions
  int32_t error;
  /// current voltage (mv)
  int32_t voltage;
} hiwonder_servo_msgs__msg__ServoState;

// Struct for a sequence of hiwonder_servo_msgs__msg__ServoState.
typedef struct hiwonder_servo_msgs__msg__ServoState__Sequence
{
  hiwonder_servo_msgs__msg__ServoState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__ServoState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__STRUCT_H_
