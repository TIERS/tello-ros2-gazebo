#ifndef FIDUCIAL_VLAM_FIDUCIAL_VLAM_HPP
#define FIDUCIAL_VLAM_FIDUCIAL_VLAM_HPP

#include <memory>

namespace rclcpp
{
  class Node;

  class NodeOptions;
}

namespace fiducial_vlam
{
  std::shared_ptr<rclcpp::Node> vloc_node_factory(const rclcpp::NodeOptions &options);

  std::shared_ptr<rclcpp::Node> vmap_node_factory(const rclcpp::NodeOptions &options);
}
#endif //FIDUCIAL_VLAM_FIDUCIAL_VLAM_HPP
