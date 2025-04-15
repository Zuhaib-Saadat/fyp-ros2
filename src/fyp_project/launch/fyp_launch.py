from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="v4l2_camera",
            executable="v4l2_camera_node",
            name="usb_camera",
            parameters=[{"video_device": "/dev/video1"}]
        ),
        Node(
            package='slam_mapping',
            executable='slam_node',
            output='screen'
        ),
        Node(
            package='rtabmap_ros',
            executable='rtabmap',
            name='rtabmap',
            output='screen',
            parameters=[{
                'frame_id': 'base_link',
                'subscribe_scan': True,
                'subscribe_odom': True,
                'subscribe_imu': True,
                'approx_sync': True,
            }],
            remappings=[
                ('scan', '/scan'),
                ('odom', '/odom'),
                ('rgb/image', '/image_raw'),
                ('imu', '/imu_data'),
            ],
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
        ),
        Node(
            package='pothole_detection',
            executable='pothole_node',
            output='screen'
        ),
        Node(
            package='imu_interface',
            executable='imu_node',
            output='screen'
        ),
        Node(
            package='gps_interface',
            executable='gps_node',
            name='gps_node',
            output='screen'
        ),
        Node(
            package='azure_iot',
            executable='azure_node',
            output='screen'
        ),
    ])
