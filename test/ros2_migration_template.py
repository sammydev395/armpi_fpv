#!/usr/bin/env python3
"""
ROS 1 to ROS 2 Migration Template
=================================

This file contains standard migration patterns for converting Python code from ROS 1 to ROS 2.
"""

# =============================================================================
# IMPORTS - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1 → ROS 2
# import rospy                     → import rclpy
# from std_srvs.srv import *       → from std_srvs.srv import *  (same)
# from sensor_msgs.msg import *    → from sensor_msgs.msg import *  (same)
# from geometry_msgs.msg import *  → from geometry_msgs.msg import *  (same)

# =============================================================================
# NODE INITIALIZATION - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# rospy.init_node('node_name')

# ROS 2:
# rclpy.init()
# node = Node('node_name')

# =============================================================================
# PUBLISHERS - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# pub = rospy.Publisher('/topic', MessageType, queue_size=10)
# pub.publish(msg)

# ROS 2:
# pub = node.create_publisher(MessageType, '/topic', 10)
# pub.publish(msg)

# =============================================================================
# SUBSCRIBERS - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# sub = rospy.Subscriber('/topic', MessageType, callback_function)

# ROS 2:
# sub = node.create_subscription(MessageType, '/topic', callback_function, 10)

# =============================================================================
# SERVICES - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# service = rospy.Service('/service', ServiceType, service_callback)
# rospy.wait_for_service('/service')
# service_proxy = rospy.ServiceProxy('/service', ServiceType)

# ROS 2:
# service = node.create_service(ServiceType, '/service', service_callback)
# node.wait_for_service('/service')
# client = node.create_client(ServiceType, '/service')

# =============================================================================
# PARAMETERS - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# param = rospy.get_param('/param_name', default_value)
# rospy.set_param('/param_name', value)

# ROS 2:
# node.declare_parameter('param_name', default_value)
# param = node.get_parameter('param_name').value
# node.set_parameters([rclpy.parameter.Parameter('param_name', value)])

# =============================================================================
# LOGGING - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# rospy.loginfo("message")
# rospy.logwarn("message")
# rospy.logerr("message")

# ROS 2:
# node.get_logger().info("message")
# node.get_logger().warn("message")
# node.get_logger().error("message")

# =============================================================================
# TIMING - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# rospy.sleep(1.0)
# rospy.Rate(10)
# timer = rospy.Timer(rospy.Duration(1.0), callback)

# ROS 2:
# time.sleep(1.0)  # or node.get_clock().sleep_for(...)
# timer = node.create_timer(1.0, callback)

# =============================================================================
# MAIN LOOP - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# if __name__ == '__main__':
#     rospy.init_node('node_name')
#     # setup code
#     rospy.spin()

# ROS 2:
# def main(args=None):
#     rclpy.init(args=args)
#     node = NodeClass()
#     try:
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         pass
#     finally:
#         node.destroy_node()
#         rclpy.shutdown()
# 
# if __name__ == '__main__':
#     main()

# =============================================================================
# SHUTDOWN HANDLING - ROS 1 to ROS 2 Migration
# =============================================================================

# ROS 1:
# rospy.on_shutdown(cleanup_function)
# rospy.is_shutdown()

# ROS 2:
# # Use try/finally blocks for cleanup
# # Check rclpy.ok() for shutdown status

# =============================================================================
# TOPIC UPDATES FOR ARDUCAM INTEGRATION
# =============================================================================

# OLD (USB Camera):
# '/usb_cam/image_raw'
# '/usb_cam/camera_info'

# NEW (ArduCam CSI):
# '/arducam/image_raw'
# '/arducam/camera_info'

# =============================================================================
# EXAMPLE COMPLETE CLASS MIGRATION
# =============================================================================

"""
ROS 1 Example:
class OldNode:
    def __init__(self):
        rospy.init_node('old_node')
        self.pub = rospy.Publisher('/topic', String, queue_size=10)
        self.sub = rospy.Subscriber('/input', String, self.callback)
        rospy.loginfo("Node started")
    
    def callback(self, msg):
        rospy.loginfo(f"Received: {msg.data}")
        self.pub.publish(String(data="response"))

ROS 2 Equivalent:
class NewNode(Node):
    def __init__(self):
        super().__init__('new_node')
        self.pub = self.create_publisher(String, '/topic', 10)
        self.sub = self.create_subscription(String, '/input', self.callback, 10)
        self.get_logger().info("Node started")
    
    def callback(self, msg):
        self.get_logger().info(f"Received: {msg.data}")
        self.pub.publish(String(data="response"))
"""
