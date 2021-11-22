
#ifndef FIDUCIAL_VLAM_TF_UTIL_HPP
#define FIDUCIAL_VLAM_TF_UTIL_HPP

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_with_covariance.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"

namespace fiducial_vlam
{
  class TransformWithCovariance;

  geometry_msgs::msg::Pose to_Pose_msg(const TransformWithCovariance &twc);

  geometry_msgs::msg::PoseWithCovariance to_PoseWithCovariance_msg(const TransformWithCovariance &twc);

  geometry_msgs::msg::PoseWithCovarianceStamped to_PoseWithCovarianceStamped_msg(
    const TransformWithCovariance &twc,
    std_msgs::msg::Header::_stamp_type stamp,
    std_msgs::msg::Header::_frame_id_type frame_id);

  TransformWithCovariance to_TransformWithCovariance(const geometry_msgs::msg::PoseWithCovariance &pwc);
}
#endif //FIDUCIAL_VLAM_TF_UTIL_HPP
