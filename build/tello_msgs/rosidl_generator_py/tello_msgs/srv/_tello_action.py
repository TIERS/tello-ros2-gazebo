# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tello_msgs:srv/TelloAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TelloAction_Request(type):
    """Metaclass of message 'TelloAction_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tello_action__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tello_action__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tello_action__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tello_action__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tello_action__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TelloAction_Request(metaclass=Metaclass_TelloAction_Request):
    """Message class 'TelloAction_Request'."""

    __slots__ = [
        '_cmd',
    ]

    _fields_and_field_types = {
        'cmd': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd = kwargs.get('cmd', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cmd != other.cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cmd' field must be of type 'str'"
        self._cmd = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TelloAction_Response(type):
    """Metaclass of message 'TelloAction_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 1,
        'ERROR_NOT_CONNECTED': 2,
        'ERROR_BUSY': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tello_action__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tello_action__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tello_action__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tello_action__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tello_action__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'ERROR_NOT_CONNECTED': cls.__constants['ERROR_NOT_CONNECTED'],
            'ERROR_BUSY': cls.__constants['ERROR_BUSY'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_TelloAction_Response.__constants['OK']

    @property
    def ERROR_NOT_CONNECTED(self):
        """Message constant 'ERROR_NOT_CONNECTED'."""
        return Metaclass_TelloAction_Response.__constants['ERROR_NOT_CONNECTED']

    @property
    def ERROR_BUSY(self):
        """Message constant 'ERROR_BUSY'."""
        return Metaclass_TelloAction_Response.__constants['ERROR_BUSY']


class TelloAction_Response(metaclass=Metaclass_TelloAction_Response):
    """
    Message class 'TelloAction_Response'.

    Constants:
      OK
      ERROR_NOT_CONNECTED
      ERROR_BUSY
    """

    __slots__ = [
        '_rc',
    ]

    _fields_and_field_types = {
        'rc': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rc = kwargs.get('rc', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rc != other.rc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rc(self):
        """Message field 'rc'."""
        return self._rc

    @rc.setter
    def rc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rc' field must be an unsigned integer in [0, 255]"
        self._rc = value


class Metaclass_TelloAction(type):
    """Metaclass of service 'TelloAction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tello_action

            from tello_msgs.srv import _tello_action
            if _tello_action.Metaclass_TelloAction_Request._TYPE_SUPPORT is None:
                _tello_action.Metaclass_TelloAction_Request.__import_type_support__()
            if _tello_action.Metaclass_TelloAction_Response._TYPE_SUPPORT is None:
                _tello_action.Metaclass_TelloAction_Response.__import_type_support__()


class TelloAction(metaclass=Metaclass_TelloAction):
    from tello_msgs.srv._tello_action import TelloAction_Request as Request
    from tello_msgs.srv._tello_action import TelloAction_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
