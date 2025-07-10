// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwonder_servo_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwonder_servo_msgs/msg/detail/servo_state__rosidl_typesupport_introspection_c.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state__functions.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__msg__ServoState__init(message_memory);
}

void hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__msg__ServoState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoState, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoState, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoState, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoState, voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_members = {
  "hiwonder_servo_msgs__msg",  // message namespace
  "ServoState",  // message name
  6,  // number of fields
  sizeof(hiwonder_servo_msgs__msg__ServoState),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_member_array,  // message members
  hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__ServoState__get_type_hash,
  &hiwonder_servo_msgs__msg__ServoState__get_type_description,
  &hiwonder_servo_msgs__msg__ServoState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, ServoState)() {
  if (!hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
