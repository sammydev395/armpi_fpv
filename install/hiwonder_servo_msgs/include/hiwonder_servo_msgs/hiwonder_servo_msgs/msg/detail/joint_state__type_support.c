// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwonder_servo_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwonder_servo_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwonder_servo_msgs/msg/detail/joint_state__functions.h"
#include "hiwonder_servo_msgs/msg/detail/joint_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `servo_ids`
// Member `servo_temps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__msg__JointState__init(message_memory);
}

void hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__msg__JointState__fini(message_memory);
}

size_t hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__servo_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__servo_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__servo_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__servo_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__servo_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__servo_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__servo_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__servo_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__servo_temps(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__servo_temps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__servo_temps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__servo_temps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__servo_temps(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__servo_temps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__servo_temps(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__servo_temps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, servo_ids),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__servo_ids,  // size() function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__servo_ids,  // get_const(index) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__servo_ids,  // get(index) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__servo_ids,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__servo_ids,  // assign(index, value) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__servo_ids  // resize(index) function pointer
  },
  {
    "servo_temps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, servo_temps),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__servo_temps,  // size() function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__servo_temps,  // get_const(index) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__servo_temps,  // get(index) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__servo_temps,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__servo_temps,  // assign(index, value) function pointer
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__servo_temps  // resize(index) function pointer
  },
  {
    "goal_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, goal_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, current_pos),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__JointState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_members = {
  "hiwonder_servo_msgs__msg",  // message namespace
  "JointState",  // message name
  8,  // number of fields
  sizeof(hiwonder_servo_msgs__msg__JointState),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_member_array,  // message members
  hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__JointState__get_type_hash,
  &hiwonder_servo_msgs__msg__JointState__get_type_description,
  &hiwonder_servo_msgs__msg__JointState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, JointState)() {
  hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
