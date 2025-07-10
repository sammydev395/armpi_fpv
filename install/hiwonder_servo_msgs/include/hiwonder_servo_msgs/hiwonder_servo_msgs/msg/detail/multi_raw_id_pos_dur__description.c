// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hiwonder_servo_msgs
const rosidl_type_hash_t *
hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0xf5, 0x04, 0x31, 0x5f, 0x64, 0xe8, 0x83,
      0x32, 0xdf, 0xf4, 0xb4, 0x08, 0xf1, 0xcf, 0x82,
      0x97, 0x84, 0xdb, 0xca, 0x96, 0xc1, 0xd0, 0xb1,
      0x24, 0x0e, 0x3f, 0x75, 0xf1, 0x6d, 0xae, 0xa3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t hiwonder_servo_msgs__msg__RawIdPosDur__EXPECTED_HASH = {1, {
    0xac, 0xc1, 0xcb, 0xb5, 0x56, 0x30, 0x2f, 0xf2,
    0x86, 0x61, 0x04, 0x53, 0xcf, 0x53, 0x44, 0xc4,
    0x49, 0xb3, 0x57, 0xb0, 0x38, 0xa3, 0x7f, 0x4c,
    0xe8, 0x2f, 0x39, 0x6d, 0x81, 0x05, 0xfc, 0x86,
  }};
#endif

static char hiwonder_servo_msgs__msg__MultiRawIdPosDur__TYPE_NAME[] = "hiwonder_servo_msgs/msg/MultiRawIdPosDur";
static char hiwonder_servo_msgs__msg__RawIdPosDur__TYPE_NAME[] = "hiwonder_servo_msgs/msg/RawIdPosDur";

// Define type names, field names, and default values
static char hiwonder_servo_msgs__msg__MultiRawIdPosDur__FIELD_NAME__id_pos_dur_list[] = "id_pos_dur_list";

static rosidl_runtime_c__type_description__Field hiwonder_servo_msgs__msg__MultiRawIdPosDur__FIELDS[] = {
  {
    {hiwonder_servo_msgs__msg__MultiRawIdPosDur__FIELD_NAME__id_pos_dur_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {hiwonder_servo_msgs__msg__RawIdPosDur__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hiwonder_servo_msgs__msg__MultiRawIdPosDur__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {hiwonder_servo_msgs__msg__RawIdPosDur__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hiwonder_servo_msgs__msg__MultiRawIdPosDur__TYPE_NAME, 40, 40},
      {hiwonder_servo_msgs__msg__MultiRawIdPosDur__FIELDS, 1, 1},
    },
    {hiwonder_servo_msgs__msg__MultiRawIdPosDur__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&hiwonder_servo_msgs__msg__RawIdPosDur__EXPECTED_HASH, hiwonder_servo_msgs__msg__RawIdPosDur__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = hiwonder_servo_msgs__msg__RawIdPosDur__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "RawIdPosDur[] id_pos_dur_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hiwonder_servo_msgs__msg__MultiRawIdPosDur__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hiwonder_servo_msgs__msg__MultiRawIdPosDur__get_individual_type_description_source(NULL),
    sources[1] = *hiwonder_servo_msgs__msg__RawIdPosDur__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
