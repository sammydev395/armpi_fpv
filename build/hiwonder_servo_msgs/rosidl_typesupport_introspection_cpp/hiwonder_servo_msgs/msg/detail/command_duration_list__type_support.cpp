// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__functions.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__struct.hpp"
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

void CommandDurationList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hiwonder_servo_msgs::msg::CommandDurationList(_init);
}

void CommandDurationList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hiwonder_servo_msgs::msg::CommandDurationList *>(message_memory);
  typed_message->~CommandDurationList();
}

size_t size_function__CommandDurationList__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CommandDurationList__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CommandDurationList__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CommandDurationList__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__CommandDurationList__ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__CommandDurationList__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__CommandDurationList__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__CommandDurationList__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CommandDurationList__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CommandDurationList__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CommandDurationList__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__CommandDurationList__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CommandDurationList__positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CommandDurationList__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CommandDurationList__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__CommandDurationList__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CommandDurationList_message_member_array[3] = {
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::CommandDurationList, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::CommandDurationList, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__CommandDurationList__ids,  // size() function pointer
    get_const_function__CommandDurationList__ids,  // get_const(index) function pointer
    get_function__CommandDurationList__ids,  // get(index) function pointer
    fetch_function__CommandDurationList__ids,  // fetch(index, &value) function pointer
    assign_function__CommandDurationList__ids,  // assign(index, value) function pointer
    resize_function__CommandDurationList__ids  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::CommandDurationList, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__CommandDurationList__positions,  // size() function pointer
    get_const_function__CommandDurationList__positions,  // get_const(index) function pointer
    get_function__CommandDurationList__positions,  // get(index) function pointer
    fetch_function__CommandDurationList__positions,  // fetch(index, &value) function pointer
    assign_function__CommandDurationList__positions,  // assign(index, value) function pointer
    resize_function__CommandDurationList__positions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CommandDurationList_message_members = {
  "hiwonder_servo_msgs::msg",  // message namespace
  "CommandDurationList",  // message name
  3,  // number of fields
  sizeof(hiwonder_servo_msgs::msg::CommandDurationList),
  false,  // has_any_key_member_
  CommandDurationList_message_member_array,  // message members
  CommandDurationList_init_function,  // function to initialize message memory (memory has to be allocated)
  CommandDurationList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CommandDurationList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CommandDurationList_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_hash,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hiwonder_servo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwonder_servo_msgs::msg::CommandDurationList>()
{
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::CommandDurationList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hiwonder_servo_msgs, msg, CommandDurationList)() {
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::CommandDurationList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
