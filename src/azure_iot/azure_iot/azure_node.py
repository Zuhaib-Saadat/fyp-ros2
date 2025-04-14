import rclpy
from rclpy.node import Node
from azure.iot.device import IoTHubDeviceClient
from sensor_msgs.msg import Image
from azure.storage.blob import BlobServiceClient
from cv_bridge import CvBridge
import cv2

class AzureIoTNode(Node):
    def __init__(self):
        super().__init__('azure_iot_node')
        self.get_logger().info("Azure IoT Node Started!")

        # Connect to Azure IoT
        self.connection_string = "HostName=FYPRoadFaultDetection.azure-devices.net;DeviceId=Raspberry_Pi_5;SharedAccessKey=i31gV5S5prAlOqTAeNZuTlOoK5iswybrgUd0mbQxM5U="
        self.client = IoTHubDeviceClient.create_from_connection_string(self.connection_string)
        self.client.connect()

        # Subscribe to pothole detections
        self.subscription = self.create_subscription(
            Image,
            '/pothole_detections',
            self.image_callback,
            10
        )
        self.bridge = CvBridge()

        # Azure Blob Storage setup
        self.blob_service_client = BlobServiceClient.from_connection_string("Your_Azure_Storage_Connection_String")
        self.container_client = self.blob_service_client.get_container_client("pothole-images")

    def image_callback(self, msg):
        # Convert ROS2 Image message to OpenCV format
        cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")

        # Compress and upload image to Azure Blob Storage
        _, img_encoded = cv2.imencode('.jpg', cv_image)
        blob_client = self.container_client.get_blob_client(f"pothole_{self.get_clock().now().to_msg().sec}.jpg")
        blob_client.upload_blob(img_encoded.tobytes())

        self.get_logger().info("Uploaded pothole image to Azure Blob Storage")

def main(args=None):
    rclpy.init(args=args)
    node = AzureIoTNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
