// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/msg/detail/link__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "armpi_fpv_kinematics/msg/detail/link__struct.h"
#include "armpi_fpv_kinematics/msg/detail/link__functions.h"
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


// forward declare type support functions


using _Link__ros_msg_type = armpi_fpv_kinematics__msg__Link;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__msg__Link(
  const armpi_fpv_kinematics__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: base_link
  {
    cdr << ros_message->base_link;
  }

  // Field name: link1
  {
    cdr << ros_message->link1;
  }

  // Field name: link2
  {
    cdr << ros_message->link2;
  }

  // Field name: link3
  {
    cdr << ros_message->link3;
  }

  // Field name: end_effector_link
  {
    cdr << ros_message->end_effector_link;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__msg__Link(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__msg__Link * ros_message)
{
  // Field name: base_link
  {
    cdr >> ros_message->base_link;
  }

  // Field name: link1
  {
    cdr >> ros_message->link1;
  }

  // Field name: link2
  {
    cdr >> ros_message->link2;
  }

  // Field name: link3
  {
    cdr >> ros_message->link3;
  }

  // Field name: end_effector_link
  {
    cdr >> ros_message->end_effector_link;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Link__ros_msg_type * ros_message = static_cast<const _Link__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: base_link
  {
    size_t item_size = sizeof(ros_message->base_link);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link1
  {
    size_t item_size = sizeof(ros_message->link1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link2
  {
    size_t item_size = sizeof(ros_message->link2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link3
  {
    size_t item_size = sizeof(ros_message->link3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: end_effector_link
  {
    size_t item_size = sizeof(ros_message->end_effector_link);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__msg__Link(
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

  // Field name: base_link
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: end_effector_link
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = armpi_fpv_kinematics__msg__Link;
    is_plain =
      (
      offsetof(DataType, end_effector_link) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__msg__Link(
  const armpi_fpv_kinematics__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: base_link
  {
    cdr << ros_message->base_link;
  }

  // Field name: link1
  {
    cdr << ros_message->link1;
  }

  // Field name: link2
  {
    cdr << ros_message->link2;
  }

  // Field name: link3
  {
    cdr << ros_message->link3;
  }

  // Field name: end_effector_link
  {
    cdr << ros_message->end_effector_link;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Link__ros_msg_type * ros_message = static_cast<const _Link__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: base_link
  {
    size_t item_size = sizeof(ros_message->base_link);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link1
  {
    size_t item_size = sizeof(ros_message->link1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link2
  {
    size_t item_size = sizeof(ros_message->link2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link3
  {
    size_t item_size = sizeof(ros_message->link3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: end_effector_link
  {
    size_t item_size = sizeof(ros_message->end_effector_link);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__msg__Link(
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
  // Field name: base_link
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: link3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: end_effector_link
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = armpi_fpv_kinematics__msg__Link;
    is_plain =
      (
      offsetof(DataType, end_effector_link) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Link__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const armpi_fpv_kinematics__msg__Link * ros_message = static_cast<const armpi_fpv_kinematics__msg__Link *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_armpi_fpv_kinematics__msg__Link(ros_message, cdr);
}

static bool _Link__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  armpi_fpv_kinematics__msg__Link * ros_message = static_cast<armpi_fpv_kinematics__msg__Link *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_armpi_fpv_kinematics__msg__Link(cdr, ros_message);
}

static uint32_t _Link__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_armpi_fpv_kinematics__msg__Link(
      untyped_ros_message, 0));
}

static size_t _Link__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_armpi_fpv_kinematics__msg__Link(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Link = {
  "armpi_fpv_kinematics::msg",
  "Link",
  _Link__cdr_serialize,
  _Link__cdr_deserialize,
  _Link__get_serialized_size,
  _Link__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Link__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Link,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__msg__Link__get_type_hash,
  &armpi_fpv_kinematics__msg__Link__get_type_description,
  &armpi_fpv_kinematics__msg__Link__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, msg, Link)() {
  return &_Link__type_support;
}

#if defined(__cplusplus)
}
#endif
