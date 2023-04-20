# Install script for directory: /home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sj/code/car_time_sync/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dnb_msgs/msg" TYPE FILE FILES
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/ComponentStatus.msg"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/StringMultiArray.msg"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/Argument.msg"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/Program.msg"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/KeTopStatus.msg"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/ToastMessage.msg"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/msg/ToastTranslation.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dnb_msgs/srv" TYPE FILE FILES
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/srv/SetString.srv"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/srv/SetInt32.srv"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/srv/GetProgramsList.srv"
    "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/srv/RunProgramWithArguments.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dnb_msgs/cmake" TYPE FILE FILES "/home/sj/code/car_time_sync/build/dragandbot_common/dnb_msgs/catkin_generated/installspace/dnb_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/sj/code/car_time_sync/devel/include/dnb_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/sj/code/car_time_sync/devel/share/roseus/ros/dnb_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/sj/code/car_time_sync/devel/share/common-lisp/ros/dnb_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/sj/code/car_time_sync/devel/share/gennodejs/ros/dnb_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/sj/code/car_time_sync/devel/lib/python2.7/dist-packages/dnb_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/sj/code/car_time_sync/devel/lib/python2.7/dist-packages/dnb_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sj/code/car_time_sync/build/dragandbot_common/dnb_msgs/catkin_generated/installspace/dnb_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dnb_msgs/cmake" TYPE FILE FILES "/home/sj/code/car_time_sync/build/dragandbot_common/dnb_msgs/catkin_generated/installspace/dnb_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dnb_msgs/cmake" TYPE FILE FILES
    "/home/sj/code/car_time_sync/build/dragandbot_common/dnb_msgs/catkin_generated/installspace/dnb_msgsConfig.cmake"
    "/home/sj/code/car_time_sync/build/dragandbot_common/dnb_msgs/catkin_generated/installspace/dnb_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dnb_msgs" TYPE FILE FILES "/home/sj/code/car_time_sync/src/dragandbot_common/dnb_msgs/package.xml")
endif()

