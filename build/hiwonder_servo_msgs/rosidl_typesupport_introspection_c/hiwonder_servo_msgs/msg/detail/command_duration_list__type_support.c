// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__rosidl_typesupport_introspection_c.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__functions.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__struct.h"


// Include directives for member types
// Member `ids`
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__msg__CommandDurationList__init(message_memory);
}

void hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__msg__CommandDurationList__fini(message_memory);
}

size_t hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__size_function__CommandDurationList__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_const_function__CommandDurationList__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_function__CommandDurationList__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__fetch_function__CommandDurationList__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_const_function__CommandDurationList__ids(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__assign_function__CommandDurationList__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_function__CommandDurationList__ids(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__resize_function__CommandDurationList__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__size_function__CommandDurationList__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_const_function__CommandDurationList__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_function__CommandDurationList__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__fetch_function__CommandDurationList__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_const_function__CommandDurationList__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__assign_function__CommandDurationList__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_function__CommandDurationList__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__resize_function__CommandDurationList__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_member_array[3] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__CommandDurationList, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__CommandDurationList, ids),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__size_function__CommandDurationList__ids,  // size() function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_const_function__CommandDurationList__ids,  // get_const(index) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_function__CommandDurationList__ids,  // get(index) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__fetch_function__CommandDurationList__ids,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__assign_function__CommandDurationList__ids,  // assign(index, value) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__resize_function__CommandDurationList__ids  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__CommandDurationList, positions),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__size_function__CommandDurationList__positions,  // size() function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_const_function__CommandDurationList__positions,  // get_const(index) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__get_function__CommandDurationList__positions,  // get(index) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__fetch_function__CommandDurationList__positions,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__assign_function__CommandDurationList__positions,  // assign(index, value) function pointer
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__resize_function__CommandDurationList__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_members = {
  "hiwonder_servo_msgs__msg",  // message namespace
  "CommandDurationList",  // message name
  3,  // number of fields
  sizeof(hiwonder_servo_msgs__msg__CommandDurationList),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_member_array,  // message members
  hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_hash,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, CommandDurationList)() {
  if (!hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__msg__CommandDurationList__rosidl_typesupport_introspection_c__CommandDurationList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
