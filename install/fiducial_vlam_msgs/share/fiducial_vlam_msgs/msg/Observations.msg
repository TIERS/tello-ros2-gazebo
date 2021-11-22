# An observation of several markers

# the header from the image
std_msgs/Header header

# the CameraInfo for the camera that captured the image
sensor_msgs/CameraInfo camera_info

# A list of locations of marker corners in the image
Observation[] observations