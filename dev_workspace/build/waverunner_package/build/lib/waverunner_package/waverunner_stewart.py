import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from message_pkg.msg import ServoValues

import time

class StewartPlatform(Node):   

    ####### Ignore these   ##########
    def __init__(self):
        super().__init__('StewartPlatform')
        self.publisher_ = self.create_publisher(ServoValues, 'stewartInfo', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)  
        self.subscription = self.create_subscription(MsgType.MecanumInput,'stewartInput',self.listener_callback_stewartInput,10)#info about the servos
        self.subscription

    ##########################
    def listener_callback_stewartInput(self, msg):   
        print("Received stewart info", end=" ")
        print(msg)



    def timer_callback(self):
        msg = ServoValue()
        #msg = Add stewart info here
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing Stewart: "%d"' % msg.motorvalue[0])        



#ignore all these settings
def main(args=None):
    rclpy.init(args=args)
    pub_stewart = StewartPlatform()
    rclpy.spin(pub_stewart)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pub_stewart.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()