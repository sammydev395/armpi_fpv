// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__struct.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__functions.h"  // id_pos_dur_list

// forward declare type support functions

bool cdr_serialize_hiwonder_servo_msgs__msg__RawIdPosDur(
  const hiwonder_servo_msgs__msg__RawIdPosDur * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_hiwonder_servo_msgs__msg__RawIdPosDur(
  eprosima::fastcdr::Cdr & cdr,
  hiwonder_servo_msgs__msg__RawIdPosDur * ros_message);

size_t get_serialized_size_hiwonder_servo_msgs__msg__RawIdPosDur(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hiwonder_servo_msgs__msg__RawIdPosDur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_hiwonder_servo_msgs__msg__RawIdPosDur(
  const hiwonder_servo_msgs__msg__RawIdPosDur * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_hiwonder_servo_msgs__msg__RawIdPosDur(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_hiwonder_servo_msgs__msg__RawIdPosDur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hiwonder_servo_msgs, msg, RawIdPosDur)();


using _MultiRawIdPosDur__ros_msg_type = hiwonder_servo_msgs__msg__MultiRawIdPosDur;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_serialize_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  const hiwonder_servo_msgs__msg__MultiRawIdPosDur * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id_pos_dur_list
  {
    size_t size = ros_message->id_pos_dur_list.size;
    auto array_ptr = ros_message->id_pos_dur_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_hiwonder_servo_msgs__msg__RawIdPosDur(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_deserialize_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  eprosima::fastcdr::Cdr & cdr,
  hiwonder_servo_msgs__msg__MultiRawIdPosDur * ros_message)
{
  // Field name: id_pos_dur_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->id_pos_dur_list.data) {
      hiwonder_servo_msgs__msg__RawIdPosDur__Sequence__fini(&ros_message->id_pos_dur_list);
    }
    if (!hiwonder_servo_msgs__msg__RawIdPosDur__Sequence__init(&ros_message->id_pos_dur_list, size)) {
      fprintf(stderr, "failed to create array for field 'id_pos_dur_list'");
      return false;
    }
    auto array_ptr = ros_message->id_pos_dur_list.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_hiwonder_servo_msgs__msg__RawIdPosDur(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t get_serialized_size_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRawIdPosDur__ros_msg_type * ros_message = static_cast<const _MultiRawIdPosDur__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id_pos_dur_list
  {
    size_t array_size = ros_message->id_pos_dur_list.size;
    auto array_ptr = ros_message->id_pos_dur_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_hiwonder_servo_msgs__msg__RawIdPosDur(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t max_serialized_size_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: id_pos_dur_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hiwonder_servo_msgs__msg__RawIdPosDur(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hiwonder_servo_msgs__msg__MultiRawIdPosDur;
    is_plain =
      (
      offsetof(DataType, id_pos_dur_list) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_serialize_key_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  const hiwonder_servo_msgs__msg__MultiRawIdPosDur * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id_pos_dur_list
  {
    size_t size = ros_message->id_pos_dur_list.size;
    auto array_ptr = ros_message->id_pos_dur_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_hiwonder_servo_msgs__msg__RawIdPosDur(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t get_serialized_size_key_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiRawIdPosDur__ros_msg_type * ros_message = static_cast<const _MultiRawIdPosDur__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id_pos_dur_list
  {
    size_t array_size = ros_message->id_pos_dur_list.size;
    auto array_ptr = ros_message->id_pos_dur_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_hiwonder_servo_msgs__msg__RawIdPosDur(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t max_serialized_size_key_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: id_pos_dur_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_hiwonder_servo_msgs__msg__RawIdPosDur(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hiwonder_servo_msgs__msg__MultiRawIdPosDur;
    is_plain =
      (
      offsetof(DataType, id_pos_dur_list) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MultiRawIdPosDur__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const hiwonder_servo_msgs__msg__MultiRawIdPosDur * ros_message = static_cast<const hiwonder_servo_msgs__msg__MultiRawIdPosDur *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_hiwonder_servo_msgs__msg__MultiRawIdPosDur(ros_message, cdr);
}

static bool _MultiRawIdPosDur__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  hiwonder_servo_msgs__msg__MultiRawIdPosDur * ros_message = static_cast<hiwonder_servo_msgs__msg__MultiRawIdPosDur *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_hiwonder_servo_msgs__msg__MultiRawIdPosDur(cdr, ros_message);
}

static uint32_t _MultiRawIdPosDur__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
      untyped_ros_message, 0));
}

static size_t _MultiRawIdPosDur__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hiwonder_servo_msgs__msg__MultiRawIdPosDur(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiRawIdPosDur = {
  "hiwonder_servo_msgs::msg",
  "MultiRawIdPosDur",
  _MultiRawIdPosDur__cdr_serialize,
  _MultiRawIdPosDur__cdr_deserialize,
  _MultiRawIdPosDur__get_serialized_size,
  _MultiRawIdPosDur__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MultiRawIdPosDur__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiRawIdPosDur,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_hash,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hiwonder_servo_msgs, msg, MultiRawIdPosDur)() {
  return &_MultiRawIdPosDur__type_support;
}

#if defined(__cplusplus)
}
#endif
