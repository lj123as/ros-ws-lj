// Generated by gencpp from file pj_morse/greetingResponse.msg
// DO NOT EDIT!


#ifndef PJ_MORSE_MESSAGE_GREETINGRESPONSE_H
#define PJ_MORSE_MESSAGE_GREETINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pj_morse
{
template <class ContainerAllocator>
struct greetingResponse_
{
  typedef greetingResponse_<ContainerAllocator> Type;

  greetingResponse_()
    : feedback()  {
    }
  greetingResponse_(const ContainerAllocator& _alloc)
    : feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::pj_morse::greetingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pj_morse::greetingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct greetingResponse_

typedef ::pj_morse::greetingResponse_<std::allocator<void> > greetingResponse;

typedef boost::shared_ptr< ::pj_morse::greetingResponse > greetingResponsePtr;
typedef boost::shared_ptr< ::pj_morse::greetingResponse const> greetingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pj_morse::greetingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pj_morse::greetingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pj_morse

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pj_morse': ['/home/lj/catkin_ws/src/pj_morse/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pj_morse::greetingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pj_morse::greetingResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pj_morse::greetingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pj_morse::greetingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pj_morse::greetingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pj_morse::greetingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pj_morse::greetingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c14cdf907e5c7c7fd47292add15660f0";
  }

  static const char* value(const ::pj_morse::greetingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc14cdf907e5c7c7fULL;
  static const uint64_t static_value2 = 0xd47292add15660f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::pj_morse::greetingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pj_morse/greetingResponse";
  }

  static const char* value(const ::pj_morse::greetingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pj_morse::greetingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string feedback\n\
";
  }

  static const char* value(const ::pj_morse::greetingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pj_morse::greetingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct greetingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pj_morse::greetingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pj_morse::greetingResponse_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PJ_MORSE_MESSAGE_GREETINGRESPONSE_H
