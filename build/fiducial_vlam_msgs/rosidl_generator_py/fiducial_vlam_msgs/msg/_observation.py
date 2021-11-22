# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fiducial_vlam_msgs:msg/Observation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Observation(type):
    """Metaclass of message 'Observation'."""

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
            module = import_type_support('fiducial_vlam_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fiducial_vlam_msgs.msg.Observation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__observation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__observation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__observation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__observation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__observation

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Observation(metaclass=Metaclass_Observation):
    """Message class 'Observation'."""

    __slots__ = [
        '_id',
        '_x0',
        '_y0',
        '_x1',
        '_y1',
        '_x2',
        '_y2',
        '_x3',
        '_y3',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'x0': 'double',
        'y0': 'double',
        'x1': 'double',
        'y1': 'double',
        'x2': 'double',
        'y2': 'double',
        'x3': 'double',
        'y3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.x0 = kwargs.get('x0', float())
        self.y0 = kwargs.get('y0', float())
        self.x1 = kwargs.get('x1', float())
        self.y1 = kwargs.get('y1', float())
        self.x2 = kwargs.get('x2', float())
        self.y2 = kwargs.get('y2', float())
        self.x3 = kwargs.get('x3', float())
        self.y3 = kwargs.get('y3', float())

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
        if self.id != other.id:
            return False
        if self.x0 != other.x0:
            return False
        if self.y0 != other.y0:
            return False
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        if self.x3 != other.x3:
            return False
        if self.y3 != other.y3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def x0(self):
        """Message field 'x0'."""
        return self._x0

    @x0.setter
    def x0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x0' field must be of type 'float'"
        self._x0 = value

    @property
    def y0(self):
        """Message field 'y0'."""
        return self._y0

    @y0.setter
    def y0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y0' field must be of type 'float'"
        self._y0 = value

    @property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1' field must be of type 'float'"
        self._x1 = value

    @property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1' field must be of type 'float'"
        self._y1 = value

    @property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2' field must be of type 'float'"
        self._x2 = value

    @property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2' field must be of type 'float'"
        self._y2 = value

    @property
    def x3(self):
        """Message field 'x3'."""
        return self._x3

    @x3.setter
    def x3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x3' field must be of type 'float'"
        self._x3 = value

    @property
    def y3(self):
        """Message field 'y3'."""
        return self._y3

    @y3.setter
    def y3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y3' field must be of type 'float'"
        self._y3 = value
