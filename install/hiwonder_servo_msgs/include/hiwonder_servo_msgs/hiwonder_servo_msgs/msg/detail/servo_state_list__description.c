// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

#include "hiwonder_servo_msgs/msg/detail/servo_state_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hiwonder_servo_msgs
const rosidl_type_hash_t *
hiwonder_servo_msgs__msg__ServoStateList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xc8, 0x3b, 0x43, 0x9d, 0x3e, 0x93, 0x3a,
      0xda, 0x32, 0x17, 0x37, 0x30, 0x2c, 0xb9, 0xd4,
      0xe9, 0x09, 0xdc, 0x6c, 0x0a, 0xc6, 0x02, 0xe0,
      0x27, 0x6d, 0x1d, 0x12, 0x03, 0xfe, 0x24, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "hiwonder_servo_msgs/msg/detail/servo_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t hiwonder_servo_msgs__msg__ServoState__EXPECTED_HASH = {1, {
    0x85, 0x6c, 0x1c, 0x5c, 0x03, 0xed, 0x31, 0xa4,
    0x9e, 0x44, 0xe9, 0xb8, 0x69, 0x27, 0x0c, 0x6a,
    0xe4, 0x17, 0xf2, 0xf0, 0xa4, 0x29, 0x66, 0x09,
    0xec, 0xd7, 0x58, 0xcc, 0x23, 0xe1, 0xfd, 0x75,
  }};
#endif

static char hiwonder_servo_msgs__msg__ServoStateList__TYPE_NAME[] = "hiwonder_servo_msgs/msg/ServoStateList";
static char hiwonder_servo_msgs__msg__ServoState__TYPE_NAME[] = "hiwonder_servo_msgs/msg/ServoState";

// Define type names, field names, and default values
static char hiwonder_servo_msgs__msg__ServoStateList__FIELD_NAME__servo_states[] = "servo_states";

static rosidl_runtime_c__type_description__Field hiwonder_servo_msgs__msg__ServoStateList__FIELDS[] = {
  {
    {hiwonder_servo_msgs__msg__ServoStateList__FIELD_NAME__servo_states, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {hiwonder_servo_msgs__msg__ServoState__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hiwonder_servo_msgs__msg__ServoStateList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {hiwonder_servo_msgs__msg__ServoState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hiwonder_servo_msgs__msg__ServoStateList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hiwonder_servo_msgs__msg__ServoStateList__TYPE_NAME, 38, 38},
      {hiwonder_servo_msgs__msg__ServoStateList__FIELDS, 1, 1},
    },
    {hiwonder_servo_msgs__msg__ServoStateList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&hiwonder_servo_msgs__msg__ServoState__EXPECTED_HASH, hiwonder_servo_msgs__msg__ServoState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = hiwonder_servo_msgs__msg__ServoState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "ServoState[] servo_states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hiwonder_servo_msgs__msg__ServoStateList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hiwonder_servo_msgs__msg__ServoStateList__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hiwonder_servo_msgs__msg__ServoStateList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hiwonder_servo_msgs__msg__ServoStateList__get_individual_type_description_source(NULL),
    sources[1] = *hiwonder_servo_msgs__msg__ServoState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
