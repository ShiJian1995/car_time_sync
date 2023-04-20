// Generated by gencpp from file dnb_msgs/Program.msg
// DO NOT EDIT!


#ifndef DNB_MSGS_MESSAGE_PROGRAM_H
#define DNB_MSGS_MESSAGE_PROGRAM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dnb_msgs/Argument.h>

namespace dnb_msgs
{
template <class ContainerAllocator>
struct Program_
{
  typedef Program_<ContainerAllocator> Type;

  Program_()
    : name()
    , arguments()  {
    }
  Program_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , arguments(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::vector< ::dnb_msgs::Argument_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::dnb_msgs::Argument_<ContainerAllocator> >> _arguments_type;
  _arguments_type arguments;





  typedef boost::shared_ptr< ::dnb_msgs::Program_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dnb_msgs::Program_<ContainerAllocator> const> ConstPtr;

}; // struct Program_

typedef ::dnb_msgs::Program_<std::allocator<void> > Program;

typedef boost::shared_ptr< ::dnb_msgs::Program > ProgramPtr;
typedef boost::shared_ptr< ::dnb_msgs::Program const> ProgramConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dnb_msgs::Program_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dnb_msgs::Program_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dnb_msgs::Program_<ContainerAllocator1> & lhs, const ::dnb_msgs::Program_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.arguments == rhs.arguments;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dnb_msgs::Program_<ContainerAllocator1> & lhs, const ::dnb_msgs::Program_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dnb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::Program_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::Program_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::Program_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::Program_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::Program_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::Program_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dnb_msgs::Program_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d51239b0eb86a694c9fb7b883a96b58";
  }

  static const char* value(const ::dnb_msgs::Program_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d51239b0eb86a69ULL;
  static const uint64_t static_value2 = 0x4c9fb7b883a96b58ULL;
};

template<class ContainerAllocator>
struct DataType< ::dnb_msgs::Program_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dnb_msgs/Program";
  }

  static const char* value(const ::dnb_msgs::Program_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dnb_msgs::Program_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"Argument[] arguments\n"
"================================================================================\n"
"MSG: dnb_msgs/Argument\n"
"string name\n"
"string type\n"
"string value\n"
;
  }

  static const char* value(const ::dnb_msgs::Program_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dnb_msgs::Program_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.arguments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Program_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dnb_msgs::Program_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dnb_msgs::Program_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "arguments[]" << std::endl;
    for (size_t i = 0; i < v.arguments.size(); ++i)
    {
      s << indent << "  arguments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dnb_msgs::Argument_<ContainerAllocator> >::stream(s, indent + "    ", v.arguments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DNB_MSGS_MESSAGE_PROGRAM_H
