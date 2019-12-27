// Generated by gencpp from file autoware_config_msgs/ConfigImuTidy.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGIMUTIDY_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGIMUTIDY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigImuTidy_
{
  typedef ConfigImuTidy_<ContainerAllocator> Type;

  ConfigImuTidy_()
    : header()
    , lowpass_filter_weight(0.0)  {
    }
  ConfigImuTidy_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lowpass_filter_weight(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _lowpass_filter_weight_type;
  _lowpass_filter_weight_type lowpass_filter_weight;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigImuTidy_

typedef ::autoware_config_msgs::ConfigImuTidy_<std::allocator<void> > ConfigImuTidy;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigImuTidy > ConfigImuTidyPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigImuTidy const> ConfigImuTidyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'autoware_config_msgs': ['/home/autoware/Autoware_1.11.0_sai_edit/ros/src/msgs/autoware_config_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "476d31d2c910cd7236e351b47ec67fcd";
  }

  static const char* value(const ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x476d31d2c910cd72ULL;
  static const uint64_t static_value2 = 0x36e351b47ec67fcdULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigImuTidy";
  }

  static const char* value(const ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 lowpass_filter_weight\n\
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

  static const char* value(const ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lowpass_filter_weight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigImuTidy_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigImuTidy_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lowpass_filter_weight: ";
    Printer<double>::stream(s, indent + "  ", v.lowpass_filter_weight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGIMUTIDY_H
