#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/sj/code/car_time_sync/src/pylon-ros-camera/pylon_camera"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sj/code/car_time_sync/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sj/code/car_time_sync/install/lib/python2.7/dist-packages:/home/sj/code/car_time_sync/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sj/code/car_time_sync/build" \
    "/usr/bin/python2" \
    "/home/sj/code/car_time_sync/src/pylon-ros-camera/pylon_camera/setup.py" \
     \
    build --build-base "/home/sj/code/car_time_sync/build/pylon-ros-camera/pylon_camera" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/sj/code/car_time_sync/install" --install-scripts="/home/sj/code/car_time_sync/install/bin"
