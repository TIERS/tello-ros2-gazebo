## Running a Tello simulation in [Gazebo](http://gazebosim.org/)

`tello_gazebo` consists of several components:
* `TelloPlugin` simulates a drone, handling takeoff, landing and very simple flight dynamics
* `markers` contains Gazebo models for fiducial markers
* `fiducial.world` is a simple world with a bunch of fiducial markers
* `inject_entity.py` is a script that will read an URDF (ROS) or SDF (Gazebo) file and spawn a model in a running instance of Gazebo
* the built-in camera plugin is used to emulate the Gazebo forward-facing camera


## Installation
#### Install ROS2 Galactic
    https://docs.ros.org/ with the `ros-galactic-desktop` option.
#### Make sure you have gazebo 
    sudo apt install gazebo11 libgazebo11 libgazebo11-dev
#### Add the following
    sudo apt install libasio-dev
    sudo apt install ros-galactic-cv-bridge ros-galactic-camera-calibration-parsers 
    sudo apt install libignition-rendering3 
    pip3 install transformations


#### Build this package
    mkdir -p ~/tello_ros_ws/src
    cd ~/tello_ros_ws/src
    git clone https://github.com/TIERS/tello-ros2-gazebo.git
    cd ..
    source /opt/ros/galactic/setup.bash
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
    

#### Control the drone 
    ros2 service call /drone1/tello_action tello_msgs/TelloAction "{cmd: 'takeoff'}"
    ros2 service call /drone1/tello_action tello_msgs/TelloAction "{cmd: 'land'}"
    ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r __ns:=/drone1




