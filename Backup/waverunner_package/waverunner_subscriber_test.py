import rclpy

from rclpy.node import Node


from std_msgs.msg import String
from message_pkg.msg import Encoder    # Custom waverunner msg

class WaverunnerTestSubscriber(Node):

    def __init__(self):
        super().__init__('WaverunnerTestSubscriber')
        self.subscription = self.create_subscription(
            Encoder,
            'encoderInfo',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('RPM FL:%s FR:%s RL:%s RR:%s' % (msg.fl,msg.fr,msg.rl,msg.rr))


def main(args=None):
    rclpy.init(args=args)

    waverunnerTest_subscriber = WaverunnerTestSubscriber()

    rclpy.spin(waverunnerTest_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    waverunnerTest_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()