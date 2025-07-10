// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice
#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "armpi_fpv_kinematics/msg/detail/link__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__msg__Link(
  const armpi_fpv_kinematics__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__msg__Link(
  eprosima::fastcdr::Cdr &,
  armpi_fpv_kinematics__msg__Link * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__msg__Link(
  const armpi_fpv_kinematics__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, msg, Link)();

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
