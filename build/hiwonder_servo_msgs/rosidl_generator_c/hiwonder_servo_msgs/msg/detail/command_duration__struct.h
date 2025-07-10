// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/CommandDuration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/command_duration.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CommandDuration in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__CommandDuration
{
  double data;
  double duration;
} hiwonder_servo_msgs__msg__CommandDuration;

// Struct for a sequence of hiwonder_servo_msgs__msg__CommandDuration.
typedef struct hiwonder_servo_msgs__msg__CommandDuration__Sequence
{
  hiwonder_servo_msgs__msg__CommandDuration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__CommandDuration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION__STRUCT_H_
