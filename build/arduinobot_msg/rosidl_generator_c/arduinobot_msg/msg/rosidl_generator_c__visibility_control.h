// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_MSG__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define ARDUINOBOT_MSG__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_arduinobot_msg __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_arduinobot_msg __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_arduinobot_msg __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_arduinobot_msg __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_arduinobot_msg
    #define ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msg ROSIDL_GENERATOR_C_EXPORT_arduinobot_msg
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msg ROSIDL_GENERATOR_C_IMPORT_arduinobot_msg
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_arduinobot_msg __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_arduinobot_msg
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msg __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msg
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ARDUINOBOT_MSG__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
