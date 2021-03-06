// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_pkg:msg/ServoValues.idl
// generated code does not contain a copyright notice
#include "message_pkg/msg/servo_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
message_pkg__msg__ServoValues__init(message_pkg__msg__ServoValues * msg)
{
  if (!msg) {
    return false;
  }
  // servovalue
  return true;
}

void
message_pkg__msg__ServoValues__fini(message_pkg__msg__ServoValues * msg)
{
  if (!msg) {
    return;
  }
  // servovalue
}

message_pkg__msg__ServoValues *
message_pkg__msg__ServoValues__create()
{
  message_pkg__msg__ServoValues * msg = (message_pkg__msg__ServoValues *)malloc(sizeof(message_pkg__msg__ServoValues));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_pkg__msg__ServoValues));
  bool success = message_pkg__msg__ServoValues__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_pkg__msg__ServoValues__destroy(message_pkg__msg__ServoValues * msg)
{
  if (msg) {
    message_pkg__msg__ServoValues__fini(msg);
  }
  free(msg);
}


bool
message_pkg__msg__ServoValues__Sequence__init(message_pkg__msg__ServoValues__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_pkg__msg__ServoValues * data = NULL;
  if (size) {
    data = (message_pkg__msg__ServoValues *)calloc(size, sizeof(message_pkg__msg__ServoValues));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_pkg__msg__ServoValues__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_pkg__msg__ServoValues__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
message_pkg__msg__ServoValues__Sequence__fini(message_pkg__msg__ServoValues__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_pkg__msg__ServoValues__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

message_pkg__msg__ServoValues__Sequence *
message_pkg__msg__ServoValues__Sequence__create(size_t size)
{
  message_pkg__msg__ServoValues__Sequence * array = (message_pkg__msg__ServoValues__Sequence *)malloc(sizeof(message_pkg__msg__ServoValues__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_pkg__msg__ServoValues__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_pkg__msg__ServoValues__Sequence__destroy(message_pkg__msg__ServoValues__Sequence * array)
{
  if (array) {
    message_pkg__msg__ServoValues__Sequence__fini(array);
  }
  free(array);
}
