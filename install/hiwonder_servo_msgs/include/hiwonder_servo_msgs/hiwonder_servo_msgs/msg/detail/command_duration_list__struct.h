// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/command_duration_list.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ids'
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CommandDurationList in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__CommandDurationList
{
  double duration;
  rosidl_runtime_c__uint16__Sequence ids;
  rosidl_runtime_c__double__Sequence positions;
} hiwonder_servo_msgs__msg__CommandDurationList;

// Struct for a sequence of hiwonder_servo_msgs__msg__CommandDurationList.
typedef struct hiwonder_servo_msgs__msg__CommandDurationList__Sequence
{
  hiwonder_servo_msgs__msg__CommandDurationList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__CommandDurationList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__STRUCT_H_
