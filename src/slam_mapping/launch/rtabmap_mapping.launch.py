import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        # Start RPLidar Node
        launch_ros.actions.Node(
            package='rplidar_ros',
            executable='rplidar_node',
            name='rplidar_node',
            output='screen',
            parameters=[{'serial_port': '/dev/ttyUSB0'}]  # Change if needed
        ),

        # Start RTAB-Map Node
        launch_ros.actions.Node(
            package='rtabmap_ros',
            executable='rtabmap',
            name='rtabmap',
            output='screen',
            parameters=[
                {"frame_id": "map"},
                {"subscribe_depth": True},
                {"subscribe_scan": True},
                {"subscribe_scan_cloud": False},
                {"subscribe_stereo": False},
                {"subscribe_rgbd": False},
                {"Grid/3D": True},   # FIXED: Boolean instead of string
                {"Grid/RangeMax": 10.0},  # FIXED: Float instead of string
                {"Grid/DepthDecimation": 2},  # FIXED: Integer instead of string
                {"Rtabmap/DetectionRate": 2},  # FIXED: Integer instead of string
                {"Rtabmap/MemoryThr": 2000}  # FIXED: Integer instead of string
            ]
        ),

        # Start RTAB-Map's visualizer
        launch_ros.actions.Node(
            package='rtabmap_ros',
            executable='rtabmapviz',
            name='rtabmap_viz',
            output='screen'
        )
    ])

