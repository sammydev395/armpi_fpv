// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__functions.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__struct.hpp"
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

void ServoStateList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hiwonder_servo_msgs::msg::ServoStateList(_init);
}

void ServoStateList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hiwonder_servo_msgs::msg::ServoStateList *>(message_memory);
  typed_message->~ServoStateList();
}

size_t size_function__ServoStateList__servo_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<hiwonder_servo_msgs::msg::ServoState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoStateList__servo_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<hiwonder_servo_msgs::msg::ServoState> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoStateList__servo_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<hiwonder_servo_msgs::msg::ServoState> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoStateList__servo_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hiwonder_servo_msgs::msg::ServoState *>(
    get_const_function__ServoStateList__servo_states(untyped_member, index));
  auto & value = *reinterpret_cast<hiwonder_servo_msgs::msg::ServoState *>(untyped_value);
  value = item;
}

void assign_function__ServoStateList__servo_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hiwonder_servo_msgs::msg::ServoState *>(
    get_function__ServoStateList__servo_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const hiwonder_servo_msgs::msg::ServoState *>(untyped_value);
  item = value;
}

void resize_function__ServoStateList__servo_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<hiwonder_servo_msgs::msg::ServoState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoStateList_message_member_array[1] = {
  {
    "servo_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hiwonder_servo_msgs::msg::ServoState>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::ServoStateList, servo_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoStateList__servo_states,  // size() function pointer
    get_const_function__ServoStateList__servo_states,  // get_const(index) function pointer
    get_function__ServoStateList__servo_states,  // get(index) function pointer
    fetch_function__ServoStateList__servo_states,  // fetch(index, &value) function pointer
    assign_function__ServoStateList__servo_states,  // assign(index, value) function pointer
    resize_function__ServoStateList__servo_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoStateList_message_members = {
  "hiwonder_servo_msgs::msg",  // message namespace
  "ServoStateList",  // message name
  1,  // number of fields
  sizeof(hiwonder_servo_msgs::msg::ServoStateList),
  false,  // has_any_key_member_
  ServoStateList_message_member_array,  // message members
  ServoStateList_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoStateList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoStateList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoStateList_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_hash,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_description,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hiwonder_servo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwonder_servo_msgs::msg::ServoStateList>()
{
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::ServoStateList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hiwonder_servo_msgs, msg, ServoStateList)() {
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::ServoStateList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
