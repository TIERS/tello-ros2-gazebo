import sys
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription

sys.path.append(os.path.join(get_package_share_directory('fiducial_vlam'), 'launch'))
import pair_shared_launch as psl

def generate_launch_description():
    action_list = psl.generate_secondary_action_list('drone2', 'brix')
    return LaunchDescription(action_list)
