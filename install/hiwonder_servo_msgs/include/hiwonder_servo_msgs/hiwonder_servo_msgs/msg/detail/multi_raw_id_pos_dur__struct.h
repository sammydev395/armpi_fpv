// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/multi_raw_id_pos_dur.h"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__STRUCT_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'id_pos_dur_list'
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__struct.h"

/// Struct defined in msg/MultiRawIdPosDur in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__msg__MultiRawIdPosDur
{
  hiwonder_servo_msgs__msg__RawIdPosDur__Sequence id_pos_dur_list;
} hiwonder_servo_msgs__msg__MultiRawIdPosDur;

// Struct for a sequence of hiwonder_servo_msgs__msg__MultiRawIdPosDur.
typedef struct hiwonder_servo_msgs__msg__MultiRawIdPosDur__Sequence
{
  hiwonder_servo_msgs__msg__MultiRawIdPosDur * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__msg__MultiRawIdPosDur__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__STRUCT_H_
