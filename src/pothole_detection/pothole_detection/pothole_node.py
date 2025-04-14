import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
import cv2
import numpy as np
import ai_edge_litert.interpreter as tflite
from cv_bridge import CvBridge

class PotholeDetector(Node):
    def __init__(self):
        super().__init__('pothole_detector')

        # Load YOLOv11-Nano model
        self.model_path = '/home/zohaib/fyp_project_ws/src/pothole_detection/pothole_detection/models/yolov11-nano.tflite'
        self.interpreter = tflite.Interpreter(model_path=self.model_path)
        self.interpreter.allocate_tensors()

        # Get input and output details
        self.input_details = self.interpreter.get_input_details()
        self.output_details = self.interpreter.get_output_details()

        # Subscribe to camera feed
        self.subscription = self.create_subscription(
            Image,
            '/image_raw',
            self.image_callback,
            10
        )
        self.image_pub = self.publisher = self.create_publisher(Image, '/pothole_detections', 10)
        self.bridge = CvBridge()

        self.get_logger().info("Pothole Detector Node Initialized.")

    def preprocess_image(self, frame):
        # Resize and normalize the image
        input_shape = self.input_details[0]['shape'][1:3]  # Expected input size
        frame_resized = cv2.resize(frame, (input_shape[1], input_shape[0]))
        frame_normalized = frame_resized / 255.0  # Normalize to [0,1]
        frame_expanded = np.expand_dims(frame_normalized, axis=0).astype(np.float32)
        return frame_expanded

    def image_callback(self, msg):
        self.get_logger().info("Received image for detection.")
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")

        # Preprocess image
        input_data = self.preprocess_image(cv_image)

        # Run inference
        self.interpreter.set_tensor(self.input_details[0]['index'], input_data)
        self.interpreter.invoke()

        # Get predictions
        output_data = self.interpreter.get_tensor(self.output_details[0]['index'])

        # Extract bounding boxes
        num_detections = output_data.shape[2]  # 8400
        for i in range(num_detections):
            x_center, y_center, width, height, confidence = output_data[0, :, i]

            if confidence > 0.5:
                x_min = int((x_center - width / 2) * cv_image.shape[1])
                y_min = int((y_center - height / 2) * cv_image.shape[0])
                x_max = int((x_center + width / 2) * cv_image.shape[1])
                y_max = int((y_center + height / 2) * cv_image.shape[0])

                self.get_logger().info(f"Detected pothole at: ({x_min}, {y_min}), ({x_max}, {y_max}), Confidence: {confidence:.2f}")

                # Draw bounding box
                cv2.rectangle(cv_image, (x_min, y_min), (x_max, y_max), (0, 255, 0), 2)
                cv2.putText(cv_image, f"{confidence:.2f}", (x_min, y_min - 10),
                            cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

        # Publish the modified image
        image_message = self.bridge.cv2_to_imgmsg(cv_image, encoding="bgr8")
        self.image_pub.publish(image_message)

def main(args=None):
    rclpy.init(args=args)
    node = PotholeDetector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
