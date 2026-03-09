# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aubo_ros2_common:msg/AuboTcpPose.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AuboTcpPose(type):
    """Metaclass of message 'AuboTcpPose'."""

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
            module = import_type_support('aubo_ros2_common')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aubo_ros2_common.msg.AuboTcpPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aubo_tcp_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aubo_tcp_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aubo_tcp_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aubo_tcp_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aubo_tcp_pose

            from aubo_ros2_common.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AuboTcpPose(metaclass=Metaclass_AuboTcpPose):
    """Message class 'AuboTcpPose'."""

    __slots__ = [
        '_target_position',
        '_target_rotation',
        '_actual_position',
        '_actual_rotation',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_position': 'aubo_ros2_common/Vector3',
        'target_rotation': 'aubo_ros2_common/Vector3',
        'actual_position': 'aubo_ros2_common/Vector3',
        'actual_rotation': 'aubo_ros2_common/Vector3',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aubo_ros2_common', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aubo_ros2_common', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aubo_ros2_common', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aubo_ros2_common', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aubo_ros2_common.msg import Vector3
        self.target_position = kwargs.get('target_position', Vector3())
        from aubo_ros2_common.msg import Vector3
        self.target_rotation = kwargs.get('target_rotation', Vector3())
        from aubo_ros2_common.msg import Vector3
        self.actual_position = kwargs.get('actual_position', Vector3())
        from aubo_ros2_common.msg import Vector3
        self.actual_rotation = kwargs.get('actual_rotation', Vector3())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_position != other.target_position:
            return False
        if self.target_rotation != other.target_rotation:
            return False
        if self.actual_position != other.actual_position:
            return False
        if self.actual_rotation != other.actual_rotation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if self._check_fields:
            from aubo_ros2_common.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'target_position' field must be a sub message of type 'Vector3'"
        self._target_position = value

    @builtins.property
    def target_rotation(self):
        """Message field 'target_rotation'."""
        return self._target_rotation

    @target_rotation.setter
    def target_rotation(self, value):
        if self._check_fields:
            from aubo_ros2_common.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'target_rotation' field must be a sub message of type 'Vector3'"
        self._target_rotation = value

    @builtins.property
    def actual_position(self):
        """Message field 'actual_position'."""
        return self._actual_position

    @actual_position.setter
    def actual_position(self, value):
        if self._check_fields:
            from aubo_ros2_common.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'actual_position' field must be a sub message of type 'Vector3'"
        self._actual_position = value

    @builtins.property
    def actual_rotation(self):
        """Message field 'actual_rotation'."""
        return self._actual_rotation

    @actual_rotation.setter
    def actual_rotation(self, value):
        if self._check_fields:
            from aubo_ros2_common.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'actual_rotation' field must be a sub message of type 'Vector3'"
        self._actual_rotation = value
