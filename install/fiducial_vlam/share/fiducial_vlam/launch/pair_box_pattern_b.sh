

echo Starting flight pattern

function topic() {
#ros2 topic pub -1 /drone1/cmd_vel geometry_msgs/Twist "{linear: {$1}, angular: {x: 0.0, y: 0.0, z: 0.0}}"
ros2 topic pub -1 /drone2/cmd_vel geometry_msgs/Twist "{linear: {$1}, angular: {x: 0.0, y: 0.0, z: 0.0}}"
}

function cmd() {
#ros2 service call /drone1/tello_action tello_msgs/TelloAction "{cmd: '$1'}"
ros2 service call /drone2/tello_action tello_msgs/TelloAction "{cmd: '$1'}"
sleep $2
}

function move_stop() {
topic "$1"
sleep $2
topic "x: 0.0, y: 0.0, z: 0.0"
sleep 0.1
}

function move_square() {
move_stop "x: 0.0, y: 0.3, z: 0.0" 0.1
move_stop "x: -0.3, y: 0.0, z: 0.0" 0.10
move_stop "x: 0.0, y: -0.3, z: 0.0" 0.10
move_stop "x: 0.3, y: 0.0, z: 0.0" 0.10
}

sleep 4
echo start
cmd "takeoff" 5

move_stop "x: 0.0, y: 0.0, z: 0.15" 0.0
move_stop "x: 0.15, y: 0.0, z: 0.0" 0.1

echo continue

move_square
move_square

cmd "land" 5

