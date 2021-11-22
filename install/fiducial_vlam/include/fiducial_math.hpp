#ifndef FIDUCIAL_VLAM_FIDUCIAL_MATH_HPP
#define FIDUCIAL_VLAM_FIDUCIAL_MATH_HPP


#include <array>

#include "sensor_msgs/msg/camera_info.hpp"

namespace cv_bridge
{
  class CvImage;
}

namespace fiducial_vlam
{
  class Observation;

  class Observations;

  class TransformWithCovariance;

// ==============================================================================
// CameraInfo class
// ==============================================================================

  class CameraInfo
  {
    class CvCameraInfo;

    std::shared_ptr<CvCameraInfo> cv_;

  public:
    CameraInfo();

    explicit CameraInfo(const sensor_msgs::msg::CameraInfo &camera_info);

    auto &cv() const
    { return cv_; }

    bool is_valid() const
    { return cv_ != nullptr; }
  };

// ==============================================================================
// FiducialMath class
// ==============================================================================

  class FiducialMath
  {
    class CvFiducialMath;

    std::shared_ptr<CvFiducialMath> cv_;

  public:
    explicit FiducialMath(const CameraInfo &camera_info);

    explicit FiducialMath(const sensor_msgs::msg::CameraInfo &camera_info_msg);

    TransformWithCovariance solve_t_camera_marker(const Observation &observation, double marker_length);

    TransformWithCovariance solve_t_map_camera(const Observations &observations,
                                               const std::vector<TransformWithCovariance> &t_map_markers,
                                               double marker_length);

    Observations detect_markers(std::shared_ptr<cv_bridge::CvImage> &gray,
                                std::shared_ptr<cv_bridge::CvImage> &color_marked,
                                int corner_refinement_method);

    void annotate_image_with_marker_axis(std::shared_ptr<cv_bridge::CvImage> &color,
                                         const TransformWithCovariance &t_camera_marker);
  };
}

#endif //FIDUCIAL_VLAM_FIDUCIAL_MATH_HPP
