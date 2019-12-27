// Generated by gencpp from file autoware_can_msgs/MicroBusCanSenderStatus.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CAN_MSGS_MESSAGE_MICROBUSCANSENDERSTATUS_H
#define AUTOWARE_CAN_MSGS_MESSAGE_MICROBUSCANSENDERSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_can_msgs
{
template <class ContainerAllocator>
struct MicroBusCanSenderStatus_
{
  typedef MicroBusCanSenderStatus_<ContainerAllocator> Type;

  MicroBusCanSenderStatus_()
    : header()
    , use_position_checker(false)
    , use_input_steer(false)
    , use_input_drive(false)
    , use_velocity_topic(0)
    , position_check_stop(false)
    , angle_limit_over(false)
    , safety_error_message()  {
    }
  MicroBusCanSenderStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , use_position_checker(false)
    , use_input_steer(false)
    , use_input_drive(false)
    , use_velocity_topic(0)
    , position_check_stop(false)
    , angle_limit_over(false)
    , safety_error_message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _use_position_checker_type;
  _use_position_checker_type use_position_checker;

   typedef uint8_t _use_input_steer_type;
  _use_input_steer_type use_input_steer;

   typedef uint8_t _use_input_drive_type;
  _use_input_drive_type use_input_drive;

   typedef int8_t _use_velocity_topic_type;
  _use_velocity_topic_type use_velocity_topic;

   typedef uint8_t _position_check_stop_type;
  _position_check_stop_type position_check_stop;

   typedef uint8_t _angle_limit_over_type;
  _angle_limit_over_type angle_limit_over;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _safety_error_message_type;
  _safety_error_message_type safety_error_message;





  typedef boost::shared_ptr< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MicroBusCanSenderStatus_

typedef ::autoware_can_msgs::MicroBusCanSenderStatus_<std::allocator<void> > MicroBusCanSenderStatus;

typedef boost::shared_ptr< ::autoware_can_msgs::MicroBusCanSenderStatus > MicroBusCanSenderStatusPtr;
typedef boost::shared_ptr< ::autoware_can_msgs::MicroBusCanSenderStatus const> MicroBusCanSenderStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_can_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'autoware_can_msgs': ['/home/autoware/Autoware_1.11.0_sai_edit/ros/src/msgs/autoware_can_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e657452a5005d3b21b85259e5ca2de3";
  }

  static const char* value(const ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e657452a5005d3bULL;
  static const uint64_t static_value2 = 0x21b85259e5ca2de3ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_can_msgs/MicroBusCanSenderStatus";
  }

  static const char* value(const ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool use_position_checker\n\
bool use_input_steer\n\
bool use_input_drive\n\
int8 use_velocity_topic\n\
bool position_check_stop\n\
bool angle_limit_over\n\
string safety_error_message\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.use_position_checker);
      stream.next(m.use_input_steer);
      stream.next(m.use_input_drive);
      stream.next(m.use_velocity_topic);
      stream.next(m.position_check_stop);
      stream.next(m.angle_limit_over);
      stream.next(m.safety_error_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MicroBusCanSenderStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_can_msgs::MicroBusCanSenderStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "use_position_checker: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_position_checker);
    s << indent << "use_input_steer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_input_steer);
    s << indent << "use_input_drive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_input_drive);
    s << indent << "use_velocity_topic: ";
    Printer<int8_t>::stream(s, indent + "  ", v.use_velocity_topic);
    s << indent << "position_check_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.position_check_stop);
    s << indent << "angle_limit_over: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.angle_limit_over);
    s << indent << "safety_error_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.safety_error_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CAN_MSGS_MESSAGE_MICROBUSCANSENDERSTATUS_H
