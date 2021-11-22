# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tello_msgs:msg/FlightData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FlightData(type):
    """Metaclass of message 'FlightData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SDK_UNKNOWN': 0,
        'SDK_1_3': 1,
        'SDK_2_0': 2,
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
                'tello_msgs.msg.FlightData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__flight_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__flight_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__flight_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__flight_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__flight_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SDK_UNKNOWN': cls.__constants['SDK_UNKNOWN'],
            'SDK_1_3': cls.__constants['SDK_1_3'],
            'SDK_2_0': cls.__constants['SDK_2_0'],
        }

    @property
    def SDK_UNKNOWN(self):
        """Message constant 'SDK_UNKNOWN'."""
        return Metaclass_FlightData.__constants['SDK_UNKNOWN']

    @property
    def SDK_1_3(self):
        """Message constant 'SDK_1_3'."""
        return Metaclass_FlightData.__constants['SDK_1_3']

    @property
    def SDK_2_0(self):
        """Message constant 'SDK_2_0'."""
        return Metaclass_FlightData.__constants['SDK_2_0']


class FlightData(metaclass=Metaclass_FlightData):
    """
    Message class 'FlightData'.

    Constants:
      SDK_UNKNOWN
      SDK_1_3
      SDK_2_0
    """

    __slots__ = [
        '_header',
        '_raw',
        '_sdk',
        '_pitch',
        '_roll',
        '_yaw',
        '_vgx',
        '_vgy',
        '_vgz',
        '_templ',
        '_temph',
        '_tof',
        '_h',
        '_bat',
        '_baro',
        '_time',
        '_agx',
        '_agy',
        '_agz',
        '_mid',
        '_x',
        '_y',
        '_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'raw': 'string',
        'sdk': 'uint8',
        'pitch': 'int32',
        'roll': 'int32',
        'yaw': 'int32',
        'vgx': 'int32',
        'vgy': 'int32',
        'vgz': 'int32',
        'templ': 'int32',
        'temph': 'int32',
        'tof': 'int32',
        'h': 'int32',
        'bat': 'int32',
        'baro': 'float',
        'time': 'int32',
        'agx': 'float',
        'agy': 'float',
        'agz': 'float',
        'mid': 'int32',
        'x': 'int32',
        'y': 'int32',
        'z': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.raw = kwargs.get('raw', str())
        self.sdk = kwargs.get('sdk', int())
        self.pitch = kwargs.get('pitch', int())
        self.roll = kwargs.get('roll', int())
        self.yaw = kwargs.get('yaw', int())
        self.vgx = kwargs.get('vgx', int())
        self.vgy = kwargs.get('vgy', int())
        self.vgz = kwargs.get('vgz', int())
        self.templ = kwargs.get('templ', int())
        self.temph = kwargs.get('temph', int())
        self.tof = kwargs.get('tof', int())
        self.h = kwargs.get('h', int())
        self.bat = kwargs.get('bat', int())
        self.baro = kwargs.get('baro', float())
        self.time = kwargs.get('time', int())
        self.agx = kwargs.get('agx', float())
        self.agy = kwargs.get('agy', float())
        self.agz = kwargs.get('agz', float())
        self.mid = kwargs.get('mid', int())
        self.x = kwargs.get('x', int())
        self.y = kwargs.get('y', int())
        self.z = kwargs.get('z', int())

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
        if self.raw != other.raw:
            return False
        if self.sdk != other.sdk:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.yaw != other.yaw:
            return False
        if self.vgx != other.vgx:
            return False
        if self.vgy != other.vgy:
            return False
        if self.vgz != other.vgz:
            return False
        if self.templ != other.templ:
            return False
        if self.temph != other.temph:
            return False
        if self.tof != other.tof:
            return False
        if self.h != other.h:
            return False
        if self.bat != other.bat:
            return False
        if self.baro != other.baro:
            return False
        if self.time != other.time:
            return False
        if self.agx != other.agx:
            return False
        if self.agy != other.agy:
            return False
        if self.agz != other.agz:
            return False
        if self.mid != other.mid:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
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
    def raw(self):
        """Message field 'raw'."""
        return self._raw

    @raw.setter
    def raw(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'raw' field must be of type 'str'"
        self._raw = value

    @property
    def sdk(self):
        """Message field 'sdk'."""
        return self._sdk

    @sdk.setter
    def sdk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sdk' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sdk' field must be an unsigned integer in [0, 255]"
        self._sdk = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pitch' field must be an integer in [-2147483648, 2147483647]"
        self._pitch = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roll' field must be an integer in [-2147483648, 2147483647]"
        self._roll = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'yaw' field must be an integer in [-2147483648, 2147483647]"
        self._yaw = value

    @property
    def vgx(self):
        """Message field 'vgx'."""
        return self._vgx

    @vgx.setter
    def vgx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vgx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vgx' field must be an integer in [-2147483648, 2147483647]"
        self._vgx = value

    @property
    def vgy(self):
        """Message field 'vgy'."""
        return self._vgy

    @vgy.setter
    def vgy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vgy' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vgy' field must be an integer in [-2147483648, 2147483647]"
        self._vgy = value

    @property
    def vgz(self):
        """Message field 'vgz'."""
        return self._vgz

    @vgz.setter
    def vgz(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vgz' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vgz' field must be an integer in [-2147483648, 2147483647]"
        self._vgz = value

    @property
    def templ(self):
        """Message field 'templ'."""
        return self._templ

    @templ.setter
    def templ(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'templ' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'templ' field must be an integer in [-2147483648, 2147483647]"
        self._templ = value

    @property
    def temph(self):
        """Message field 'temph'."""
        return self._temph

    @temph.setter
    def temph(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temph' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'temph' field must be an integer in [-2147483648, 2147483647]"
        self._temph = value

    @property
    def tof(self):
        """Message field 'tof'."""
        return self._tof

    @tof.setter
    def tof(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tof' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tof' field must be an integer in [-2147483648, 2147483647]"
        self._tof = value

    @property
    def h(self):
        """Message field 'h'."""
        return self._h

    @h.setter
    def h(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'h' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'h' field must be an integer in [-2147483648, 2147483647]"
        self._h = value

    @property
    def bat(self):
        """Message field 'bat'."""
        return self._bat

    @bat.setter
    def bat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bat' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bat' field must be an integer in [-2147483648, 2147483647]"
        self._bat = value

    @property
    def baro(self):
        """Message field 'baro'."""
        return self._baro

    @baro.setter
    def baro(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro' field must be of type 'float'"
        self._baro = value

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time' field must be an integer in [-2147483648, 2147483647]"
        self._time = value

    @property
    def agx(self):
        """Message field 'agx'."""
        return self._agx

    @agx.setter
    def agx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'agx' field must be of type 'float'"
        self._agx = value

    @property
    def agy(self):
        """Message field 'agy'."""
        return self._agy

    @agy.setter
    def agy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'agy' field must be of type 'float'"
        self._agy = value

    @property
    def agz(self):
        """Message field 'agz'."""
        return self._agz

    @agz.setter
    def agz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'agz' field must be of type 'float'"
        self._agz = value

    @property
    def mid(self):
        """Message field 'mid'."""
        return self._mid

    @mid.setter
    def mid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mid' field must be an integer in [-2147483648, 2147483647]"
        self._mid = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x' field must be an integer in [-2147483648, 2147483647]"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y' field must be an integer in [-2147483648, 2147483647]"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'z' field must be an integer in [-2147483648, 2147483647]"
        self._z = value
