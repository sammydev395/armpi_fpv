// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // pitch_range, position
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // pitch_range, position

// forward declare type support functions


using _SetRobotPose_Request__ros_msg_type = armpi_fpv_kinematics__srv__SetRobotPose_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: pitch_range
  {
    size_t size = ros_message->pitch_range.size;
    auto array_ptr = ros_message->pitch_range.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: resolution
  {
    cdr << ros_message->resolution;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message)
{
  // Field name: position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->position, size)) {
      fprintf(stderr, "failed to create array for field 'position'");
      return false;
    }
    auto array_ptr = ros_message->position.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: pitch_range
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pitch_range.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pitch_range);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pitch_range, size)) {
      fprintf(stderr, "failed to create array for field 'pitch_range'");
      return false;
    }
    auto array_ptr = ros_message->pitch_range.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: resolution
  {
    cdr >> ros_message->resolution;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Request__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_range
  {
    size_t array_size = ros_message->pitch_range.size;
    auto array_ptr = ros_message->pitch_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: resolution
  {
    size_t item_size = sizeof(ros_message->resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
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

  // Field name: position
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

  // Field name: pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pitch_range
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

  // Field name: roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: resolution
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
    using DataType = armpi_fpv_kinematics__srv__SetRobotPose_Request;
    is_plain =
      (
      offsetof(DataType, resolution) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: pitch_range
  {
    size_t size = ros_message->pitch_range.size;
    auto array_ptr = ros_message->pitch_range.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: resolution
  {
    cdr << ros_message->resolution;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Request__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pitch_range
  {
    size_t array_size = ros_message->pitch_range.size;
    auto array_ptr = ros_message->pitch_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: resolution
  {
    size_t item_size = sizeof(ros_message->resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
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
  // Field name: position
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

  // Field name: pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pitch_range
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

  // Field name: roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: resolution
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
    using DataType = armpi_fpv_kinematics__srv__SetRobotPose_Request;
    is_plain =
      (
      offsetof(DataType, resolution) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetRobotPose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message = static_cast<const armpi_fpv_kinematics__srv__SetRobotPose_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(ros_message, cdr);
}

static bool _SetRobotPose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message = static_cast<armpi_fpv_kinematics__srv__SetRobotPose_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(cdr, ros_message);
}

static uint32_t _SetRobotPose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
      untyped_ros_message, 0));
}

static size_t _SetRobotPose_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetRobotPose_Request = {
  "armpi_fpv_kinematics::srv",
  "SetRobotPose_Request",
  _SetRobotPose_Request__cdr_serialize,
  _SetRobotPose_Request__cdr_deserialize,
  _SetRobotPose_Request__get_serialized_size,
  _SetRobotPose_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetRobotPose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetRobotPose_Request,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)() {
  return &_SetRobotPose_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // current_pulse, pulse, rpy
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // current_pulse, pulse, rpy

// forward declare type support functions


using _SetRobotPose_Response__ros_msg_type = armpi_fpv_kinematics__srv__SetRobotPose_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: pulse
  {
    size_t size = ros_message->pulse.size;
    auto array_ptr = ros_message->pulse.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_pulse
  {
    size_t size = ros_message->current_pulse.size;
    auto array_ptr = ros_message->current_pulse.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: min_variation
  {
    cdr << ros_message->min_variation;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: pulse
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pulse.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->pulse);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->pulse, size)) {
      fprintf(stderr, "failed to create array for field 'pulse'");
      return false;
    }
    auto array_ptr = ros_message->pulse.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: current_pulse
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->current_pulse.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->current_pulse);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->current_pulse, size)) {
      fprintf(stderr, "failed to create array for field 'current_pulse'");
      return false;
    }
    auto array_ptr = ros_message->current_pulse.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: rpy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rpy.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rpy);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rpy, size)) {
      fprintf(stderr, "failed to create array for field 'rpy'");
      return false;
    }
    auto array_ptr = ros_message->rpy.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: min_variation
  {
    cdr >> ros_message->min_variation;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Response__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pulse
  {
    size_t array_size = ros_message->pulse.size;
    auto array_ptr = ros_message->pulse.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_pulse
  {
    size_t array_size = ros_message->current_pulse.size;
    auto array_ptr = ros_message->current_pulse.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rpy
  {
    size_t array_size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_variation
  {
    size_t item_size = sizeof(ros_message->min_variation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
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

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pulse
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

  // Field name: current_pulse
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

  // Field name: rpy
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

  // Field name: min_variation
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
    using DataType = armpi_fpv_kinematics__srv__SetRobotPose_Response;
    is_plain =
      (
      offsetof(DataType, min_variation) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: pulse
  {
    size_t size = ros_message->pulse.size;
    auto array_ptr = ros_message->pulse.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: current_pulse
  {
    size_t size = ros_message->current_pulse.size;
    auto array_ptr = ros_message->current_pulse.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: min_variation
  {
    cdr << ros_message->min_variation;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Response__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pulse
  {
    size_t array_size = ros_message->pulse.size;
    auto array_ptr = ros_message->pulse.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_pulse
  {
    size_t array_size = ros_message->current_pulse.size;
    auto array_ptr = ros_message->current_pulse.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rpy
  {
    size_t array_size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_variation
  {
    size_t item_size = sizeof(ros_message->min_variation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
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
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pulse
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

  // Field name: current_pulse
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

  // Field name: rpy
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

  // Field name: min_variation
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
    using DataType = armpi_fpv_kinematics__srv__SetRobotPose_Response;
    is_plain =
      (
      offsetof(DataType, min_variation) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetRobotPose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message = static_cast<const armpi_fpv_kinematics__srv__SetRobotPose_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(ros_message, cdr);
}

static bool _SetRobotPose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message = static_cast<armpi_fpv_kinematics__srv__SetRobotPose_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(cdr, ros_message);
}

static uint32_t _SetRobotPose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
      untyped_ros_message, 0));
}

static size_t _SetRobotPose_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetRobotPose_Response = {
  "armpi_fpv_kinematics::srv",
  "SetRobotPose_Response",
  _SetRobotPose_Response__cdr_serialize,
  _SetRobotPose_Response__cdr_deserialize,
  _SetRobotPose_Response__get_serialized_size,
  _SetRobotPose_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetRobotPose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetRobotPose_Response,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)() {
  return &_SetRobotPose_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message);

size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)();

bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message);

size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _SetRobotPose_Event__ros_msg_type = armpi_fpv_kinematics__srv__SetRobotPose_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  eprosima::fastcdr::Cdr & cdr,
  armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence__fini(&ros_message->request);
    }
    if (!armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence__fini(&ros_message->response);
    }
    if (!armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Event__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Response(
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
    using DataType = armpi_fpv_kinematics__srv__SetRobotPose_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
bool cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetRobotPose_Event__ros_msg_type * ros_message = static_cast<const _SetRobotPose_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_armpi_fpv_kinematics
size_t max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_armpi_fpv_kinematics__srv__SetRobotPose_Response(
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
    using DataType = armpi_fpv_kinematics__srv__SetRobotPose_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SetRobotPose_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message = static_cast<const armpi_fpv_kinematics__srv__SetRobotPose_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_armpi_fpv_kinematics__srv__SetRobotPose_Event(ros_message, cdr);
}

static bool _SetRobotPose_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  armpi_fpv_kinematics__srv__SetRobotPose_Event * ros_message = static_cast<armpi_fpv_kinematics__srv__SetRobotPose_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_armpi_fpv_kinematics__srv__SetRobotPose_Event(cdr, ros_message);
}

static uint32_t _SetRobotPose_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Event(
      untyped_ros_message, 0));
}

static size_t _SetRobotPose_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_armpi_fpv_kinematics__srv__SetRobotPose_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetRobotPose_Event = {
  "armpi_fpv_kinematics::srv",
  "SetRobotPose_Event",
  _SetRobotPose_Event__cdr_serialize,
  _SetRobotPose_Event__cdr_deserialize,
  _SetRobotPose_Event__get_serialized_size,
  _SetRobotPose_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetRobotPose_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetRobotPose_Event,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Event)() {
  return &_SetRobotPose_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "armpi_fpv_kinematics/srv/set_robot_pose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetRobotPose__callbacks = {
  "armpi_fpv_kinematics::srv",
  "SetRobotPose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)(),
};

static rosidl_service_type_support_t SetRobotPose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetRobotPose__callbacks,
  get_service_typesupport_handle_function,
  &_SetRobotPose_Request__type_support,
  &_SetRobotPose_Response__type_support,
  &_SetRobotPose_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetRobotPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetRobotPose
  ),
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetRobotPose)() {
  return &SetRobotPose__handle;
}

#if defined(__cplusplus)
}
#endif
