// Auto-generated. Do not edit!

// (in-package autoware_config_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ConfigTemporaryStopper {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.search_distance = null;
      this.acceleration = null;
      this.number_of_zeros_ahead = null;
      this.number_of_zeros_behind = null;
      this.stop_speed_threshold = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('search_distance')) {
        this.search_distance = initObj.search_distance
      }
      else {
        this.search_distance = 0.0;
      }
      if (initObj.hasOwnProperty('acceleration')) {
        this.acceleration = initObj.acceleration
      }
      else {
        this.acceleration = 0.0;
      }
      if (initObj.hasOwnProperty('number_of_zeros_ahead')) {
        this.number_of_zeros_ahead = initObj.number_of_zeros_ahead
      }
      else {
        this.number_of_zeros_ahead = 0;
      }
      if (initObj.hasOwnProperty('number_of_zeros_behind')) {
        this.number_of_zeros_behind = initObj.number_of_zeros_behind
      }
      else {
        this.number_of_zeros_behind = 0;
      }
      if (initObj.hasOwnProperty('stop_speed_threshold')) {
        this.stop_speed_threshold = initObj.stop_speed_threshold
      }
      else {
        this.stop_speed_threshold = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ConfigTemporaryStopper
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [search_distance]
    bufferOffset = _serializer.float32(obj.search_distance, buffer, bufferOffset);
    // Serialize message field [acceleration]
    bufferOffset = _serializer.float32(obj.acceleration, buffer, bufferOffset);
    // Serialize message field [number_of_zeros_ahead]
    bufferOffset = _serializer.int32(obj.number_of_zeros_ahead, buffer, bufferOffset);
    // Serialize message field [number_of_zeros_behind]
    bufferOffset = _serializer.int32(obj.number_of_zeros_behind, buffer, bufferOffset);
    // Serialize message field [stop_speed_threshold]
    bufferOffset = _serializer.float64(obj.stop_speed_threshold, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ConfigTemporaryStopper
    let len;
    let data = new ConfigTemporaryStopper(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [search_distance]
    data.search_distance = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [acceleration]
    data.acceleration = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [number_of_zeros_ahead]
    data.number_of_zeros_ahead = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [number_of_zeros_behind]
    data.number_of_zeros_behind = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [stop_speed_threshold]
    data.stop_speed_threshold = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'autoware_config_msgs/ConfigTemporaryStopper';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '539a543caae5914ad6ee1ae5741c9991';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    float32 search_distance
    float32 acceleration
    int32 number_of_zeros_ahead
    int32 number_of_zeros_behind
    float64 stop_speed_threshold
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ConfigTemporaryStopper(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.search_distance !== undefined) {
      resolved.search_distance = msg.search_distance;
    }
    else {
      resolved.search_distance = 0.0
    }

    if (msg.acceleration !== undefined) {
      resolved.acceleration = msg.acceleration;
    }
    else {
      resolved.acceleration = 0.0
    }

    if (msg.number_of_zeros_ahead !== undefined) {
      resolved.number_of_zeros_ahead = msg.number_of_zeros_ahead;
    }
    else {
      resolved.number_of_zeros_ahead = 0
    }

    if (msg.number_of_zeros_behind !== undefined) {
      resolved.number_of_zeros_behind = msg.number_of_zeros_behind;
    }
    else {
      resolved.number_of_zeros_behind = 0
    }

    if (msg.stop_speed_threshold !== undefined) {
      resolved.stop_speed_threshold = msg.stop_speed_threshold;
    }
    else {
      resolved.stop_speed_threshold = 0.0
    }

    return resolved;
    }
};

module.exports = ConfigTemporaryStopper;
