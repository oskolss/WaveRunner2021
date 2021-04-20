// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_pkg:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "message_pkg/srv/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
message_pkg__srv__AddThreeInts_Request__init(message_pkg__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
message_pkg__srv__AddThreeInts_Request__fini(message_pkg__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

message_pkg__srv__AddThreeInts_Request *
message_pkg__srv__AddThreeInts_Request__create()
{
  message_pkg__srv__AddThreeInts_Request * msg = (message_pkg__srv__AddThreeInts_Request *)malloc(sizeof(message_pkg__srv__AddThreeInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_pkg__srv__AddThreeInts_Request));
  bool success = message_pkg__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_pkg__srv__AddThreeInts_Request__destroy(message_pkg__srv__AddThreeInts_Request * msg)
{
  if (msg) {
    message_pkg__srv__AddThreeInts_Request__fini(msg);
  }
  free(msg);
}


bool
message_pkg__srv__AddThreeInts_Request__Sequence__init(message_pkg__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_pkg__srv__AddThreeInts_Request * data = NULL;
  if (size) {
    data = (message_pkg__srv__AddThreeInts_Request *)calloc(size, sizeof(message_pkg__srv__AddThreeInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_pkg__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_pkg__srv__AddThreeInts_Request__fini(&data[i - 1]);
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
message_pkg__srv__AddThreeInts_Request__Sequence__fini(message_pkg__srv__AddThreeInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_pkg__srv__AddThreeInts_Request__fini(&array->data[i]);
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

message_pkg__srv__AddThreeInts_Request__Sequence *
message_pkg__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  message_pkg__srv__AddThreeInts_Request__Sequence * array = (message_pkg__srv__AddThreeInts_Request__Sequence *)malloc(sizeof(message_pkg__srv__AddThreeInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_pkg__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_pkg__srv__AddThreeInts_Request__Sequence__destroy(message_pkg__srv__AddThreeInts_Request__Sequence * array)
{
  if (array) {
    message_pkg__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
message_pkg__srv__AddThreeInts_Response__init(message_pkg__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
message_pkg__srv__AddThreeInts_Response__fini(message_pkg__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

message_pkg__srv__AddThreeInts_Response *
message_pkg__srv__AddThreeInts_Response__create()
{
  message_pkg__srv__AddThreeInts_Response * msg = (message_pkg__srv__AddThreeInts_Response *)malloc(sizeof(message_pkg__srv__AddThreeInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_pkg__srv__AddThreeInts_Response));
  bool success = message_pkg__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_pkg__srv__AddThreeInts_Response__destroy(message_pkg__srv__AddThreeInts_Response * msg)
{
  if (msg) {
    message_pkg__srv__AddThreeInts_Response__fini(msg);
  }
  free(msg);
}


bool
message_pkg__srv__AddThreeInts_Response__Sequence__init(message_pkg__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_pkg__srv__AddThreeInts_Response * data = NULL;
  if (size) {
    data = (message_pkg__srv__AddThreeInts_Response *)calloc(size, sizeof(message_pkg__srv__AddThreeInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_pkg__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_pkg__srv__AddThreeInts_Response__fini(&data[i - 1]);
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
message_pkg__srv__AddThreeInts_Response__Sequence__fini(message_pkg__srv__AddThreeInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_pkg__srv__AddThreeInts_Response__fini(&array->data[i]);
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

message_pkg__srv__AddThreeInts_Response__Sequence *
message_pkg__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  message_pkg__srv__AddThreeInts_Response__Sequence * array = (message_pkg__srv__AddThreeInts_Response__Sequence *)malloc(sizeof(message_pkg__srv__AddThreeInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_pkg__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_pkg__srv__AddThreeInts_Response__Sequence__destroy(message_pkg__srv__AddThreeInts_Response__Sequence * array)
{
  if (array) {
    message_pkg__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  free(array);
}
