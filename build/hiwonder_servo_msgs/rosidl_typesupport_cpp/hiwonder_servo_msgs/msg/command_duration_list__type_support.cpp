// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__functions.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hiwonder_servo_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _CommandDurationList_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CommandDurationList_type_support_ids_t;

static const _CommandDurationList_type_support_ids_t _CommandDurationList_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CommandDurationList_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CommandDurationList_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CommandDurationList_type_support_symbol_names_t _CommandDurationList_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hiwonder_servo_msgs, msg, CommandDurationList)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hiwonder_servo_msgs, msg, CommandDurationList)),
  }
};

typedef struct _CommandDurationList_type_support_data_t
{
  void * data[2];
} _CommandDurationList_type_support_data_t;

static _CommandDurationList_type_support_data_t _CommandDurationList_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CommandDurationList_message_typesupport_map = {
  2,
  "hiwonder_servo_msgs",
  &_CommandDurationList_message_typesupport_ids.typesupport_identifier[0],
  &_CommandDurationList_message_typesupport_symbol_names.symbol_name[0],
  &_CommandDurationList_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CommandDurationList_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CommandDurationList_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_hash,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace hiwonder_servo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwonder_servo_msgs::msg::CommandDurationList>()
{
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_cpp::CommandDurationList_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hiwonder_servo_msgs, msg, CommandDurationList)() {
  return get_message_type_support_handle<hiwonder_servo_msgs::msg::CommandDurationList>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
