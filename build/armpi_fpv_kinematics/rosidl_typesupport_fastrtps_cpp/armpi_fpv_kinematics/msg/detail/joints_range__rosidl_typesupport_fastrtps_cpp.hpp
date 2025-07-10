// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice

#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics::msg::JointsRange & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_JointsRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize_key(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size_key(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_key_JointsRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, msg, JointsRange)();

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
