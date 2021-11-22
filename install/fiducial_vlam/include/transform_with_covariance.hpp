#ifndef FIDUCIAL_VLAM_TRANSFORM_WITH_COVARIANCE_HPP
#define FIDUCIAL_VLAM_TRANSFORM_WITH_COVARIANCE_HPP

#include <array>

#include "tf2/LinearMath/Transform.h"

namespace fiducial_vlam
{

  class TransformWithCovariance
  {
  public:
    using mu_type = std::array<double, 6>;
    using cov_type = std::array<double, 36>;

  private:
    bool is_valid_{false};
    tf2::Transform transform_;
    cov_type cov_{};

    static tf2::Transform to_transform(const mu_type &mu)
    {
      tf2::Quaternion q;
      q.setRPY(mu[3], mu[4], mu[5]);
      return tf2::Transform(q, tf2::Vector3(mu[0], mu[1], mu[2]));
    }

  public:
    TransformWithCovariance() = default;

    TransformWithCovariance(const tf2::Transform &transform, const cov_type &cov)
      : is_valid_(true), transform_(transform), cov_(cov)
    {}

    explicit TransformWithCovariance(const tf2::Transform &transform)
      : is_valid_(true), transform_(transform), cov_()
    {}

    TransformWithCovariance(const mu_type &mu, const cov_type &cov)
      : is_valid_(true), transform_(to_transform(mu)), cov_(cov)
    {}

    explicit TransformWithCovariance(const mu_type &mu)
      : is_valid_(true), transform_(to_transform(mu)), cov_()
    {}

    explicit TransformWithCovariance(const tf2::Quaternion &q)
      : is_valid_(true), transform_(q), cov_()
    {}

    TransformWithCovariance(const tf2::Quaternion &q, tf2::Vector3 &c)
      : is_valid_(true), transform_(q, c), cov_()
    {}

    auto is_valid() const
    { return is_valid_; }

    auto &transform() const
    { return transform_; }

    auto &cov() const
    { return cov_; }

    mu_type mu() const
    {
      double roll, pitch, yaw;
      transform_.getBasis().getRPY(roll, pitch, yaw);
      auto c = transform_.getOrigin();
      return mu_type{c[0], c[1], c[2], roll, pitch, yaw};
    }

    void update_simple_average(const TransformWithCovariance &newVal, int previous_update_count);
  };

}

#endif //FIDUCIAL_VLAM_TRANSFORM_WITH_COVARIANCE_HPP
