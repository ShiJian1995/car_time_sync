// Generated by gencpp from file camera_control_msgs/SetWhiteBalanceRequest.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETWHITEBALANCEREQUEST_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETWHITEBALANCEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace camera_control_msgs
{
template <class ContainerAllocator>
struct SetWhiteBalanceRequest_
{
  typedef SetWhiteBalanceRequest_<ContainerAllocator> Type;

  SetWhiteBalanceRequest_()
    : balance_ratio_red(0.0)
    , balance_ratio_green(0.0)
    , balance_ratio_blue(0.0)  {
    }
  SetWhiteBalanceRequest_(const ContainerAllocator& _alloc)
    : balance_ratio_red(0.0)
    , balance_ratio_green(0.0)
    , balance_ratio_blue(0.0)  {
  (void)_alloc;
    }



   typedef float _balance_ratio_red_type;
  _balance_ratio_red_type balance_ratio_red;

   typedef float _balance_ratio_green_type;
  _balance_ratio_green_type balance_ratio_green;

   typedef float _balance_ratio_blue_type;
  _balance_ratio_blue_type balance_ratio_blue;





  typedef boost::shared_ptr< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetWhiteBalanceRequest_

typedef ::camera_control_msgs::SetWhiteBalanceRequest_<std::allocator<void> > SetWhiteBalanceRequest;

typedef boost::shared_ptr< ::camera_control_msgs::SetWhiteBalanceRequest > SetWhiteBalanceRequestPtr;
typedef boost::shared_ptr< ::camera_control_msgs::SetWhiteBalanceRequest const> SetWhiteBalanceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.balance_ratio_red == rhs.balance_ratio_red &&
    lhs.balance_ratio_green == rhs.balance_ratio_green &&
    lhs.balance_ratio_blue == rhs.balance_ratio_blue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d091419509df5ea2efedf994e89474af";
  }

  static const char* value(const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd091419509df5ea2ULL;
  static const uint64_t static_value2 = 0xefedf994e89474afULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/SetWhiteBalanceRequest";
  }

  static const char* value(const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The Balance White camera feature allows you to manually correct color shifts so that white objects appear white in images acquired.\n"
"# For this purpose, a digital gain correction can be applied per color channel (red, green, blue).\n"
"# The increase or decrease in intensity is proportional. For example, if the balance ratio for a color is set to 1.2, the intensity of that color is increased by 20 %.\n"
"# NOTE: calling this service will turn off the \"Balance White Auto\"\n"
"\n"
"float32 balance_ratio_red\n"
"float32 balance_ratio_green\n"
"float32 balance_ratio_blue\n"
"\n"
;
  }

  static const char* value(const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.balance_ratio_red);
      stream.next(m.balance_ratio_green);
      stream.next(m.balance_ratio_blue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetWhiteBalanceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::SetWhiteBalanceRequest_<ContainerAllocator>& v)
  {
    s << indent << "balance_ratio_red: ";
    Printer<float>::stream(s, indent + "  ", v.balance_ratio_red);
    s << indent << "balance_ratio_green: ";
    Printer<float>::stream(s, indent + "  ", v.balance_ratio_green);
    s << indent << "balance_ratio_blue: ";
    Printer<float>::stream(s, indent + "  ", v.balance_ratio_blue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETWHITEBALANCEREQUEST_H
