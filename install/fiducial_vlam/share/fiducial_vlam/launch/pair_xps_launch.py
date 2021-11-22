import sys

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription

sys.path.append(get_package_share_directory('fiducial_vlam') + '/launch/')
import pair_shared_launch as psl

def generate_launch_description():
    action_list = psl.generate_primary_action_list('drone1', 'xps')
    print(action_list)
    return LaunchDescription(action_list)
