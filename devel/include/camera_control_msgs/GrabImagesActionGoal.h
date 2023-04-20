// Generated by gencpp from file camera_control_msgs/GrabImagesActionGoal.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTIONGOAL_H
#define CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <camera_control_msgs/GrabImagesGoal.h>

namespace camera_control_msgs
{
template <class ContainerAllocator>
struct GrabImagesActionGoal_
{
  typedef GrabImagesActionGoal_<ContainerAllocator> Type;

  GrabImagesActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  GrabImagesActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GrabImagesActionGoal_

typedef ::camera_control_msgs::GrabImagesActionGoal_<std::allocator<void> > GrabImagesActionGoal;

typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesActionGoal > GrabImagesActionGoalPtr;
typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesActionGoal const> GrabImagesActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator1> & lhs, const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator1> & lhs, const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "105715bcaded1c63ade78037f4d890dd";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x105715bcaded1c63ULL;
  static const uint64_t static_value2 = 0xade78037f4d890ddULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/GrabImagesActionGoal";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"GrabImagesGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: camera_control_msgs/GrabImagesGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##########################################\n"
"################## GOAL ##################\n"
"##########################################\n"
"\n"
"# Flag which indicates if the exposure times are provided and hence should be\n"
"# set before grabbing\n"
"bool exposure_given\n"
"\n"
"# Only relevant, if exposure_given is true:\n"
"# The list of target exposure times in microseconds.\n"
"# It is possible to grab only one image as well as several images with\n"
"# different exposure times. This values can be overriden from the brightness\n"
"# search, in case that the flag exposure_fixed is not true.\n"
"float32[] exposure_times\n"
"\n"
"# Flag which indicates if the gain is provided and hence should be set before\n"
"# grabbing\n"
"bool gain_given\n"
"\n"
"# Only relevant, if gain_given is true:\n"
"# The target gain in percent of the maximal value the camera supports.\n"
"# For USB-Cameras, the gain is in dB, for GigE-Cameras it is given in so\n"
"# called 'device specific units'. This value can be overriden from the\n"
"# brightness search, in case that the gain_fixed flag is set to false.\n"
"float32[] gain_values\n"
"\n"
"# Flag which indicates if the gamma value is provided and hence should be set\n"
"# before grabbing\n"
"bool gamma_given\n"
"\n"
"# Only relevant, if gain_given is true:\n"
"# Gamma correction of pixel intensity.\n"
"# Adjusts the brightness of the pixel values output by the camera's sensor\n"
"# to account for a non-linearity in the human perception of brightness or\n"
"# of the display system (such as CRT).\n"
"float32[] gamma_values\n"
"\n"
"# Flag which indicates if the brightness values are provided and hence should\n"
"# be set before grabbing\n"
"bool brightness_given\n"
"\n"
"# Only relevant, if brightness_given is true:\n"
"# The average intensity values of the images. It depends the exposure time\n"
"# as well as the gain setting.\n"
"float32[] brightness_values\n"
"\n"
"# Only relevant, if brightness_given is true:\n"
"# If the camera should try reach the desired brightness, at least one of the\n"
"# following flags MUST be set. If both are set, the interface will use the\n"
"# profile that tries to keep the gain at minimum to reduce white noise.\n"
"# 'exposure_auto' will adapt the exposure time to reach the brightness, wheras\n"
"# 'gain_auto' does so by adapting the gain. If one of these flags is set to\n"
"# false, the connected property will be kept fix.\n"
"# In most of the cases trying to reach a target brightness only by varying the\n"
"# gain and keeping the exposure time fix is not a good approach, because the\n"
"# exposure range is many times higher than the gain range.\n"
"bool exposure_auto\n"
"bool gain_auto\n"
"\n"
;
  }

  static const char* value(const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GrabImagesActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTIONGOAL_H
