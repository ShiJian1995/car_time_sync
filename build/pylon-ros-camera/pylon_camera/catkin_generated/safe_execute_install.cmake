execute_process(COMMAND "/home/sj/code/car_time_sync/build/pylon-ros-camera/pylon_camera/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/sj/code/car_time_sync/build/pylon-ros-camera/pylon_camera/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
