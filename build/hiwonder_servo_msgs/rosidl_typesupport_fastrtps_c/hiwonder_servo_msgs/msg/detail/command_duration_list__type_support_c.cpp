// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__struct.h"
#include "hiwonder_servo_msgs/msg/detail/command_duration_list__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ids, positions
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ids, positions

// forward declare type support functions


using _CommandDurationList__ros_msg_type = hiwonder_servo_msgs__msg__CommandDurationList;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_serialize_hiwonder_servo_msgs__msg__CommandDurationList(
  const hiwonder_servo_msgs__msg__CommandDurationList * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: ids
  {
    size_t size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: positions
  {
    size_t size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_deserialize_hiwonder_servo_msgs__msg__CommandDurationList(
  eprosima::fastcdr::Cdr & cdr,
  hiwonder_servo_msgs__msg__CommandDurationList * ros_message)
{
  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ids.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->ids);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->ids, size)) {
      fprintf(stderr, "failed to create array for field 'ids'");
      return false;
    }
    auto array_ptr = ros_message->ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->positions.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->positions);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->positions, size)) {
      fprintf(stderr, "failed to create array for field 'positions'");
      return false;
    }
    auto array_ptr = ros_message->positions.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t get_serialized_size_hiwonder_servo_msgs__msg__CommandDurationList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CommandDurationList__ros_msg_type * ros_message = static_cast<const _CommandDurationList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ids
  {
    size_t array_size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: positions
  {
    size_t array_size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t max_serialized_size_hiwonder_servo_msgs__msg__CommandDurationList(
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

  // Field name: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hiwonder_servo_msgs__msg__CommandDurationList;
    is_plain =
      (
      offsetof(DataType, positions) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
bool cdr_serialize_key_hiwonder_servo_msgs__msg__CommandDurationList(
  const hiwonder_servo_msgs__msg__CommandDurationList * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: ids
  {
    size_t size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: positions
  {
    size_t size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t get_serialized_size_key_hiwonder_servo_msgs__msg__CommandDurationList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CommandDurationList__ros_msg_type * ros_message = static_cast<const _CommandDurationList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ids
  {
    size_t array_size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: positions
  {
    size_t array_size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hiwonder_servo_msgs
size_t max_serialized_size_key_hiwonder_servo_msgs__msg__CommandDurationList(
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
  // Field name: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hiwonder_servo_msgs__msg__CommandDurationList;
    is_plain =
      (
      offsetof(DataType, positions) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CommandDurationList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const hiwonder_servo_msgs__msg__CommandDurationList * ros_message = static_cast<const hiwonder_servo_msgs__msg__CommandDurationList *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_hiwonder_servo_msgs__msg__CommandDurationList(ros_message, cdr);
}

static bool _CommandDurationList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  hiwonder_servo_msgs__msg__CommandDurationList * ros_message = static_cast<hiwonder_servo_msgs__msg__CommandDurationList *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_hiwonder_servo_msgs__msg__CommandDurationList(cdr, ros_message);
}

static uint32_t _CommandDurationList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hiwonder_servo_msgs__msg__CommandDurationList(
      untyped_ros_message, 0));
}

static size_t _CommandDurationList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hiwonder_servo_msgs__msg__CommandDurationList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CommandDurationList = {
  "hiwonder_servo_msgs::msg",
  "CommandDurationList",
  _CommandDurationList__cdr_serialize,
  _CommandDurationList__cdr_deserialize,
  _CommandDurationList__get_serialized_size,
  _CommandDurationList__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CommandDurationList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CommandDurationList,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_hash,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description,
  &hiwonder_servo_msgs__msg__CommandDurationList__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hiwonder_servo_msgs, msg, CommandDurationList)() {
  return &_CommandDurationList__type_support;
}

#if defined(__cplusplus)
}
#endif
