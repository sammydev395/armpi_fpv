// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__rosidl_typesupport_introspection_c.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__functions.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__struct.h"


// Include directives for member types
// Member `id_pos_dur_list`
#include "hiwonder_servo_msgs/msg/raw_id_pos_dur.h"
// Member `id_pos_dur_list`
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__msg__MultiRawIdPosDur__init(message_memory);
}

void hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__msg__MultiRawIdPosDur__fini(message_memory);
}

size_t hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__size_function__MultiRawIdPosDur__id_pos_dur_list(
  const void * untyped_member)
{
  const hiwonder_servo_msgs__msg__RawIdPosDur__Sequence * member =
    (const hiwonder_servo_msgs__msg__RawIdPosDur__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__get_const_function__MultiRawIdPosDur__id_pos_dur_list(
  const void * untyped_member, size_t index)
{
  const hiwonder_servo_msgs__msg__RawIdPosDur__Sequence * member =
    (const hiwonder_servo_msgs__msg__RawIdPosDur__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__get_function__MultiRawIdPosDur__id_pos_dur_list(
  void * untyped_member, size_t index)
{
  hiwonder_servo_msgs__msg__RawIdPosDur__Sequence * member =
    (hiwonder_servo_msgs__msg__RawIdPosDur__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__fetch_function__MultiRawIdPosDur__id_pos_dur_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hiwonder_servo_msgs__msg__RawIdPosDur * item =
    ((const hiwonder_servo_msgs__msg__RawIdPosDur *)
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__get_const_function__MultiRawIdPosDur__id_pos_dur_list(untyped_member, index));
  hiwonder_servo_msgs__msg__RawIdPosDur * value =
    (hiwonder_servo_msgs__msg__RawIdPosDur *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__assign_function__MultiRawIdPosDur__id_pos_dur_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hiwonder_servo_msgs__msg__RawIdPosDur * item =
    ((hiwonder_servo_msgs__msg__RawIdPosDur *)
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__get_function__MultiRawIdPosDur__id_pos_dur_list(untyped_member, index));
  const hiwonder_servo_msgs__msg__RawIdPosDur * value =
    (const hiwonder_servo_msgs__msg__RawIdPosDur *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__resize_function__MultiRawIdPosDur__id_pos_dur_list(
  void * untyped_member, size_t size)
{
  hiwonder_servo_msgs__msg__RawIdPosDur__Sequence * member =
    (hiwonder_servo_msgs__msg__RawIdPosDur__Sequence *)(untyped_member);
  hiwonder_servo_msgs__msg__RawIdPosDur__Sequence__fini(member);
  return hiwonder_servo_msgs__msg__RawIdPosDur__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_member_array[1] = {
  {
    "id_pos_dur_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__msg__MultiRawIdPosDur, id_pos_dur_list),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__size_function__MultiRawIdPosDur__id_pos_dur_list,  // size() function pointer
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__get_const_function__MultiRawIdPosDur__id_pos_dur_list,  // get_const(index) function pointer
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__get_function__MultiRawIdPosDur__id_pos_dur_list,  // get(index) function pointer
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__fetch_function__MultiRawIdPosDur__id_pos_dur_list,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__assign_function__MultiRawIdPosDur__id_pos_dur_list,  // assign(index, value) function pointer
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__resize_function__MultiRawIdPosDur__id_pos_dur_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_members = {
  "hiwonder_servo_msgs__msg",  // message namespace
  "MultiRawIdPosDur",  // message name
  1,  // number of fields
  sizeof(hiwonder_servo_msgs__msg__MultiRawIdPosDur),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_member_array,  // message members
  hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_hash,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, MultiRawIdPosDur)() {
  hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, msg, RawIdPosDur)();
  if (!hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__msg__MultiRawIdPosDur__rosidl_typesupport_introspection_c__MultiRawIdPosDur_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
