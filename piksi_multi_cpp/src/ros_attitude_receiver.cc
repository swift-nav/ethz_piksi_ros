#include "piksi_multi_cpp/ros_attitude_receiver.h"

namespace piksi_multi_cpp {

ROSAttitudeReceiver::ROSAttitudeReceiver(const ros::NodeHandle& nh,
                                         const std::shared_ptr<Device>& device)
    : ROSReceiver(nh, device) {}

}  // namespace piksi_multi_cpp
