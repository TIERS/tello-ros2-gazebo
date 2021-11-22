## Running a Tello simulation in [Gazebo](http://gazebosim.org/)

`tello_gazebo` consists of several components:
* `TelloPlugin` simulates a drone, handling takeoff, landing and very simple flight dynamics
* `markers` contains Gazebo models for fiducial markers
* `fiducial.world` is a simple world with a bunch of fiducial markers
* `inject_entity.py` is a script that will read an URDF (ROS) or SDF (Gazebo) file and spawn a model in a running instance of Gazebo
* the built-in camera plugin is used to emulate the Gazebo forward-facing camera


## Installation
#### Install ROS2 Foxy
    https://docs.ros.org/ with the `ros-foxy-desktop` option.
#### Make sure you have gazebo 
    sudo apt install gazebo11 libgazebo11 libgazebo11-dev
#### Add the following
    sudo apt install libasio-dev
    sudo apt install ros-foxy-cv-bridge ros-foxy-camera-calibration-parsers ros-foxy-gazebo-ros-pkgs
    sudo apt install libignition-rendering3 
    pip3 install transformations


#### Build this package
    mkdir -p ~/tello_ros_ws/src
    cd ~/tello_ros_ws/src
    git clone https://github.com/TIERS/tello-ros2-gazebo.git
    cd ..
    source /opt/ros/foxy/setup.bash
    colcon build
#### Run a teleop simulation

    cd ~/tello_ros_ws
    source install/setup.bash
    export GAZEBO_MODEL_PATH=${PWD}/install/tello_gazebo/share/tello_gazebo/models
    source /usr/share/gazebo/setup.sh
    ros2 launch tello_gazebo simple_launch.py
    
You will see a single drone in a blank world.
You can control the drone using the joystick.

If you run into the **No namespace found** error re-set `GAZEBO_MODEL_PATH`:

    export GAZEBO_MODEL_PATH=${PWD}/install/tello_gazebo/share/tello_gazebo/models
    source /usr/share/gazebo/setup.sh
    

