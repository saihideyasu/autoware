// Generated by gencpp from file autoware_config_msgs/ConfigApproximateNDTMapping.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGAPPROXIMATENDTMAPPING_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGAPPROXIMATENDTMAPPING_H


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
struct ConfigApproximateNDTMapping_
{
  typedef ConfigApproximateNDTMapping_<ContainerAllocator> Type;

  ConfigApproximateNDTMapping_()
    : header()
    , resolution(0.0)
    , step_size(0.0)
    , trans_epsilon(0.0)
    , max_iterations(0)
    , leaf_size(0.0)
    , min_scan_range(0.0)
    , max_scan_range(0.0)
    , min_add_scan_shift(0.0)
    , max_submap_size(0.0)  {
    }
  ConfigApproximateNDTMapping_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , resolution(0.0)
    , step_size(0.0)
    , trans_epsilon(0.0)
    , max_iterations(0)
    , leaf_size(0.0)
    , min_scan_range(0.0)
    , max_scan_range(0.0)
    , min_add_scan_shift(0.0)
    , max_submap_size(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _resolution_type;
  _resolution_type resolution;

   typedef float _step_size_type;
  _step_size_type step_size;

   typedef float _trans_epsilon_type;
  _trans_epsilon_type trans_epsilon;

   typedef int32_t _max_iterations_type;
  _max_iterations_type max_iterations;

   typedef float _leaf_size_type;
  _leaf_size_type leaf_size;

   typedef float _min_scan_range_type;
  _min_scan_range_type min_scan_range;

   typedef float _max_scan_range_type;
  _max_scan_range_type max_scan_range;

   typedef float _min_add_scan_shift_type;
  _min_add_scan_shift_type min_add_scan_shift;

   typedef float _max_submap_size_type;
  _max_submap_size_type max_submap_size;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigApproximateNDTMapping_

typedef ::autoware_config_msgs::ConfigApproximateNDTMapping_<std::allocator<void> > ConfigApproximateNDTMapping;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigApproximateNDTMapping > ConfigApproximateNDTMappingPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigApproximateNDTMapping const> ConfigApproximateNDTMappingConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
{
  static const char* value()
  {
    return "687f2daa2d34290b27e1b1cbc58023a7";
  }

  static const char* value(const ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x687f2daa2d34290bULL;
  static const uint64_t static_value2 = 0x27e1b1cbc58023a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigApproximateNDTMapping";
  }

  static const char* value(const ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 resolution\n\
float32 step_size\n\
float32 trans_epsilon\n\
int32 max_iterations\n\
float32 leaf_size\n\
float32 min_scan_range\n\
float32 max_scan_range\n\
float32 min_add_scan_shift\n\
float32 max_submap_size\n\
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

  static const char* value(const ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.resolution);
      stream.next(m.step_size);
      stream.next(m.trans_epsilon);
      stream.next(m.max_iterations);
      stream.next(m.leaf_size);
      stream.next(m.min_scan_range);
      stream.next(m.max_scan_range);
      stream.next(m.min_add_scan_shift);
      stream.next(m.max_submap_size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigApproximateNDTMapping_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigApproximateNDTMapping_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "resolution: ";
    Printer<float>::stream(s, indent + "  ", v.resolution);
    s << indent << "step_size: ";
    Printer<float>::stream(s, indent + "  ", v.step_size);
    s << indent << "trans_epsilon: ";
    Printer<float>::stream(s, indent + "  ", v.trans_epsilon);
    s << indent << "max_iterations: ";
    Printer<int32_t>::stream(s, indent + "  ", v.max_iterations);
    s << indent << "leaf_size: ";
    Printer<float>::stream(s, indent + "  ", v.leaf_size);
    s << indent << "min_scan_range: ";
    Printer<float>::stream(s, indent + "  ", v.min_scan_range);
    s << indent << "max_scan_range: ";
    Printer<float>::stream(s, indent + "  ", v.max_scan_range);
    s << indent << "min_add_scan_shift: ";
    Printer<float>::stream(s, indent + "  ", v.min_add_scan_shift);
    s << indent << "max_submap_size: ";
    Printer<float>::stream(s, indent + "  ", v.max_submap_size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGAPPROXIMATENDTMAPPING_H
