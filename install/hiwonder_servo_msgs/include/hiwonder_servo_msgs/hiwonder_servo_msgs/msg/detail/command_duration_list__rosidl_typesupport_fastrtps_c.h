// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice
#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_serialize_hiwonder_servo_msgs__msg__CommandDurationList(
  const hiwonder_servo_msgs__msg__CommandDurationList * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_deserialize_hiwonder_servo_msgs__msg__CommandDurationList(
  eprosima::fastcdr::Cdr &,
  hiwonder_servo_msgs__msg__CommandDurationList * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t get_serialized_size_hiwonder_servo_msgs__msg__CommandDurationList(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t max_serialized_size_hiwonder_servo_msgs__msg__CommandDurationList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_serialize_key_hiwonder_servo_msgs__msg__CommandDurationList(
  const hiwonder_servo_msgs__msg__CommandDurationList * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t get_serialized_size_key_hiwonder_servo_msgs__msg__CommandDurationList(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t max_serialized_size_key_hiwonder_servo_msgs__msg__CommandDurationList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hiwonder_servo_msgs, msg, CommandDurationList)();

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
