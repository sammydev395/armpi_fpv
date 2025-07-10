// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice
#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  eprosima::fastcdr::Cdr &,
  armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  eprosima::fastcdr::Cdr &,
  armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  eprosima::fastcdr::Cdr &,
  armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Event)();

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose)();

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
