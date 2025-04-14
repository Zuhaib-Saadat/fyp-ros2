import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, Image

class SlamNode(Node):
    def __init__(self):
        super().__init__('slam_node')
        self.get_logger().info("SLAM Node Started!")

        # Publishers for RTAB-Map
        self.lidar_pub = self.create_publisher(LaserScan, "/scan", 10)
        self.camera_pub = self.create_publisher(Image, "/image_raw", 10)

        # Subscribers for Lidar and Camera
        self.create_subscription(LaserScan, "/scan", self.lidar_callback, 10)
        self.create_subscription(Image, "/image_raw", self.camera_callback, 10)

    def lidar_callback(self, msg):
        self.get_logger().info("Received Lidar Data")
        self.lidar_pub.publish(msg)  # Publish Lidar data to /scan

    def camera_callback(self, msg):
        self.get_logger().info("Received Camera Image")
        self.camera_pub.publish(msg)  # Publish Camera data to /image_raw

def main(args=None):
    rclpy.init(args=args)
    node = SlamNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
