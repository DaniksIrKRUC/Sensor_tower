# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav_messages:msg/RadarConfigurationMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'azimuth_samples'
# Member 'encoder_size'
# Member 'bin_size'
# Member 'range_in_bins'
# Member 'expected_rotation_rate'
# Member 'range_gain'
# Member 'range_offset'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarConfigurationMessage(type):
    """Metaclass of message 'RadarConfigurationMessage'."""

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
                'nav_messages.msg.RadarConfigurationMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_configuration_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_configuration_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_configuration_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_configuration_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_configuration_message

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


class RadarConfigurationMessage(metaclass=Metaclass_RadarConfigurationMessage):
    """Message class 'RadarConfigurationMessage'."""

    __slots__ = [
        '_header',
        '_azimuth_samples',
        '_encoder_size',
        '_bin_size',
        '_range_in_bins',
        '_expected_rotation_rate',
        '_range_gain',
        '_range_offset',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'azimuth_samples': 'sequence<uint8>',
        'encoder_size': 'sequence<uint8>',
        'bin_size': 'sequence<uint8>',
        'range_in_bins': 'sequence<uint8>',
        'expected_rotation_rate': 'sequence<uint8>',
        'range_gain': 'sequence<uint8>',
        'range_offset': 'sequence<uint8>',
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
        self.azimuth_samples = array.array('B', kwargs.get('azimuth_samples', []))
        self.encoder_size = array.array('B', kwargs.get('encoder_size', []))
        self.bin_size = array.array('B', kwargs.get('bin_size', []))
        self.range_in_bins = array.array('B', kwargs.get('range_in_bins', []))
        self.expected_rotation_rate = array.array('B', kwargs.get('expected_rotation_rate', []))
        self.range_gain = array.array('B', kwargs.get('range_gain', []))
        self.range_offset = array.array('B', kwargs.get('range_offset', []))

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
        if self.azimuth_samples != other.azimuth_samples:
            return False
        if self.encoder_size != other.encoder_size:
            return False
        if self.bin_size != other.bin_size:
            return False
        if self.range_in_bins != other.range_in_bins:
            return False
        if self.expected_rotation_rate != other.expected_rotation_rate:
            return False
        if self.range_gain != other.range_gain:
            return False
        if self.range_offset != other.range_offset:
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
    def azimuth_samples(self):
        """Message field 'azimuth_samples'."""
        return self._azimuth_samples

    @azimuth_samples.setter
    def azimuth_samples(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'azimuth_samples' array.array() must have the type code of 'B'"
            self._azimuth_samples = value
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
                "The 'azimuth_samples' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._azimuth_samples = array.array('B', value)

    @builtins.property
    def encoder_size(self):
        """Message field 'encoder_size'."""
        return self._encoder_size

    @encoder_size.setter
    def encoder_size(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'encoder_size' array.array() must have the type code of 'B'"
            self._encoder_size = value
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
                "The 'encoder_size' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._encoder_size = array.array('B', value)

    @builtins.property
    def bin_size(self):
        """Message field 'bin_size'."""
        return self._bin_size

    @bin_size.setter
    def bin_size(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'bin_size' array.array() must have the type code of 'B'"
            self._bin_size = value
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
                "The 'bin_size' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._bin_size = array.array('B', value)

    @builtins.property
    def range_in_bins(self):
        """Message field 'range_in_bins'."""
        return self._range_in_bins

    @range_in_bins.setter
    def range_in_bins(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'range_in_bins' array.array() must have the type code of 'B'"
            self._range_in_bins = value
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
                "The 'range_in_bins' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._range_in_bins = array.array('B', value)

    @builtins.property
    def expected_rotation_rate(self):
        """Message field 'expected_rotation_rate'."""
        return self._expected_rotation_rate

    @expected_rotation_rate.setter
    def expected_rotation_rate(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'expected_rotation_rate' array.array() must have the type code of 'B'"
            self._expected_rotation_rate = value
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
                "The 'expected_rotation_rate' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._expected_rotation_rate = array.array('B', value)

    @builtins.property
    def range_gain(self):
        """Message field 'range_gain'."""
        return self._range_gain

    @range_gain.setter
    def range_gain(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'range_gain' array.array() must have the type code of 'B'"
            self._range_gain = value
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
                "The 'range_gain' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._range_gain = array.array('B', value)

    @builtins.property
    def range_offset(self):
        """Message field 'range_offset'."""
        return self._range_offset

    @range_offset.setter
    def range_offset(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'range_offset' array.array() must have the type code of 'B'"
            self._range_offset = value
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
                "The 'range_offset' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._range_offset = array.array('B', value)
