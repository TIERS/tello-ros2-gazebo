#ifndef FIDUCIAL_VLAM_VLOC_CONTEXT_HPP
#define FIDUCIAL_VLAM_VLOC_CONTEXT_HPP

#include <string>

#include "ros2_shared/context_macros.hpp"
#include "transform_with_covariance.hpp"

namespace rclcpp
{
  class Node;
}

namespace fiducial_vlam
{
#define VLOC_ALL_PARAMS \
  CXT_MACRO_MEMBER(       /* topic for publishing fiducial observations  */ \
  fiducial_observations_pub_topic,  \
  std::string, "/fiducial_observations") \
  CXT_MACRO_MEMBER(       /* topic for publishing camera pose  */ \
  camera_pose_pub_topic,  \
  std::string, "camera_pose") \
  CXT_MACRO_MEMBER(       /* topic for publishing base pose  */ \
  base_pose_pub_topic,  \
  std::string, "base_pose") \
  CXT_MACRO_MEMBER(       /* topic for publishing camera odometry  */ \
  camera_odometry_pub_topic,  \
  std::string, "camera_odom") \
  CXT_MACRO_MEMBER(       /* topic for publishing base odometry  */ \
  base_odometry_pub_topic,  \
  std::string, "base_odom") \
  CXT_MACRO_MEMBER(       /* topic for republishing the image with axes added to fiducial markers  */\
  image_marked_pub_topic,  \
  std::string, "image_marked") \
  \
  CXT_MACRO_MEMBER(       /* topic for subscription to fiducial_vlam_msgs::msg::Map  */\
  fiducial_map_sub_topic,  \
  std::string, "/fiducial_map") \
  CXT_MACRO_MEMBER(       /* topic for subscription to sensor_msgs::msg::CameraInfo associated with the image  */ \
  camera_info_sub_topic,  \
  std::string, "camera_info") \
  CXT_MACRO_MEMBER(       /* topic for subscription to sensor_msgs::msg::Image */ \
  image_raw_sub_topic,  \
  std::string, "image_raw") \
  \
  CXT_MACRO_MEMBER(       /* frame_id for camera pose and tf messages - normally "map"  */ \
  map_frame_id,  \
  std::string, "map") \
  CXT_MACRO_MEMBER(       /* frame_id for the child in the camera tf message  */\
  camera_frame_id,  \
  std::string, "camera") \
  CXT_MACRO_MEMBER(       /* frame_id for the child in the base_link tf message  */\
  base_frame_id,  \
  std::string, "base_link") \
  \
  CXT_MACRO_MEMBER(       /* non-zero => publish the pose of the camera at every frame  */ \
  publish_camera_pose,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish the pose of the base at every frame  */ \
  publish_base_pose,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish the tf of the camera at every frame  */ \
  publish_tfs,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish the camera tf/pose as determined by each visible marker  */ \
  publish_tfs_per_marker,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish the odometry of the camera at every frame  */ \
  publish_camera_odom,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish the odometry of the base at every frame  */ \
  publish_base_odom,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish the image_marked at every frame  */ \
  publish_image_marked,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => debug mode, helpful for dealing with rviz when playing bags.  */ \
  stamp_msgs_with_current_time,  \
  int, 0) \
  \
  CXT_MACRO_MEMBER(       /* camera=>baselink transform component */ \
  t_camera_base_x,  \
  double, 0.) \
  CXT_MACRO_MEMBER(       /* camera=>baselink transform component */ \
  t_camera_base_y,  \
  double, 0.) \
  CXT_MACRO_MEMBER(       /* camera=>baselink transform component */ \
  t_camera_base_z, \
  double, -0.035) \
  CXT_MACRO_MEMBER(       /* camera=>baselink transform component */ \
  t_camera_base_roll, \
  double, TF2SIMD_HALF_PI) \
  CXT_MACRO_MEMBER(       /* camera=>baselink transform component */ \
  t_camera_base_pitch,  \
  double, -TF2SIMD_HALF_PI) \
  CXT_MACRO_MEMBER(       /* camera=>baselink transform component */ \
  t_camera_base_yaw, \
  double, 0.) \
  \
  CXT_MACRO_MEMBER(       /* subscribe to camera_info message with best_effort (gazebo camera, tello_driver)  */ \
  sub_camera_info_best_effort_not_reliable, \
  int, 1) \
  CXT_MACRO_MEMBER(       /* subscribe to image_raw message with best_effort (gazebo camera, tello_driver)  */ \
  sub_image_raw_best_effort_not_reliable, \
  int, 1) \
  \
  CXT_MACRO_MEMBER(       /* opencv4 aruco corner refinement method  */ \
  corner_refinement_method, \
  int, 2) \
  /* End of list */

  struct VlocContext
  {
    rclcpp::Node &node_;

    explicit VlocContext(rclcpp::Node &node) :
      node_{node}
    {}

#undef CXT_MACRO_MEMBER
#define CXT_MACRO_MEMBER(n, t, d) CXT_MACRO_DEFINE_MEMBER(n, t, d)
    CXT_MACRO_DEFINE_MEMBERS(VLOC_ALL_PARAMS)
      TransformWithCovariance t_camera_base_{};

    void load_parameters();

    void validate_parameters();
  };
}

#endif //FIDUCIAL_VLAM_VLOC_CONTEXT_HPP
