// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hiwonder_servo_msgs:msg/RawIdPosDur.idl
// generated code does not contain a copyright notice

#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hiwonder_servo_msgs
const rosidl_type_hash_t *
hiwonder_servo_msgs__msg__RawIdPosDur__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xc1, 0xcb, 0xb5, 0x56, 0x30, 0x2f, 0xf2,
      0x86, 0x61, 0x04, 0x53, 0xcf, 0x53, 0x44, 0xc4,
      0x49, 0xb3, 0x57, 0xb0, 0x38, 0xa3, 0x7f, 0x4c,
      0xe8, 0x2f, 0x39, 0x6d, 0x81, 0x05, 0xfc, 0x86,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hiwonder_servo_msgs__msg__RawIdPosDur__TYPE_NAME[] = "hiwonder_servo_msgs/msg/RawIdPosDur";

// Define type names, field names, and default values
static char hiwonder_servo_msgs__msg__RawIdPosDur__FIELD_NAME__id[] = "id";
static char hiwonder_servo_msgs__msg__RawIdPosDur__FIELD_NAME__position[] = "position";
static char hiwonder_servo_msgs__msg__RawIdPosDur__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field hiwonder_servo_msgs__msg__RawIdPosDur__FIELDS[] = {
  {
    {hiwonder_servo_msgs__msg__RawIdPosDur__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__RawIdPosDur__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__RawIdPosDur__FIELD_NAME__duration, 8, 8},
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
hiwonder_servo_msgs__msg__RawIdPosDur__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hiwonder_servo_msgs__msg__RawIdPosDur__TYPE_NAME, 35, 35},
      {hiwonder_servo_msgs__msg__RawIdPosDur__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 id\n"
  "uint16 position\n"
  "float64 duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hiwonder_servo_msgs__msg__RawIdPosDur__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hiwonder_servo_msgs__msg__RawIdPosDur__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hiwonder_servo_msgs__msg__RawIdPosDur__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hiwonder_servo_msgs__msg__RawIdPosDur__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
