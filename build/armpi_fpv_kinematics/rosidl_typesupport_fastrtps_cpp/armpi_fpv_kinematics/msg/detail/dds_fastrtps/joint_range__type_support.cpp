// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/msg/detail/joint_range__rosidl_typesupport_fastrtps_cpp.hpp"
#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"
#include "armpi_fpv_kinematics/msg/detail/joint_range__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace armpi_fpv_kinematics
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize(
  const armpi_fpv_kinematics::msg::JointRange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min
  cdr << ros_message.min;

  // Member: max
  cdr << ros_message.max;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics::msg::JointRange & ros_message)
{
  // Member: min
  cdr >> ros_message.min;

  // Member: max
  cdr >> ros_message.max;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size(
  const armpi_fpv_kinematics::msg::JointRange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max
  {
    size_t item_size = sizeof(ros_message.max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_JointRange(
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

  // Member: min
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: max
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
    using DataType = armpi_fpv_kinematics::msg::JointRange;
    is_plain =
      (
      offsetof(DataType, max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize_key(
  const armpi_fpv_kinematics::msg::JointRange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min
  cdr << ros_message.min;

  // Member: max
  cdr << ros_message.max;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size_key(
  const armpi_fpv_kinematics::msg::JointRange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max
  {
    size_t item_size = sizeof(ros_message.max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_key_JointRange(
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

  // Member: min
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max
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
    using DataType = armpi_fpv_kinematics::msg::JointRange;
    is_plain =
      (
      offsetof(DataType, max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _JointRange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const armpi_fpv_kinematics::msg::JointRange *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<armpi_fpv_kinematics::msg::JointRange *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointRange__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const armpi_fpv_kinematics::msg::JointRange *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointRange__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointRange(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointRange__callbacks = {
  "armpi_fpv_kinematics::msg",
  "JointRange",
  _JointRange__cdr_serialize,
  _JointRange__cdr_deserialize,
  _JointRange__get_serialized_size,
  _JointRange__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JointRange__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointRange__callbacks,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__msg__JointRange__get_type_hash,
  &armpi_fpv_kinematics__msg__JointRange__get_type_description,
  &armpi_fpv_kinematics__msg__JointRange__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::msg::JointRange>()
{
  return &armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::_JointRange__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, msg, JointRange)() {
  return &armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::_JointRange__handle;
}

#ifdef __cplusplus
}
#endif
