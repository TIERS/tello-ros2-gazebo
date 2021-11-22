# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fiducial_vlam_msgs:msg/Map.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fixed_flags'
# Member 'ids'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Map(type):
    """Metaclass of message 'Map'."""

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
                'fiducial_vlam_msgs.msg.Map')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Map(metaclass=Metaclass_Map):
    """Message class 'Map'."""

    __slots__ = [
        '_header',
        '_marker_length',
        '_fixed_flags',
        '_ids',
        '_poses',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'marker_length': 'double',
        'fixed_flags': 'sequence<int32>',
        'ids': 'sequence<int32>',
        'poses': 'sequence<geometry_msgs/PoseWithCovariance>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.marker_length = kwargs.get('marker_length', float())
        self.fixed_flags = array.array('i', kwargs.get('fixed_flags', []))
        self.ids = array.array('i', kwargs.get('ids', []))
        self.poses = kwargs.get('poses', [])

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
        if self.header != other.header:
            return False
        if self.marker_length != other.marker_length:
            return False
        if self.fixed_flags != other.fixed_flags:
            return False
        if self.ids != other.ids:
            return False
        if self.poses != other.poses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def marker_length(self):
        """Message field 'marker_length'."""
        return self._marker_length

    @marker_length.setter
    def marker_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'marker_length' field must be of type 'float'"
        self._marker_length = value

    @property
    def fixed_flags(self):
        """Message field 'fixed_flags'."""
        return self._fixed_flags

    @fixed_flags.setter
    def fixed_flags(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'fixed_flags' array.array() must have the type code of 'i'"
            self._fixed_flags = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'fixed_flags' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._fixed_flags = array.array('i', value)

    @property
    def ids(self):
        """Message field 'ids'."""
        return self._ids

    @ids.setter
    def ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'ids' array.array() must have the type code of 'i'"
            self._ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._ids = array.array('i', value)

    @property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PoseWithCovariance) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'PoseWithCovariance'"
        self._poses = value
