import rclpy
from rclpy.node import Node
import array as arr


from std_msgs.msg import String
from message_pkg.msg import Encoder    # Custom waverunner message



class pEncoder(Node):
    def __init__(self):
        super().__init__('pEncoder')
        self.publisher_ = self.create_publisher(Encoder, 'encoderInfo', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Encoder()
        msg.fl = 51
        msg.fr = 50
        msg.rl = 49
        msg.rr = 48
        #msg.data = '%d' % self.i
        self.publisher_.publish(msg) # meddelandet skickas
        self.get_logger().info('Publishing: "%s"' % msg.fl)


def main(args=None):
    rclpy.init(args=args)

    encoder_publisher = pEncoder()

    rclpy.spin(encoder_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    encoder_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
