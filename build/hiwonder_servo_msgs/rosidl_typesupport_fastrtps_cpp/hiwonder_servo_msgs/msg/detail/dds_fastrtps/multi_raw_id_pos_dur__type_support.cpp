// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__functions.h"
#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__struct.hpp"

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
namespace hiwonder_servo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const hiwonder_servo_msgs::msg::RawIdPosDur &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  hiwonder_servo_msgs::msg::RawIdPosDur &);
size_t get_serialized_size(
  const hiwonder_servo_msgs::msg::RawIdPosDur &,
  size_t current_alignment);
size_t
max_serialized_size_RawIdPosDur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const hiwonder_servo_msgs::msg::RawIdPosDur &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const hiwonder_servo_msgs::msg::RawIdPosDur &,
  size_t current_alignment);
size_t
max_serialized_size_key_RawIdPosDur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
cdr_serialize(
  const hiwonder_servo_msgs::msg::MultiRawIdPosDur & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id_pos_dur_list
  {
    size_t size = ros_message.id_pos_dur_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.id_pos_dur_list[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hiwonder_servo_msgs::msg::MultiRawIdPosDur & ros_message)
{
  // Member: id_pos_dur_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.id_pos_dur_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.id_pos_dur_list[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
get_serialized_size(
  const hiwonder_servo_msgs::msg::MultiRawIdPosDur & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id_pos_dur_list
  {
    size_t array_size = ros_message.id_pos_dur_list.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.id_pos_dur_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
max_serialized_size_MultiRawIdPosDur(
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

  // Member: id_pos_dur_list
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
      size_t inner_size =
        hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RawIdPosDur(
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
    using DataType = hiwonder_servo_msgs::msg::MultiRawIdPosDur;
    is_plain =
      (
      offsetof(DataType, id_pos_dur_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
cdr_serialize_key(
  const hiwonder_servo_msgs::msg::MultiRawIdPosDur & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id_pos_dur_list
  {
    size_t size = ros_message.id_pos_dur_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.id_pos_dur_list[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
get_serialized_size_key(
  const hiwonder_servo_msgs::msg::MultiRawIdPosDur & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id_pos_dur_list
  {
    size_t array_size = ros_message.id_pos_dur_list.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.id_pos_dur_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwonder_servo_msgs
max_serialized_size_key_MultiRawIdPosDur(
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

  // Member: id_pos_dur_list
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
      size_t inner_size =
        hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_RawIdPosDur(
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
    using DataType = hiwonder_servo_msgs::msg::MultiRawIdPosDur;
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
  auto typed_message =
    static_cast<const hiwonder_servo_msgs::msg::MultiRawIdPosDur *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiRawIdPosDur__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hiwonder_servo_msgs::msg::MultiRawIdPosDur *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiRawIdPosDur__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hiwonder_servo_msgs::msg::MultiRawIdPosDur *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiRawIdPosDur__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MultiRawIdPosDur(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MultiRawIdPosDur__callbacks = {
  "hiwonder_servo_msgs::msg",
  "MultiRawIdPosDur",
  _MultiRawIdPosDur__cdr_serialize,
  _MultiRawIdPosDur__cdr_deserialize,
  _MultiRawIdPosDur__get_serialized_size,
  _MultiRawIdPosDur__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MultiRawIdPosDur__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MultiRawIdPosDur__callbacks,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_hash,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description,
  &hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hiwonder_servo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwonder_servo_msgs::msg::MultiRawIdPosDur>()
{
  return &hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::_MultiRawIdPosDur__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hiwonder_servo_msgs, msg, MultiRawIdPosDur)() {
  return &hiwonder_servo_msgs::msg::typesupport_fastrtps_cpp::_MultiRawIdPosDur__handle;
}

#ifdef __cplusplus
}
#endif
