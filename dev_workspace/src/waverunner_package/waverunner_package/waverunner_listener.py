import rclpy
import time
import serial

from rclpy.node import Node
from std_msgs.msg import String
import message_pkg.msg as MsgType    # Custom waverunner message




class WaverunnerListener(Node):
    #inputInformation = [0,0,0,0,0,0]
    inputInformation = [1,2,3,4,5,6] # Testing purpose

    def __init__(self):
        super().__init__('WaverunnerListener')
        self.publisher_ = self.create_publisher(MsgType.MecanumInput, 'mecanumInput', 10)
       # self.publisherStewart = self.create_publisher(MsgType.MecanumInput(), 'stewartInput', 10)
        timer_period = 0.1  # This variable can be changed depending on our external systems update frequency
        self.subscription = self.create_subscription(MsgType.InputValues,'waverunnerInfo',self.listener_callback_input,10)
        self.subscription
        self.timer = self.create_timer(timer_period, self.timer_callback_mecanum)

    def timer_callback_mecanum(self):
        msg = MsgType.MecanumInput()
        #print(self.pulsesToRPM(self.pulseCounter[0],(newTimer - self.lastTimer).total_seconds()*1000),self.pulseCounter[0], (newTimer - self.lastTimer).total_seconds()*1000)
        msg.inputvalue[0] = self.inputInformation[0] #velocity in X direction
        msg.inputvalue[1] = self.inputInformation[1] # velocity in Y direction
        msg.inputvalue[2] = self.inputInformation[5] # Angular velocity in Z
        self.publisher_.publish(msg) # meddelandet skickas
        print("Mecanum input:", end=" ")
        print(msg.inputvalue)

    def timer_callback_stewart(self):
        msg = MsgType.MecanumInput() #TODO make a stewart message 
        #print(self.pulsesToRPM(self.pulseCounter[0],(newTimer - self.lastTimer).total_seconds()*1000),self.pulseCounter[0], (newTimer - self.lastTimer).total_seconds()*1000)
        msg.inputvalue[0] = self.inputInformation[2] # Velocity in Z direction
        msg.inputvalue[1] = self.inputInformation[3] # Angular velocity in x
        msg.inputvalue[2] = self.inputInformation[4] # Angular velocity in y                         
        self.publisherStewart.publish(msg) # meddelandet skickas
        print("Stewart input:", end=" ")
        print(msg.inputvalue)
        
    def listener_callback_input(self, msg):
        self.inputInformation = msg.inputvalue


def main(args=None):
    rclpy.init(args=args)
    waverunner_listener = WaverunnerListener()
    rclpy.spin(waverunner_listener)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    waverunner_listener.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()