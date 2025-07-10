// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state_list.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'servo_states'
#include "hiwonder_servo_msgs/msg/detail/servo_state__struct.h"

/// Struct defined in msg/ServoStateList in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__ServoStateList
{
  hiwonder_servo_msgs__msg__ServoState__Sequence servo_states;
} hiwonder_servo_msgs__msg__ServoStateList;

// Struct for a sequence of hiwonder_servo_msgs__msg__ServoStateList.
typedef struct hiwonder_servo_msgs__msg__ServoStateList__Sequence
{
  hiwonder_servo_msgs__msg__ServoStateList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__ServoStateList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_H_
