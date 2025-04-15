import rclpy
from rclpy.node import Node
from azure.iot.device import IoTHubDeviceClient
from sensor_msgs.msg import Image
from azure.storage.blob import BlobServiceClient
from cv_bridge import CvBridge
import cv2
from sensor_msgs.msg import NavSatFix


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
        # Subscribe to GPS fix data
        self.create_subscription(NavSatFix, '/gps/fix', self.gps_callback, 10)
        
        self.bridge = CvBridge()

        self.last_gps = None  # To hold the latest GPS data

        # Azure Blob Storage setup (section commented out for now)
        """
        # AZURE_BLOB_CREDENTIALS: Uncomment the following lines once you have your storage credentials
        self.blob_service_client = BlobServiceClient.from_connection_string("Your_Azure_Storage_Connection_String")
        self.container_client = self.blob_service_client.get_container_client("pothole-images")
        """
    

    def gps_callback(self, msg):
        self.last_gps = msg  # Save the latest GPS data

    def image_callback(self, msg):
        # Convert ROS2 Image message to OpenCV format
        cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")

        # Compress and upload image to Azure Blob Storage

        ##UNCOMMENT BELOW WHEN NEEDED
        #_, img_encoded = cv2.imencode('.jpg', cv_image)
        #blob_client = self.container_client.get_blob_client(f"pothole_{self.get_clock().now().to_msg().sec}.jpg")
        #blob_client.upload_blob(img_encoded.tobytes())

        # Create your telemetry payload
        telemetry = {
            'pothole_detected': True,
            # Attach confidence, bounding boxes, etc. if needed.
            'timestamp': self.get_clock().now().to_msg().sec,
        }
        if self.last_gps:
            telemetry['latitude'] = self.last_gps.latitude
            telemetry['longitude'] = self.last_gps.longitude
            telemetry['altitude'] = self.last_gps.altitude
        else:
            telemetry['latitude'] = telemetry['longitude'] = telemetry['altitude'] = None

        # Send telemetry payload to Azure IoT Hub (example payload)
        self.client.send_message(str(telemetry))
        self.get_logger().info(f"Sent telemetry: {telemetry}")

        self.get_logger().info("Uploaded pothole image to Azure Blob Storage")

def main(args=None):
    rclpy.init(args=args)
    node = AzureIoTNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
