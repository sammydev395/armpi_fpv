// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/RawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/raw_id_pos_dur.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RawIdPosDur in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__RawIdPosDur
{
  uint8_t id;
  uint16_t position;
  double duration;
} hiwonder_servo_msgs__msg__RawIdPosDur;

// Struct for a sequence of hiwonder_servo_msgs__msg__RawIdPosDur.
typedef struct hiwonder_servo_msgs__msg__RawIdPosDur__Sequence
{
  hiwonder_servo_msgs__msg__RawIdPosDur * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__RawIdPosDur__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__STRUCT_H_
