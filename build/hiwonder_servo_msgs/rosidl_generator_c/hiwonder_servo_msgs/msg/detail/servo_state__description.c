// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hiwonder_servo_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#include "hiwonder_servo_msgs/msg/detail/servo_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hiwonder_servo_msgs
const rosidl_type_hash_t *
hiwonder_servo_msgs__msg__ServoState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x6c, 0x1c, 0x5c, 0x03, 0xed, 0x31, 0xa4,
      0x9e, 0x44, 0xe9, 0xb8, 0x69, 0x27, 0x0c, 0x6a,
      0xe4, 0x17, 0xf2, 0xf0, 0xa4, 0x29, 0x66, 0x09,
      0xec, 0xd7, 0x58, 0xcc, 0x23, 0xe1, 0xfd, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hiwonder_servo_msgs__msg__ServoState__TYPE_NAME[] = "hiwonder_servo_msgs/msg/ServoState";

// Define type names, field names, and default values
static char hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__timestamp[] = "timestamp";
static char hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__id[] = "id";
static char hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__goal[] = "goal";
static char hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__position[] = "position";
static char hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__error[] = "error";
static char hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__voltage[] = "voltage";

static rosidl_runtime_c__type_description__Field hiwonder_servo_msgs__msg__ServoState__FIELDS[] = {
  {
    {hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__goal, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hiwonder_servo_msgs__msg__ServoState__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hiwonder_servo_msgs__msg__ServoState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hiwonder_servo_msgs__msg__ServoState__TYPE_NAME, 34, 34},
      {hiwonder_servo_msgs__msg__ServoState__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 timestamp   # motor state is at this time\n"
  "int32 id            # motor id\n"
  "int32 goal          # commanded position (in encoder units)\n"
  "int32 position      # current position (in encoder units)\n"
  "int32 error         # difference between current and goal positions\n"
  "int32 voltage       # current voltage (mv)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hiwonder_servo_msgs__msg__ServoState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hiwonder_servo_msgs__msg__ServoState__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 310, 310},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hiwonder_servo_msgs__msg__ServoState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hiwonder_servo_msgs__msg__ServoState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
