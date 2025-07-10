// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hiwonder_servo_msgs:msg/CommandDuration.idl
// generated code does not contain a copyright notice

#include "hiwonder_servo_msgs/msg/detail/command_duration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hiwonder_servo_msgs
const rosidl_type_hash_t *
hiwonder_servo_msgs__msg__CommandDuration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x8b, 0x1e, 0x3d, 0x87, 0x9d, 0x5b, 0x00,
      0x7e, 0x3a, 0xb4, 0x85, 0x6e, 0x31, 0x13, 0x5f,
      0x79, 0x34, 0x22, 0x46, 0x82, 0x50, 0x1a, 0x72,
      0xab, 0xa4, 0x1d, 0x7b, 0x0f, 0x42, 0x36, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hiwonder_servo_msgs__msg__CommandDuration__TYPE_NAME[] = "hiwonder_servo_msgs/msg/CommandDuration";

// Define type names, field names, and default values
static char hiwonder_servo_msgs__msg__CommandDuration__FIELD_NAME__data[] = "data";
static char hiwonder_servo_msgs__msg__CommandDuration__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field hiwonder_servo_msgs__msg__CommandDuration__FIELDS[] = {
  {
    {hiwonder_servo_msgs__msg__CommandDuration__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__CommandDuration__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hiwonder_servo_msgs__msg__CommandDuration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hiwonder_servo_msgs__msg__CommandDuration__TYPE_NAME, 39, 39},
      {hiwonder_servo_msgs__msg__CommandDuration__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 data\n"
  "float64 duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hiwonder_servo_msgs__msg__CommandDuration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hiwonder_servo_msgs__msg__CommandDuration__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hiwonder_servo_msgs__msg__CommandDuration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hiwonder_servo_msgs__msg__CommandDuration__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
