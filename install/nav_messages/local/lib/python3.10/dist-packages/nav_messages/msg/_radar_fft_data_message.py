# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav_messages:msg/RadarFftDataMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'angle'
# Member 'azimuth'
# Member 'sweep_counter'
# Member 'ntp_seconds'
# Member 'ntp_split_seconds'
# Member 'data'
# Member 'data_length'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarFftDataMessage(type):
    """Metaclass of message 'RadarFftDataMessage'."""

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
            module = import_type_support('nav_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav_messages.msg.RadarFftDataMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_fft_data_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_fft_data_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_fft_data_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_fft_data_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_fft_data_message

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


class RadarFftDataMessage(metaclass=Metaclass_RadarFftDataMessage):
    """Message class 'RadarFftDataMessage'."""

    __slots__ = [
        '_header',
        '_angle',
        '_azimuth',
        '_sweep_counter',
        '_ntp_seconds',
        '_ntp_split_seconds',
        '_data',
        '_data_length',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angle': 'sequence<uint8>',
        'azimuth': 'sequence<uint8>',
        'sweep_counter': 'sequence<uint8>',
        'ntp_seconds': 'sequence<uint8>',
        'ntp_split_seconds': 'sequence<uint8>',
        'data': 'sequence<uint8>',
        'data_length': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angle = array.array('B', kwargs.get('angle', []))
        self.azimuth = array.array('B', kwargs.get('azimuth', []))
        self.sweep_counter = array.array('B', kwargs.get('sweep_counter', []))
        self.ntp_seconds = array.array('B', kwargs.get('ntp_seconds', []))
        self.ntp_split_seconds = array.array('B', kwargs.get('ntp_split_seconds', []))
        self.data = array.array('B', kwargs.get('data', []))
        self.data_length = array.array('B', kwargs.get('data_length', []))

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
        if self.angle != other.angle:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.sweep_counter != other.sweep_counter:
            return False
        if self.ntp_seconds != other.ntp_seconds:
            return False
        if self.ntp_split_seconds != other.ntp_split_seconds:
            return False
        if self.data != other.data:
            return False
        if self.data_length != other.data_length:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'angle' array.array() must have the type code of 'B'"
            self._angle = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'angle' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._angle = array.array('B', value)

    @builtins.property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'azimuth' array.array() must have the type code of 'B'"
            self._azimuth = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'azimuth' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._azimuth = array.array('B', value)

    @builtins.property
    def sweep_counter(self):
        """Message field 'sweep_counter'."""
        return self._sweep_counter

    @sweep_counter.setter
    def sweep_counter(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'sweep_counter' array.array() must have the type code of 'B'"
            self._sweep_counter = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sweep_counter' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sweep_counter = array.array('B', value)

    @builtins.property
    def ntp_seconds(self):
        """Message field 'ntp_seconds'."""
        return self._ntp_seconds

    @ntp_seconds.setter
    def ntp_seconds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'ntp_seconds' array.array() must have the type code of 'B'"
            self._ntp_seconds = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ntp_seconds' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ntp_seconds = array.array('B', value)

    @builtins.property
    def ntp_split_seconds(self):
        """Message field 'ntp_split_seconds'."""
        return self._ntp_split_seconds

    @ntp_split_seconds.setter
    def ntp_split_seconds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'ntp_split_seconds' array.array() must have the type code of 'B'"
            self._ntp_split_seconds = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ntp_split_seconds' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ntp_split_seconds = array.array('B', value)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)

    @builtins.property
    def data_length(self):
        """Message field 'data_length'."""
        return self._data_length

    @data_length.setter
    def data_length(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data_length' array.array() must have the type code of 'B'"
            self._data_length = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data_length' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data_length = array.array('B', value)
