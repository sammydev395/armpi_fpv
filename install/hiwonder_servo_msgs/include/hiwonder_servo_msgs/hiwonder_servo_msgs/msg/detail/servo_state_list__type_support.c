// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__rosidl_typesupport_introspection_c.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__functions.h"
#include "hiwonder_servo_msgs/msg/detail/servo_state_list__struct.h"


// Include directives for member types
// Member `servo_states`
#include "hiwonder_servo_msgs/msg/servo_state.h"
// Member `servo_states`
#include "hiwonder_servo_msgs/msg/detail/servo_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__msg__ServoStateList__init(message_memory);
}

void hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__msg__ServoStateList__fini(message_memory);
}

size_t hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__size_function__ServoStateList__servo_states(
  const void * untyped_member)
{
  const hiwonder_servo_msgs__msg__ServoState__Sequence * member =
    (const hiwonder_servo_msgs__msg__ServoState__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__get_const_function__ServoStateList__servo_states(
  const void * untyped_member, size_t index)
{
  const hiwonder_servo_msgs__msg__ServoState__Sequence * member =
    (const hiwonder_servo_msgs__msg__ServoState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__get_function__ServoStateList__servo_states(
  void * untyped_member, size_t index)
{
  hiwonder_servo_msgs__msg__ServoState__Sequence * member =
    (hiwonder_servo_msgs__msg__ServoState__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__fetch_function__ServoStateList__servo_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hiwonder_servo_msgs__msg__ServoState * item =
    ((const hiwonder_servo_msgs__msg__ServoState *)
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__get_const_function__ServoStateList__servo_states(untyped_member, index));
  hiwonder_servo_msgs__msg__ServoState * value =
    (hiwonder_servo_msgs__msg__ServoState *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__assign_function__ServoStateList__servo_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hiwonder_servo_msgs__msg__ServoState * item =
    ((hiwonder_servo_msgs__msg__ServoState *)
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__get_function__ServoStateList__servo_states(untyped_member, index));
  const hiwonder_servo_msgs__msg__ServoState * value =
    (const hiwonder_servo_msgs__msg__ServoState *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__resize_function__ServoStateList__servo_states(
  void * untyped_member, size_t size)
{
  hiwonder_servo_msgs__msg__ServoState__Sequence * member =
    (hiwonder_servo_msgs__msg__ServoState__Sequence *)(untyped_member);
  hiwonder_servo_msgs__msg__ServoState__Sequence__fini(member);
  return hiwonder_servo_msgs__msg__ServoState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_member_array[1] = {
  {
    "servo_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__ServoStateList, servo_states),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__size_function__ServoStateList__servo_states,  // size() function pointer
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__get_const_function__ServoStateList__servo_states,  // get_const(index) function pointer
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__get_function__ServoStateList__servo_states,  // get(index) function pointer
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__fetch_function__ServoStateList__servo_states,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__assign_function__ServoStateList__servo_states,  // assign(index, value) function pointer
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__resize_function__ServoStateList__servo_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_members = {
  "hiwonder_servo_msgs__msg",  // message namespace
  "ServoStateList",  // message name
  1,  // number of fields
  sizeof(hiwonder_servo_msgs__msg__ServoStateList),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_member_array,  // message members
  hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_hash,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_description,
  &hiwonder_servo_msgs__msg__ServoStateList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, ServoStateList)() {
  hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, ServoState)();
  if (!hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__msg__ServoStateList__rosidl_typesupport_introspection_c__ServoStateList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
