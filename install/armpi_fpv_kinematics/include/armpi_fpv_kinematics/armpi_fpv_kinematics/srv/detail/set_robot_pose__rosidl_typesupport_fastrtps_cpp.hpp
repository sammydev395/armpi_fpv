// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize(
  const armpi_fpv_kinematics::srv::SetRobotPose_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics::srv::SetRobotPose_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size(
  const armpi_fpv_kinematics::srv::SetRobotPose_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_SetRobotPose_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize_key(
  const armpi_fpv_kinematics::srv::SetRobotPose_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size_key(
  const armpi_fpv_kinematics::srv::SetRobotPose_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_key_SetRobotPose_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize(
  const armpi_fpv_kinematics::srv::SetRobotPose_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics::srv::SetRobotPose_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size(
  const armpi_fpv_kinematics::srv::SetRobotPose_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_SetRobotPose_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize_key(
  const armpi_fpv_kinematics::srv::SetRobotPose_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size_key(
  const armpi_fpv_kinematics::srv::SetRobotPose_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_key_SetRobotPose_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize(
  const armpi_fpv_kinematics::srv::SetRobotPose_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics::srv::SetRobotPose_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size(
  const armpi_fpv_kinematics::srv::SetRobotPose_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_SetRobotPose_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize_key(
  const armpi_fpv_kinematics::srv::SetRobotPose_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size_key(
  const armpi_fpv_kinematics::srv::SetRobotPose_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_key_SetRobotPose_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Event)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose)();

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
