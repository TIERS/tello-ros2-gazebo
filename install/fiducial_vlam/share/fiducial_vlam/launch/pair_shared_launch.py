import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

_launch_path = os.path.join(get_package_share_directory('fiducial_vlam'), 'launch')
_map_filename = os.path.join(_launch_path, 'fiducial_marker_locations_basement.yaml')


def generate_rviz_execute_process(computer_name):
    return ExecuteProcess(cmd=['rviz2', '-d',
                               os.path.join(_launch_path, 'pair_' + computer_name + '.rviz')],
                          output='screen')


def generate_one_drone_action_list(drone_name):
    # supported names are tello, drone1, drone2
    # urdf = os.path.join(get_package_share_directory('flock2'), 'urdf', drone_name + '.urdf')
    ns = drone_name

    return [
        Node(package='tello_driver', node_executable='tello_driver', output='screen',
             node_name='tello_driver', node_namespace=ns),
        Node(package='fiducial_vlam', node_executable='vloc_main', output='screen',
             node_name='vloc_main', node_namespace=ns, parameters=[{
                'camera_tf_pub_topic': '/tf',
                'camera_frame_id': drone_name + '_camera'
            }]),
    ]


def generate_primary_action_list(drone_name, computer_name):
    drone_actions = generate_one_drone_action_list(drone_name)

    main_actions = [
        generate_rviz_execute_process(computer_name),
        Node(package='fiducial_vlam', node_executable='vmap_main', output='screen',
             node_name='vmap_main', parameters=[{
                'make_not_use_map': 0,
                'marker_map_load_full_filename': _map_filename
            }]),
    ]

    return drone_actions + main_actions


def generate_secondary_action_list(drone_name, computer_name):
    drone_actions = generate_one_drone_action_list(drone_name)

    main_actions = [
        generate_rviz_execute_process(computer_name),
    ]

    return drone_actions + main_actions
