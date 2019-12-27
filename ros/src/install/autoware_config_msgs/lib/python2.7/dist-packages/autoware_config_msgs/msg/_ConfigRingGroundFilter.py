# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autoware_config_msgs/ConfigRingGroundFilter.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ConfigRingGroundFilter(genpy.Message):
  _md5sum = "35af9608c7f7db50fdce10fd09cce39f"
  _type = "autoware_config_msgs/ConfigRingGroundFilter"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string sensor_model
float32 sensor_height
float32 max_slope
float32 vertical_thres
"""
  __slots__ = ['sensor_model','sensor_height','max_slope','vertical_thres']
  _slot_types = ['string','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sensor_model,sensor_height,max_slope,vertical_thres

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ConfigRingGroundFilter, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.sensor_model is None:
        self.sensor_model = ''
      if self.sensor_height is None:
        self.sensor_height = 0.
      if self.max_slope is None:
        self.max_slope = 0.
      if self.vertical_thres is None:
        self.vertical_thres = 0.
    else:
      self.sensor_model = ''
      self.sensor_height = 0.
      self.max_slope = 0.
      self.vertical_thres = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.sensor_model
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3f().pack(_x.sensor_height, _x.max_slope, _x.vertical_thres))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sensor_model = str[start:end].decode('utf-8')
      else:
        self.sensor_model = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.sensor_height, _x.max_slope, _x.vertical_thres,) = _get_struct_3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.sensor_model
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3f().pack(_x.sensor_height, _x.max_slope, _x.vertical_thres))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sensor_model = str[start:end].decode('utf-8')
      else:
        self.sensor_model = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.sensor_height, _x.max_slope, _x.vertical_thres,) = _get_struct_3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
