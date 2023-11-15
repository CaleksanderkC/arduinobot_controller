#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from arduinobot_msg.srv import EulerToQuaternion
from arduinobot_msg.srv import QuaternionToEuler
from tf_transformations import quaternion_from_euler
from tf_transformations import euler_from_quaternion

class AnglesConverter(Node):

    def __init__(self):
        super().__init__("angle_conversion_service_sever")

        self.euler_to_quaternion = self.create_service(EulerToQuaternion, "euler_to_quaternion", self.eulerToQuaternionCallback)
        self.quaternion_to_euler = self.create_service(QuaternionToEuler, "quaternion_to_euler", self.quaternionToEulerCallback)

        self.get_logger().info("Angle Conversion Services are Ready")


    def eulerToQuaternionCallback(self, req, res):
        self.get_logger().info(f"Requested to convert euler angels roll: {req.roll} pitch: {req.pitch} yaw: {req.yaw} into quaternion angels")
        res.x, res.y, res.z, res.w = quaternion_from_euler(req.roll, req.pitch, req.yaw)
        self.get_logger().info(f"Coresponding quaternion x: {res.x}; y: {res.y}; z: {res.z}; w: {res.w};")
        return res
    
    def quaternionToEulerCallback(self, req, res):
        self.get_logger().info(f"Requested to convert quaternion angels x: {req.x} y: {req.y} z: {req.z}; w: {req.w}; into euler angels")
        res.roll, res.pitch, res.yaw  = euler_from_quaternion((req.x, req.y, req.z, req.w))
        self.get_logger().info(f"Coresponding Euler roll: {res.roll}; pitch: {res.pitch}; yaw: {res.yaw};")
        return res
    

def main():
    rclpy.init()
    angle_converter = AnglesConverter()
    rclpy.spin(angle_converter)
    angle_converter.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
