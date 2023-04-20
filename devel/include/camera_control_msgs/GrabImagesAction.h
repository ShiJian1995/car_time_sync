// Generated by gencpp from file camera_control_msgs/GrabImagesAction.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTION_H
#define CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <camera_control_msgs/GrabImagesActionGoal.h>
#include <camera_control_msgs/GrabImagesActionResult.h>
#include <camera_control_msgs/GrabImagesActionFeedback.h>

namespace camera_control_msgs
{
template <class ContainerAllocator>
struct GrabImagesAction_
{
  typedef GrabImagesAction_<ContainerAllocator> Type;

  GrabImagesAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  GrabImagesAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::camera_control_msgs::GrabImagesActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::camera_control_msgs::GrabImagesActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const> ConstPtr;

}; // struct GrabImagesAction_

typedef ::camera_control_msgs::GrabImagesAction_<std::allocator<void> > GrabImagesAction;

typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction > GrabImagesActionPtr;
typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction const> GrabImagesActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator1> & lhs, const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator1> & lhs, const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f72cffca6db92ca17bcc18dc6f70610";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f72cffca6db92caULL;
  static const uint64_t static_value2 = 0x17bcc18dc6f70610ULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/GrabImagesAction";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"GrabImagesActionGoal action_goal\n"
"GrabImagesActionResult action_result\n"
"GrabImagesActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: camera_control_msgs/GrabImagesActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
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
"\n"
"================================================================================\n"
"MSG: camera_control_msgs/GrabImagesActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"GrabImagesResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: camera_control_msgs/GrabImagesResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##########################################\n"
"################# RESULT #################\n"
"##########################################\n"
"\n"
"# The resulting images with the inquired image intensity settings.\n"
"# The size of the vector equals the size of the exposure_times or the\n"
"# brightness_values-vector\n"
"sensor_msgs/Image[] images\n"
"\n"
"# The CameraInfo obejct describing the camera properties for the above image\n"
"# sequence. Static in many cases, but can also support variable binning setting\n"
"sensor_msgs/CameraInfo cam_info\n"
"\n"
"# The reached values of the images e.g. the values that were set to the camera\n"
"# before the grab\n"
"float32[] reached_exposure_times\n"
"\n"
"float32[] reached_brightness_values\n"
"\n"
"float32[] reached_gain_values\n"
"\n"
"float32[] reached_gamma_values\n"
"\n"
"# Flag which indicates the success of the grabbing action\n"
"# In case of failure, the images-vector contains only the images, that could be\n"
"# grabbed before the failure occurred.\n"
"bool success\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/CameraInfo\n"
"# This message defines meta information for a camera. It should be in a\n"
"# camera namespace on topic \"camera_info\" and accompanied by up to five\n"
"# image topics named:\n"
"#\n"
"#   image_raw - raw data from the camera driver, possibly Bayer encoded\n"
"#   image            - monochrome, distorted\n"
"#   image_color      - color, distorted\n"
"#   image_rect       - monochrome, rectified\n"
"#   image_rect_color - color, rectified\n"
"#\n"
"# The image_pipeline contains packages (image_proc, stereo_image_proc)\n"
"# for producing the four processed image topics from image_raw and\n"
"# camera_info. The meaning of the camera parameters are described in\n"
"# detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.\n"
"#\n"
"# The image_geometry package provides a user-friendly interface to\n"
"# common operations using this meta information. If you want to, e.g.,\n"
"# project a 3d point into image coordinates, we strongly recommend\n"
"# using image_geometry.\n"
"#\n"
"# If the camera is uncalibrated, the matrices D, K, R, P should be left\n"
"# zeroed out. In particular, clients may assume that K[0] == 0.0\n"
"# indicates an uncalibrated camera.\n"
"\n"
"#######################################################################\n"
"#                     Image acquisition info                          #\n"
"#######################################################################\n"
"\n"
"# Time of image acquisition, camera coordinate frame ID\n"
"Header header    # Header timestamp should be acquisition time of image\n"
"                 # Header frame_id should be optical frame of camera\n"
"                 # origin of frame should be optical center of camera\n"
"                 # +x should point to the right in the image\n"
"                 # +y should point down in the image\n"
"                 # +z should point into the plane of the image\n"
"\n"
"\n"
"#######################################################################\n"
"#                      Calibration Parameters                         #\n"
"#######################################################################\n"
"# These are fixed during camera calibration. Their values will be the #\n"
"# same in all messages until the camera is recalibrated. Note that    #\n"
"# self-calibrating systems may \"recalibrate\" frequently.              #\n"
"#                                                                     #\n"
"# The internal parameters can be used to warp a raw (distorted) image #\n"
"# to:                                                                 #\n"
"#   1. An undistorted image (requires D and K)                        #\n"
"#   2. A rectified image (requires D, K, R)                           #\n"
"# The projection matrix P projects 3D points into the rectified image.#\n"
"#######################################################################\n"
"\n"
"# The image dimensions with which the camera was calibrated. Normally\n"
"# this will be the full camera resolution in pixels.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# The distortion model used. Supported models are listed in\n"
"# sensor_msgs/distortion_models.h. For most cameras, \"plumb_bob\" - a\n"
"# simple model of radial and tangential distortion - is sufficient.\n"
"string distortion_model\n"
"\n"
"# The distortion parameters, size depending on the distortion model.\n"
"# For \"plumb_bob\", the 5 parameters are: (k1, k2, t1, t2, k3).\n"
"float64[] D\n"
"\n"
"# Intrinsic camera matrix for the raw (distorted) images.\n"
"#     [fx  0 cx]\n"
"# K = [ 0 fy cy]\n"
"#     [ 0  0  1]\n"
"# Projects 3D points in the camera coordinate frame to 2D pixel\n"
"# coordinates using the focal lengths (fx, fy) and principal point\n"
"# (cx, cy).\n"
"float64[9]  K # 3x3 row-major matrix\n"
"\n"
"# Rectification matrix (stereo cameras only)\n"
"# A rotation matrix aligning the camera coordinate system to the ideal\n"
"# stereo image plane so that epipolar lines in both stereo images are\n"
"# parallel.\n"
"float64[9]  R # 3x3 row-major matrix\n"
"\n"
"# Projection/camera matrix\n"
"#     [fx'  0  cx' Tx]\n"
"# P = [ 0  fy' cy' Ty]\n"
"#     [ 0   0   1   0]\n"
"# By convention, this matrix specifies the intrinsic (camera) matrix\n"
"#  of the processed (rectified) image. That is, the left 3x3 portion\n"
"#  is the normal camera intrinsic matrix for the rectified image.\n"
"# It projects 3D points in the camera coordinate frame to 2D pixel\n"
"#  coordinates using the focal lengths (fx', fy') and principal point\n"
"#  (cx', cy') - these may differ from the values in K.\n"
"# For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will\n"
"#  also have R = the identity and P[1:3,1:3] = K.\n"
"# For a stereo pair, the fourth column [Tx Ty 0]' is related to the\n"
"#  position of the optical center of the second camera in the first\n"
"#  camera's frame. We assume Tz = 0 so both cameras are in the same\n"
"#  stereo image plane. The first camera always has Tx = Ty = 0. For\n"
"#  the right (second) camera of a horizontal stereo pair, Ty = 0 and\n"
"#  Tx = -fx' * B, where B is the baseline between the cameras.\n"
"# Given a 3D point [X Y Z]', the projection (x, y) of the point onto\n"
"#  the rectified image is given by:\n"
"#  [u v w]' = P * [X Y Z 1]'\n"
"#         x = u / w\n"
"#         y = v / w\n"
"#  This holds for both images of a stereo pair.\n"
"float64[12] P # 3x4 row-major matrix\n"
"\n"
"\n"
"#######################################################################\n"
"#                      Operational Parameters                         #\n"
"#######################################################################\n"
"# These define the image region actually captured by the camera       #\n"
"# driver. Although they affect the geometry of the output image, they #\n"
"# may be changed freely without recalibrating the camera.             #\n"
"#######################################################################\n"
"\n"
"# Binning refers here to any camera setting which combines rectangular\n"
"#  neighborhoods of pixels into larger \"super-pixels.\" It reduces the\n"
"#  resolution of the output image to\n"
"#  (width / binning_x) x (height / binning_y).\n"
"# The default values binning_x = binning_y = 0 is considered the same\n"
"#  as binning_x = binning_y = 1 (no subsampling).\n"
"uint32 binning_x\n"
"uint32 binning_y\n"
"\n"
"# Region of interest (subwindow of full camera resolution), given in\n"
"#  full resolution (unbinned) image coordinates. A particular ROI\n"
"#  always denotes the same window of pixels on the camera sensor,\n"
"#  regardless of binning settings.\n"
"# The default setting of roi (all values 0) is considered the same as\n"
"#  full resolution (roi.width = width, roi.height = height).\n"
"RegionOfInterest roi\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/RegionOfInterest\n"
"# This message is used to specify a region of interest within an image.\n"
"#\n"
"# When used to specify the ROI setting of the camera when the image was\n"
"# taken, the height and width fields should either match the height and\n"
"# width fields for the associated image; or height = width = 0\n"
"# indicates that the full resolution image was captured.\n"
"\n"
"uint32 x_offset  # Leftmost pixel of the ROI\n"
"                 # (0 if the ROI includes the left edge of the image)\n"
"uint32 y_offset  # Topmost pixel of the ROI\n"
"                 # (0 if the ROI includes the top edge of the image)\n"
"uint32 height    # Height of ROI\n"
"uint32 width     # Width of ROI\n"
"\n"
"# True if a distinct rectified ROI should be calculated from the \"raw\"\n"
"# ROI in this message. Typically this should be False if the full image\n"
"# is captured (ROI not used), and True if a subwindow is captured (ROI\n"
"# used).\n"
"bool do_rectify\n"
"\n"
"================================================================================\n"
"MSG: camera_control_msgs/GrabImagesActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"GrabImagesFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: camera_control_msgs/GrabImagesFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##########################################\n"
"################ FEEDBACK ################\n"
"##########################################\n"
"# The number of images already taken\n"
"int32 curr_nr_images_taken\n"
"\n"
;
  }

  static const char* value(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GrabImagesAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTION_H
