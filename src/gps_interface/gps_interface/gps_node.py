#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import serial
import pynmea2
from sensor_msgs.msg import NavSatFix

class GPSNode(Node):
    def __init__(self):
        super().__init__('gps_node')
        # Publisher for GPS fix messages
        self.publisher_ = self.create_publisher(NavSatFix, '/gps/fix', 10)
        self.serial_port = None  # Initialize as None
        
        # Attempt to open the serial port on /dev/ttyAMA10
        try:
            self.serial_port = serial.Serial('/dev/ttyAMA10', baudrate=9600, timeout=1)
            self.get_logger().info("Successfully opened serial port /dev/ttyAMA10")
        except Exception as e:
            self.get_logger().error("Failed to open serial port /dev/ttyAMA10: " + str(e))
        
        # Timer to periodically read GPS data (every 1.0 second)
        self.timer = self.create_timer(1.0, self.read_gps_data)
        
    def read_gps_data(self):
        if self.serial_port is None:
            self.get_logger().error("Serial port not initialized. Skipping read.")
            return
        
        try:
            # Read a line from the serial port and decode it
            line = self.serial_port.readline().decode('ascii', errors='replace').strip()
            if line.startswith('$GPGGA'):
                try:
                    # Parse the NMEA sentence using pynmea2
                    msg = pynmea2.parse(line)
                except Exception as parse_error:
                    self.get_logger().error("NMEA parse error: " + str(parse_error))
                    return

                # Create a NavSatFix message and populate it
                gps_msg = NavSatFix()
                gps_msg.header.stamp = self.get_clock().now().to_msg()
                gps_msg.header.frame_id = 'gps_link'
                
                # Convert NMEA latitude and longitude to decimal format
                gps_msg.latitude = self.nmea_to_decimal(msg.lat, msg.lat_dir)
                gps_msg.longitude = self.nmea_to_decimal(msg.lon, msg.lon_dir)
                
                try:
                    gps_msg.altitude = float(msg.altitude)
                except Exception:
                    gps_msg.altitude = 0.0
                    
                gps_msg.position_covariance_type = NavSatFix.COVARIANCE_TYPE_UNKNOWN
                self.publisher_.publish(gps_msg)
                
                self.get_logger().info("GPS Data published: Lat: %.6f, Lon: %.6f, Alt: %.2f" %
                                         (gps_msg.latitude, gps_msg.longitude, gps_msg.altitude))
        except Exception as e:
            self.get_logger().error("Error reading or parsing GPS data: " + str(e))
    
    def nmea_to_decimal(self, raw_value, direction):
        """
        Convert NMEA coordinate format to decimal degrees.
        The format is typically ddmm.mmmm for latitude and dddmm.mmmm for longitude.
        """
        if raw_value == '':
            return 0.0
        try:
            if direction in ['N', 'S']:
                # Latitude: first two digits are degrees
                degrees = float(raw_value[0:2])
                minutes = float(raw_value[2:])
            elif direction in ['E', 'W']:
                # Longitude: first three digits are degrees
                degrees = float(raw_value[0:3])
                minutes = float(raw_value[3:])
            else:
                return 0.0
            decimal = degrees + minutes / 60.0
            if direction in ['S', 'W']:
                decimal *= -1
            return decimal
        except Exception as e:
            self.get_logger().error("Error converting NMEA to decimal: " + str(e))
            return 0.0

def main(args=None):
    rclpy.init(args=args)
    node = GPSNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
