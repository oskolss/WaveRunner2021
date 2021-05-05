from rclpy.node import Node

from std_msgs.msg import String


class WaverunnerTestSubscriber(Node):

    def __init__(self):
        super().__init__('waverunnerTest_subscriber')
        self.subscription = self.create_subscription(
            String,
            'topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Waverunners speed is: "%s"' % msg.data)


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