// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__functions.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__struct.hpp"
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

void MultiRawIdPosDur_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hiwonder_servo_msgs::msg::MultiRawIdPosDur(_init);
}

void MultiRawIdPosDur_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hiwonder_servo_msgs::msg::MultiRawIdPosDur *>(message_memory);
  typed_message->~MultiRawIdPosDur();
}

size_t size_function__MultiRawIdPosDur__id_pos_dur_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<hiwonder_servo_msgs::msg::RawIdPosDur> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiRawIdPosDur__id_pos_dur_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<hiwonder_servo_msgs::msg::RawIdPosDur> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiRawIdPosDur__id_pos_dur_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<hiwonder_servo_msgs::msg::RawIdPosDur> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiRawIdPosDur__id_pos_dur_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hiwonder_servo_msgs::msg::RawIdPosDur *>(
    get_const_function__MultiRawIdPosDur__id_pos_dur_list(untyped_member, index));
  auto & value = *reinterpret_cast<hiwonder_servo_msgs::msg::RawIdPosDur *>(untyped_value);
  value = item;
}

void assign_function__MultiRawIdPosDur__id_pos_dur_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hiwonder_servo_msgs::msg::RawIdPosDur *>(
    get_function__MultiRawIdPosDur__id_pos_dur_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const hiwonder_servo_msgs::msg::RawIdPosDur *>(untyped_value);
  item = value;
}

void resize_function__MultiRawIdPosDur__id_pos_dur_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<hiwonder_servo_msgs::msg::RawIdPosDur> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiRawIdPosDur_message_member_array[1] = {
  {
    "id_pos_dur_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hiwonder_servo_msgs::msg::RawIdPosDur>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs::msg::MultiRawIdPosDur, id_pos_dur_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiRawIdPosDur__id_pos_dur_list,  // size() function pointer
    get_const_function__MultiRawIdPosDur__id_pos_dur_list,  // get_const(index) function pointer
    get_function__MultiRawIdPosDur__id_pos_dur_list,  // get(index) function pointer
    fetch_function__MultiRawIdPosDur__id_pos_dur_list,  // fetch(index, &value) function pointer
    assign_function__MultiRawIdPosDur__id_pos_dur_list,  // assign(index, value) function pointer
    resize_function__MultiRawIdPosDur__id_pos_dur_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiRawIdPosDur_message_members = {
  "hiwonder_servo_msgs::msg",  // message namespace
  "MultiRawIdPosDur",  // message name
  1,  // number of fields
  sizeof(hiwonder_servo_msgs::msg::MultiRawIdPosDur),
  false,  // has_any_key_member_
  MultiRawIdPosDur_message_member_array,  // message members
  MultiRawIdPosDur_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiRawIdPosDur_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiRawIdPosDur_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiRawIdPosDur_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_hash,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hiwonder_servo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwonder_servo_msgs::msg::MultiRawIdPosDur>()
{
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::MultiRawIdPosDur_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hiwonder_servo_msgs, msg, MultiRawIdPosDur)() {
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_introspection_cpp::MultiRawIdPosDur_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
