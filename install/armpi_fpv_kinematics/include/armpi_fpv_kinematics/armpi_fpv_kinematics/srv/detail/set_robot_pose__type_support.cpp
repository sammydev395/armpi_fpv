// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetRobotPose_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) armpi_fpv_kinematics::srv::SetRobotPose_Request(_init);
}

void SetRobotPose_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<armpi_fpv_kinematics::srv::SetRobotPose_Request *>(message_memory);
  typed_message->~SetRobotPose_Request();
}

size_t size_function__SetRobotPose_Request__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Request__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Request__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Request__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetRobotPose_Request__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Request__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetRobotPose_Request__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Request__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetRobotPose_Request__pitch_range(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Request__pitch_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Request__pitch_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Request__pitch_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetRobotPose_Request__pitch_range(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Request__pitch_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetRobotPose_Request__pitch_range(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Request__pitch_range(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetRobotPose_Request_message_member_array[5] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Request, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Request__position,  // size() function pointer
    get_const_function__SetRobotPose_Request__position,  // get_const(index) function pointer
    get_function__SetRobotPose_Request__position,  // get(index) function pointer
    fetch_function__SetRobotPose_Request__position,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Request__position,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Request__position  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Request, pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Request, pitch_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Request__pitch_range,  // size() function pointer
    get_const_function__SetRobotPose_Request__pitch_range,  // get_const(index) function pointer
    get_function__SetRobotPose_Request__pitch_range,  // get(index) function pointer
    fetch_function__SetRobotPose_Request__pitch_range,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Request__pitch_range,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Request__pitch_range  // resize(index) function pointer
  },
  {
    "roll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Request, roll),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Request, resolution),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetRobotPose_Request_message_members = {
  "armpi_fpv_kinematics::srv",  // message namespace
  "SetRobotPose_Request",  // message name
  5,  // number of fields
  sizeof(armpi_fpv_kinematics::srv::SetRobotPose_Request),
  false,  // has_any_key_member_
  SetRobotPose_Request_message_member_array,  // message members
  SetRobotPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetRobotPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetRobotPose_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetRobotPose_Request_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Request>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Request)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetRobotPose_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) armpi_fpv_kinematics::srv::SetRobotPose_Response(_init);
}

void SetRobotPose_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<armpi_fpv_kinematics::srv::SetRobotPose_Response *>(message_memory);
  typed_message->~SetRobotPose_Response();
}

size_t size_function__SetRobotPose_Response__pulse(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Response__pulse(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Response__pulse(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Response__pulse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetRobotPose_Response__pulse(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Response__pulse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetRobotPose_Response__pulse(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Response__pulse(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetRobotPose_Response__current_pulse(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Response__current_pulse(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Response__current_pulse(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Response__current_pulse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__SetRobotPose_Response__current_pulse(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Response__current_pulse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__SetRobotPose_Response__current_pulse(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Response__current_pulse(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetRobotPose_Response__rpy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Response__rpy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Response__rpy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Response__rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetRobotPose_Response__rpy(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Response__rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetRobotPose_Response__rpy(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Response__rpy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetRobotPose_Response_message_member_array[5] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pulse",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Response, pulse),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Response__pulse,  // size() function pointer
    get_const_function__SetRobotPose_Response__pulse,  // get_const(index) function pointer
    get_function__SetRobotPose_Response__pulse,  // get(index) function pointer
    fetch_function__SetRobotPose_Response__pulse,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Response__pulse,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Response__pulse  // resize(index) function pointer
  },
  {
    "current_pulse",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Response, current_pulse),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Response__current_pulse,  // size() function pointer
    get_const_function__SetRobotPose_Response__current_pulse,  // get_const(index) function pointer
    get_function__SetRobotPose_Response__current_pulse,  // get(index) function pointer
    fetch_function__SetRobotPose_Response__current_pulse,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Response__current_pulse,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Response__current_pulse  // resize(index) function pointer
  },
  {
    "rpy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Response, rpy),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Response__rpy,  // size() function pointer
    get_const_function__SetRobotPose_Response__rpy,  // get_const(index) function pointer
    get_function__SetRobotPose_Response__rpy,  // get(index) function pointer
    fetch_function__SetRobotPose_Response__rpy,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Response__rpy,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Response__rpy  // resize(index) function pointer
  },
  {
    "min_variation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Response, min_variation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetRobotPose_Response_message_members = {
  "armpi_fpv_kinematics::srv",  // message namespace
  "SetRobotPose_Response",  // message name
  5,  // number of fields
  sizeof(armpi_fpv_kinematics::srv::SetRobotPose_Response),
  false,  // has_any_key_member_
  SetRobotPose_Response_message_member_array,  // message members
  SetRobotPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetRobotPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetRobotPose_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetRobotPose_Response_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Response>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Response)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetRobotPose_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) armpi_fpv_kinematics::srv::SetRobotPose_Event(_init);
}

void SetRobotPose_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<armpi_fpv_kinematics::srv::SetRobotPose_Event *>(message_memory);
  typed_message->~SetRobotPose_Event();
}

size_t size_function__SetRobotPose_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const armpi_fpv_kinematics::srv::SetRobotPose_Request *>(
    get_const_function__SetRobotPose_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<armpi_fpv_kinematics::srv::SetRobotPose_Request *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<armpi_fpv_kinematics::srv::SetRobotPose_Request *>(
    get_function__SetRobotPose_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const armpi_fpv_kinematics::srv::SetRobotPose_Request *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetRobotPose_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetRobotPose_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__SetRobotPose_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetRobotPose_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const armpi_fpv_kinematics::srv::SetRobotPose_Response *>(
    get_const_function__SetRobotPose_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<armpi_fpv_kinematics::srv::SetRobotPose_Response *>(untyped_value);
  value = item;
}

void assign_function__SetRobotPose_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<armpi_fpv_kinematics::srv::SetRobotPose_Response *>(
    get_function__SetRobotPose_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const armpi_fpv_kinematics::srv::SetRobotPose_Response *>(untyped_value);
  item = value;
}

void resize_function__SetRobotPose_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<armpi_fpv_kinematics::srv::SetRobotPose_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetRobotPose_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Event__request,  // size() function pointer
    get_const_function__SetRobotPose_Event__request,  // get_const(index) function pointer
    get_function__SetRobotPose_Event__request,  // get(index) function pointer
    fetch_function__SetRobotPose_Event__request,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Event__request,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(armpi_fpv_kinematics::srv::SetRobotPose_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetRobotPose_Event__response,  // size() function pointer
    get_const_function__SetRobotPose_Event__response,  // get_const(index) function pointer
    get_function__SetRobotPose_Event__response,  // get(index) function pointer
    fetch_function__SetRobotPose_Event__response,  // fetch(index, &value) function pointer
    assign_function__SetRobotPose_Event__response,  // assign(index, value) function pointer
    resize_function__SetRobotPose_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetRobotPose_Event_message_members = {
  "armpi_fpv_kinematics::srv",  // message namespace
  "SetRobotPose_Event",  // message name
  3,  // number of fields
  sizeof(armpi_fpv_kinematics::srv::SetRobotPose_Event),
  false,  // has_any_key_member_
  SetRobotPose_Event_message_member_array,  // message members
  SetRobotPose_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  SetRobotPose_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetRobotPose_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetRobotPose_Event_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Event>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Event)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetRobotPose_service_members = {
  "armpi_fpv_kinematics::srv",  // service namespace
  "SetRobotPose",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t SetRobotPose_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetRobotPose_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<armpi_fpv_kinematics::srv::SetRobotPose>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<armpi_fpv_kinematics::srv::SetRobotPose>,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::armpi_fpv_kinematics::srv::rosidl_typesupport_introspection_cpp::SetRobotPose_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::armpi_fpv_kinematics::srv::SetRobotPose_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::armpi_fpv_kinematics::srv::SetRobotPose_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::armpi_fpv_kinematics::srv::SetRobotPose_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose>();
}

#ifdef __cplusplus
}
#endif
