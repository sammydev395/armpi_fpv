// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

#include "hiwonder_servo_msgs/msg/detail/command_duration_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hiwonder_servo_msgs
const rosidl_type_hash_t *
hiwonder_servo_msgs__msg__CommandDurationList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x20, 0x93, 0x2d, 0xa7, 0x14, 0x45, 0x2f,
      0x17, 0x58, 0xaa, 0xec, 0xb0, 0x77, 0xa3, 0x1b,
      0x10, 0x1c, 0x4f, 0x21, 0x18, 0xb0, 0xa2, 0xfd,
      0x53, 0x44, 0xd9, 0x96, 0xae, 0x05, 0x25, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hiwonder_servo_msgs__msg__CommandDurationList__TYPE_NAME[] = "hiwonder_servo_msgs/msg/CommandDurationList";

// Define type names, field names, and default values
static char hiwonder_servo_msgs__msg__CommandDurationList__FIELD_NAME__duration[] = "duration";
static char hiwonder_servo_msgs__msg__CommandDurationList__FIELD_NAME__ids[] = "ids";
static char hiwonder_servo_msgs__msg__CommandDurationList__FIELD_NAME__positions[] = "positions";

static rosidl_runtime_c__type_description__Field hiwonder_servo_msgs__msg__CommandDurationList__FIELDS[] = {
  {
    {hiwonder_servo_msgs__msg__CommandDurationList__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__CommandDurationList__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__CommandDurationList__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hiwonder_servo_msgs__msg__CommandDurationList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hiwonder_servo_msgs__msg__CommandDurationList__TYPE_NAME, 43, 43},
      {hiwonder_servo_msgs__msg__CommandDurationList__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 duration\n"
  "uint16[] ids\n"
  "float64[] positions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hiwonder_servo_msgs__msg__CommandDurationList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hiwonder_servo_msgs__msg__CommandDurationList__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hiwonder_servo_msgs__msg__CommandDurationList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hiwonder_servo_msgs__msg__CommandDurationList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
