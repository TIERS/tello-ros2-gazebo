// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tello_msgs/msg/detail/flight_data__struct.h"
#include "tello_msgs/msg/detail/flight_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tello_msgs__msg__flight_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tello_msgs.msg._flight_data.FlightData", full_classname_dest, 38) == 0);
  }
  tello_msgs__msg__FlightData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->raw, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sdk
    PyObject * field = PyObject_GetAttrString(_pymsg, "sdk");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sdk = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pitch = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roll = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yaw = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vgx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vgx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vgx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vgy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vgy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vgy = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vgz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vgz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vgz = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // templ
    PyObject * field = PyObject_GetAttrString(_pymsg, "templ");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->templ = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temph
    PyObject * field = PyObject_GetAttrString(_pymsg, "temph");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temph = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tof
    PyObject * field = PyObject_GetAttrString(_pymsg, "tof");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tof = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // h
    PyObject * field = PyObject_GetAttrString(_pymsg, "h");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->h = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bat
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bat = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // baro
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->baro = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // agx
    PyObject * field = PyObject_GetAttrString(_pymsg, "agx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->agx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // agy
    PyObject * field = PyObject_GetAttrString(_pymsg, "agy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->agy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // agz
    PyObject * field = PyObject_GetAttrString(_pymsg, "agz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->agz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mid
    PyObject * field = PyObject_GetAttrString(_pymsg, "mid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->z = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tello_msgs__msg__flight_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FlightData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tello_msgs.msg._flight_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FlightData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tello_msgs__msg__FlightData * ros_message = (tello_msgs__msg__FlightData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->raw.data,
      strlen(ros_message->raw.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sdk
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sdk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sdk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vgx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vgx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vgx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vgy
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vgy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vgy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vgz
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vgz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vgz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // templ
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->templ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "templ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temph
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->temph);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tof
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tof);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tof", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baro
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->baro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->agx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->agy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->agz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
