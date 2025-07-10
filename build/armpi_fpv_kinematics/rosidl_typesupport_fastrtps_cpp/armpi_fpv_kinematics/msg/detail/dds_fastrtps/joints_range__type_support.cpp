// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/msg/detail/joints_range__rosidl_typesupport_fastrtps_cpp.hpp"
#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__struct.hpp"

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
bool cdr_serialize(
  const armpi_fpv_kinematics::msg::JointRange &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  armpi_fpv_kinematics::msg::JointRange &);
size_t get_serialized_size(
  const armpi_fpv_kinematics::msg::JointRange &,
  size_t current_alignment);
size_t
max_serialized_size_JointRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const armpi_fpv_kinematics::msg::JointRange &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const armpi_fpv_kinematics::msg::JointRange &,
  size_t current_alignment);
size_t
max_serialized_size_key_JointRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace armpi_fpv_kinematics

// functions for armpi_fpv_kinematics::msg::JointRange already declared above

// functions for armpi_fpv_kinematics::msg::JointRange already declared above

// functions for armpi_fpv_kinematics::msg::JointRange already declared above

// functions for armpi_fpv_kinematics::msg::JointRange already declared above


namespace armpi_fpv_kinematics
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint1
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint1,
    cdr);

  // Member: joint2
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint2,
    cdr);

  // Member: joint3
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint3,
    cdr);

  // Member: joint4
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint4,
    cdr);

  // Member: joint5
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint5,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics::msg::JointsRange & ros_message)
{
  // Member: joint1
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint1);

  // Member: joint2
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint2);

  // Member: joint3
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint3);

  // Member: joint4
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint4);

  // Member: joint5
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint5);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint1
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint1, current_alignment);

  // Member: joint2
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint2, current_alignment);

  // Member: joint3
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint3, current_alignment);

  // Member: joint4
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint4, current_alignment);

  // Member: joint5
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint5, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_JointsRange(
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

  // Member: joint1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: joint2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: joint3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: joint4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: joint5
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_JointRange(
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
    using DataType = armpi_fpv_kinematics::msg::JointsRange;
    is_plain =
      (
      offsetof(DataType, joint5) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
cdr_serialize_key(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint1
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.joint1,
    cdr);

  // Member: joint2
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.joint2,
    cdr);

  // Member: joint3
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.joint3,
    cdr);

  // Member: joint4
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.joint4,
    cdr);

  // Member: joint5
  armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.joint5,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
get_serialized_size_key(
  const armpi_fpv_kinematics::msg::JointsRange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint1
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.joint1, current_alignment);

  // Member: joint2
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.joint2, current_alignment);

  // Member: joint3
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.joint3, current_alignment);

  // Member: joint4
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.joint4, current_alignment);

  // Member: joint5
  current_alignment +=
    armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.joint5, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_armpi_fpv_kinematics
max_serialized_size_key_JointsRange(
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

  // Member: joint1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: joint2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: joint3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: joint4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: joint5
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JointRange(
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
    using DataType = armpi_fpv_kinematics::msg::JointsRange;
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
  auto typed_message =
    static_cast<const armpi_fpv_kinematics::msg::JointsRange *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointsRange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<armpi_fpv_kinematics::msg::JointsRange *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointsRange__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const armpi_fpv_kinematics::msg::JointsRange *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointsRange__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointsRange(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointsRange__callbacks = {
  "armpi_fpv_kinematics::msg",
  "JointsRange",
  _JointsRange__cdr_serialize,
  _JointsRange__cdr_deserialize,
  _JointsRange__get_serialized_size,
  _JointsRange__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JointsRange__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointsRange__callbacks,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_hash,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_description,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::msg::JointsRange>()
{
  return &armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::_JointsRange__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, msg, JointsRange)() {
  return &armpi_fpv_kinematics::msg::typesupport_fastrtps_cpp::_JointsRange__handle;
}

#ifdef __cplusplus
}
#endif
