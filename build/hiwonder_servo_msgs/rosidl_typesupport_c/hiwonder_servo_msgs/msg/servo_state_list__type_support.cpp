// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__struct.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__type_support.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hiwonder_servo_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ServoStateList_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoStateList_type_support_ids_t;

static const _ServoStateList_type_support_ids_t _ServoStateList_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoStateList_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoStateList_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoStateList_type_support_symbol_names_t _ServoStateList_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hiwonder_servo_msgs, msg, ServoStateList)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, ServoStateList)),
  }
};

typedef struct _ServoStateList_type_support_data_t
{
  void * data[2];
} _ServoStateList_type_support_data_t;

static _ServoStateList_type_support_data_t _ServoStateList_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoStateList_message_typesupport_map = {
  2,
  "hiwonder_servo_msgs",
  &_ServoStateList_message_typesupport_ids.typesupport_identifier[0],
  &_ServoStateList_message_typesupport_symbol_names.symbol_name[0],
  &_ServoStateList_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoStateList_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoStateList_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_hash,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_description,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hiwonder_servo_msgs, msg, ServoStateList)() {
  return &::hiwonder_servo_msgs::msg::rosidl_typesupport_c::ServoStateList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
