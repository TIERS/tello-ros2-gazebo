#ifndef FIDUCIAL_VLAM_VMAP_CONTEXT_HPP
#define FIDUCIAL_VLAM_VMAP_CONTEXT_HPP

#include "ros2_shared/context_macros.hpp"
#include "transform_with_covariance.hpp"

namespace rclcpp
{
  class Node;
}

namespace fiducial_vlam
{
#define VMAP_ALL_PARAMS \
  CXT_MACRO_MEMBER(       /* topic for publishing map of markers  */ \
  fiducial_map_pub_topic,  \
  std::string, "/fiducial_map") \
  CXT_MACRO_MEMBER(       /* topic for publishing rviz visualizations of the fiducial markers  */ \
  fiducial_markers_pub_topic,  \
  std::string, "fiducial_markers") \
  \
  CXT_MACRO_MEMBER(       /* topic for subscription to fiducial_vlam_msgs::msg::Observations  */ \
  fiducial_observations_sub_topic,  \
  std::string, "/fiducial_observations") \
  \
  CXT_MACRO_MEMBER(       /* frame_id for marker and tf messages - normally "map"  */ \
  map_frame_id,  \
  std::string, "map") \
  CXT_MACRO_MEMBER(       /* frame_id for the child in the marker tf message  */\
  marker_prefix_frame_id,  \
  std::string, "marker_") \
  \
  CXT_MACRO_MEMBER(       /* non-zero => publish the tf of all the known markers  */ \
  publish_tfs, \
  int, 1) \
  CXT_MACRO_MEMBER(       /* non-zero => publish a shape that represents a marker  */ \
  publish_marker_visualizations, \
  int, 1) \
  CXT_MACRO_MEMBER(       /* Hz => rate at which the marker map is published */ \
  marker_map_publish_frequency_hz, \
  double, 0.) \
  \
  CXT_MACRO_MEMBER(       /* name of the file to store the marker map in  */  \
  marker_map_save_full_filename, \
  std::string, "fiducial_marker_locations.yaml") \
  CXT_MACRO_MEMBER(       /* name of the file to load the marker map from  */  \
  marker_map_load_full_filename, \
  std::string, "fiducial_marker_locations_saved.yaml") \
  CXT_MACRO_MEMBER(       /* non-zero => create a new map  */\
  make_not_use_map,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* 0->marker id, pose from file, 1->marker id, pose as parameter, 2->camera pose as parameter  */ \
  map_init_style, \
  int, 1) \
  CXT_MACRO_MEMBER(       /* marker id for map initialization */ \
  map_init_id,  \
  int, 1) \
  CXT_MACRO_MEMBER(       /* pose component for map initialization */ \
  map_init_pose_x,  \
  double, 0.) \
  CXT_MACRO_MEMBER(       /* pose component for map initialization */ \
  map_init_pose_y,  \
  double, 0.) \
  CXT_MACRO_MEMBER(       /* pose component for map initialization */ \
  map_init_pose_z, \
  double, 1.) \
  CXT_MACRO_MEMBER(       /* pose component for map initialization */ \
  map_init_pose_roll, \
  double, TF2SIMD_HALF_PI) \
  CXT_MACRO_MEMBER(       /* pose component for map initialization */ \
  map_init_pose_pitch,  \
  double, 0.) \
  CXT_MACRO_MEMBER(       /* pose component for map initialization */ \
  map_init_pose_yaw, \
  double, -TF2SIMD_HALF_PI) \
  CXT_MACRO_MEMBER(       /* length of a side of a marker in meters */ \
  marker_length,  \
  double, 0.1627) \
  /* End of list */

  struct VmapContext
  {
    rclcpp::Node &node_;

    explicit VmapContext(rclcpp::Node &node) :
      node_{node}
    {}

#undef CXT_MACRO_MEMBER
#define CXT_MACRO_MEMBER(n, t, d) CXT_MACRO_DEFINE_MEMBER(n, t, d)
    CXT_MACRO_DEFINE_MEMBERS(VMAP_ALL_PARAMS)
    TransformWithCovariance  map_init_transform_{};

    void load_parameters();

    void validate_parameters();
  };
}

#endif //FIDUCIAL_VLAM_VMAP_CONTEXT_HPP
