// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduinobot_msg:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSG__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_H_
#define ARDUINOBOT_MSG__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/QuaternionToEuler in the package arduinobot_msg.
typedef struct arduinobot_msg__srv__QuaternionToEuler_Request
{
  double x;
  double y;
  double z;
  double w;
} arduinobot_msg__srv__QuaternionToEuler_Request;

// Struct for a sequence of arduinobot_msg__srv__QuaternionToEuler_Request.
typedef struct arduinobot_msg__srv__QuaternionToEuler_Request__Sequence
{
  arduinobot_msg__srv__QuaternionToEuler_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msg__srv__QuaternionToEuler_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/QuaternionToEuler in the package arduinobot_msg.
typedef struct arduinobot_msg__srv__QuaternionToEuler_Response
{
  double roll;
  double pitch;
  double yaw;
} arduinobot_msg__srv__QuaternionToEuler_Response;

// Struct for a sequence of arduinobot_msg__srv__QuaternionToEuler_Response.
typedef struct arduinobot_msg__srv__QuaternionToEuler_Response__Sequence
{
  arduinobot_msg__srv__QuaternionToEuler_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduinobot_msg__srv__QuaternionToEuler_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUINOBOT_MSG__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_H_
