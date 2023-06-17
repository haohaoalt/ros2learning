#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
class Node04(Node):
    #创建一个Node04节点，并在初始化时输出日志
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是%s!"%name)

def main(args=None):
    rclpy.init(args=args)
    node=Node04("node_04")
    rclpy.spin(node)
    rclpy.shutdown()