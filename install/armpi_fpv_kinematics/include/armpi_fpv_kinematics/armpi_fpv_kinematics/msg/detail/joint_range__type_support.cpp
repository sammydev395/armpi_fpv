// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"
#include "armpi_fpv_kinematics/msg/detail/joint_range__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace armpi_fpv_kinematics
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointRange_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) armpi_fpv_kinematics::msg::JointRange(_init);
}

void JointRange_fini_function(void * message_memory)
{
  auto typed_message = static_cast<armpi_fpv_kinematics::msg::JointRange *>(message_memory);
  typed_message->~JointRange();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointRange_message_member_array[2] = {
  {
    "min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::msg::JointRange, min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics::msg::JointRange, max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointRange_message_members = {
  "armpi_fpv_kinematics::msg",  // message namespace
  "JointRange",  // message name
  2,  // number of fields
  sizeof(armpi_fpv_kinematics::msg::JointRange),
  false,  // has_any_key_member_
  JointRange_message_member_array,  // message members
  JointRange_init_function,  // function to initialize message memory (memory has to be allocated)
  JointRange_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointRange_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointRange_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__msg__JointRange__get_type_hash,
  &armpi_fpv_kinematics__msg__JointRange__get_type_description,
  &armpi_fpv_kinematics__msg__JointRange__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace armpi_fpv_kinematics


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::msg::JointRange>()
{
  return &::armpi_fpv_kinematics::msg::rosidl_typesupport_introspection_cpp::JointRange_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, msg, JointRange)() {
  return &::armpi_fpv_kinematics::msg::rosidl_typesupport_introspection_cpp::JointRange_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
