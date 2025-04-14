import rclpy
from rclpy.node import Node
import smbus2
import math
import time
import tf2_ros
from geometry_msgs.msg import TransformStamped
from sensor_msgs.msg import Imu

#IMU I2C Address (keep in mind to confirm from i2cdetect command if needed)
IMU_ADDRESS = 0x68 # common MPU6050 address

#register addresses
PWR_MGMT_1 = 0x6B
ACCEL_XOUT_H = 0x3B
GYRO_XOUT_H = 0x43

class IMUNode(Node):
    def __init__(self):
        super().__init__('imu_node')
        self.get_logger().info("IMU Node Started!")

        # Create a TF broadcaster
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        # IMU Subscriber
        self.imu_sub = self.create_subscription(
            Imu, '/imu_data', self.imu_callback, 10)

        # Initialize I2C communication
        self.bus = smbus2.SMBus(1)  # Use I2C bus 1
        self.bus.write_byte_data(IMU_ADDRESS, PWR_MGMT_1, 0)  # Wake up IMU

        # Publishing IMU Data
        self.publisher_ = self.create_publisher(Imu, "/imu_data", 10)

        # Timer to publish at 10 Hz
        self.timer = self.create_timer(0.1, self.publish_imu_data)

    def imu_callback(self, msg):
        # Publish TF from base_link -> imu_link
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "base_link"  # IMU is mounted on base
        t.child_frame_id = "imu_link"
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.05

         # Use IMU orientation (or default if missing)
        t.transform.rotation = msg.orientation if msg.orientation else Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
        
        self.tf_broadcaster.sendTransform(t)

    def read_i2c_word(self, reg):
        """ Reads two bytes from an IMU register and converts to signed 16-bit value """
        high = self.bus.read_byte_data(IMU_ADDRESS, reg)
        low = self.bus.read_byte_data(IMU_ADDRESS, reg + 1)
        value = (high << 8) + low
        if value >= 0x8000:
            value = -((65535 - value) + 1)  # Convert to signed
        return value

    def publish_imu_data(self):
        """ Reads IMU data and publishes it as a ROS2 message """
        msg = Imu()
        msg.header.stamp = self.get_clock().now().to_msg()  # ✅ Set correct timestamp
        msg.header.frame_id = "imu_link"  # ✅ Set meaningful frame ID
        
        # Read raw accelerometer data
        accel_x = self.read_i2c_word(ACCEL_XOUT_H)
        accel_y = self.read_i2c_word(ACCEL_XOUT_H + 2)
        accel_z = self.read_i2c_word(ACCEL_XOUT_H + 4)

        # Read raw gyroscope data
        gyro_x = self.read_i2c_word(GYRO_XOUT_H)
        gyro_y = self.read_i2c_word(GYRO_XOUT_H + 2)
        gyro_z = self.read_i2c_word(GYRO_XOUT_H + 4)

        # Convert raw values to proper units (adjust scaling if needed)
        accel_scale = 16384.0  # Assuming ±2g range
        gyro_scale = 131.0  # Assuming ±250°/s range

        msg.linear_acceleration.x = accel_x / accel_scale * 9.81  # Convert to m/s²
        msg.linear_acceleration.y = accel_y / accel_scale * 9.81
        msg.linear_acceleration.z = accel_z / accel_scale * 9.81

        msg.angular_velocity.x = gyro_x / gyro_scale * (math.pi / 180.0)  # Convert to rad/s
        msg.angular_velocity.y = gyro_y / gyro_scale * (math.pi / 180.0)
        msg.angular_velocity.z = gyro_z / gyro_scale * (math.pi / 180.0)

        # Publish the IMU message
        self.publisher_.publish(msg)
        self.get_logger().info(f"Published IMU Data - Accel: ({msg.linear_acceleration.x:.2f}, {msg.linear_acceleration.y:.2f}, {msg.linear_acceleration.z:.2f}) m/s²")

def main(args=None):
    rclpy.init(args=args)
    node = IMUNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
