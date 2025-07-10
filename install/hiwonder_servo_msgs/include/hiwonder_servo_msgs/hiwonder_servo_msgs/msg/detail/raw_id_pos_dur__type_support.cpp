// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/RawIdPosDur.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__functions.h"
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hiwonder_servo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RawIdPosDur_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hiwonder_servo_msgs::msg::RawIdPosDur(_init);
}

void RawIdPosDur_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hiwonder_servo_msgs::msg::RawIdPosDur *>(message_memory);
  typed_message->~RawIdPosDur();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RawIdPosDur_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::RawIdPosDur, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::RawIdPosDur, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::RawIdPosDur, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RawIdPosDur_message_members = {
  "hiwonder_servo_msgs::msg",  // message namespace
  "RawIdPosDur",  // message name
  3,  // number of fields
  sizeof(hiwonder_servo_msgs::msg::RawIdPosDur),
  false,  // has_any_key_member_
  RawIdPosDur_message_member_array,  // message members
  RawIdPosDur_init_function,  // function to initialize message memory (memory has to be allocated)
  RawIdPosDur_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RawIdPosDur_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RawIdPosDur_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__RawIdPosDur__get_type_hash,
  &hiwonder_servo_msgs__msg__RawIdPosDur__get_type_description,
  &hiwonder_servo_msgs__msg__RawIdPosDur__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hiwonder_servo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwonder_servo_msgs::msg::RawIdPosDur>()
{
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::RawIdPosDur_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hiwonder_servo_msgs, msg, RawIdPosDur)() {
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::RawIdPosDur_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
