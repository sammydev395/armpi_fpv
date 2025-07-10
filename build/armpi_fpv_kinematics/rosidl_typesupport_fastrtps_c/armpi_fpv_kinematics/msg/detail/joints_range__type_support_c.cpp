// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/msg/detail/joints_range__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__struct.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"
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

#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"  // joint1, joint2, joint3, joint4, joint5

// forward declare type support functions

bool cdr_serialize_armpi_fpv_kinematics__msg__JointRange(
  const armpi_fpv_kinematics__msg__JointRange * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_armpi_fpv_kinematics__msg__JointRange(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__msg__JointRange * ros_message);

size_t get_serialized_size_armpi_fpv_kinematics__msg__JointRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_armpi_fpv_kinematics__msg__JointRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_armpi_fpv_kinematics__msg__JointRange(
  const armpi_fpv_kinematics__msg__JointRange * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, msg, JointRange)();


using _JointsRange__ros_msg_type = armpi_fpv_kinematics__msg__JointsRange;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__msg__JointsRange(
  const armpi_fpv_kinematics__msg__JointsRange * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint1
  {
    cdr_serialize_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint1, cdr);
  }

  // Field name: joint2
  {
    cdr_serialize_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint2, cdr);
  }

  // Field name: joint3
  {
    cdr_serialize_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint3, cdr);
  }

  // Field name: joint4
  {
    cdr_serialize_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint4, cdr);
  }

  // Field name: joint5
  {
    cdr_serialize_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint5, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__msg__JointsRange(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__msg__JointsRange * ros_message)
{
  // Field name: joint1
  {
    cdr_deserialize_armpi_fpv_kinematics__msg__JointRange(cdr, &ros_message->joint1);
  }

  // Field name: joint2
  {
    cdr_deserialize_armpi_fpv_kinematics__msg__JointRange(cdr, &ros_message->joint2);
  }

  // Field name: joint3
  {
    cdr_deserialize_armpi_fpv_kinematics__msg__JointRange(cdr, &ros_message->joint3);
  }

  // Field name: joint4
  {
    cdr_deserialize_armpi_fpv_kinematics__msg__JointRange(cdr, &ros_message->joint4);
  }

  // Field name: joint5
  {
    cdr_deserialize_armpi_fpv_kinematics__msg__JointRange(cdr, &ros_message->joint5);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__msg__JointsRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointsRange__ros_msg_type * ros_message = static_cast<const _JointsRange__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint1
  current_alignment += get_serialized_size_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint1), current_alignment);

  // Field name: joint2
  current_alignment += get_serialized_size_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint2), current_alignment);

  // Field name: joint3
  current_alignment += get_serialized_size_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint3), current_alignment);

  // Field name: joint4
  current_alignment += get_serialized_size_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint4), current_alignment);

  // Field name: joint5
  current_alignment += get_serialized_size_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint5), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__msg__JointsRange(
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

  // Field name: joint1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint5
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__msg__JointRange(
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
    using DataType = armpi_fpv_kinematics__msg__JointsRange;
    is_plain =
      (
      offsetof(DataType, joint5) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__msg__JointsRange(
  const armpi_fpv_kinematics__msg__JointsRange * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: joint1
  {
    cdr_serialize_key_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint1, cdr);
  }

  // Field name: joint2
  {
    cdr_serialize_key_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint2, cdr);
  }

  // Field name: joint3
  {
    cdr_serialize_key_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint3, cdr);
  }

  // Field name: joint4
  {
    cdr_serialize_key_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint4, cdr);
  }

  // Field name: joint5
  {
    cdr_serialize_key_armpi_fpv_kinematics__msg__JointRange(
      &ros_message->joint5, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__msg__JointsRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointsRange__ros_msg_type * ros_message = static_cast<const _JointsRange__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: joint1
  current_alignment += get_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint1), current_alignment);

  // Field name: joint2
  current_alignment += get_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint2), current_alignment);

  // Field name: joint3
  current_alignment += get_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint3), current_alignment);

  // Field name: joint4
  current_alignment += get_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint4), current_alignment);

  // Field name: joint5
  current_alignment += get_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
    &(ros_message->joint5), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__msg__JointsRange(
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
  // Field name: joint1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint5
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__msg__JointRange(
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
    using DataType = armpi_fpv_kinematics__msg__JointsRange;
    is_plain =
      (
      offsetof(DataType, joint5) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _JointsRange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const armpi_fpv_kinematics__msg__JointsRange * ros_message = static_cast<const armpi_fpv_kinematics__msg__JointsRange *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_armpi_fpv_kinematics__msg__JointsRange(ros_message, cdr);
}

static bool _JointsRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  armpi_fpv_kinematics__msg__JointsRange * ros_message = static_cast<armpi_fpv_kinematics__msg__JointsRange *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_armpi_fpv_kinematics__msg__JointsRange(cdr, ros_message);
}

static uint32_t _JointsRange__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_armpi_fpv_kinematics__msg__JointsRange(
      untyped_ros_message, 0));
}

static size_t _JointsRange__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_armpi_fpv_kinematics__msg__JointsRange(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointsRange = {
  "armpi_fpv_kinematics::msg",
  "JointsRange",
  _JointsRange__cdr_serialize,
  _JointsRange__cdr_deserialize,
  _JointsRange__get_serialized_size,
  _JointsRange__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JointsRange__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointsRange,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_hash,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_description,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, msg, JointsRange)() {
  return &_JointsRange__type_support;
}

#if defined(__cplusplus)
}
#endif
