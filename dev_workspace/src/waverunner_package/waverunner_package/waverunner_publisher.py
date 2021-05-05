import rclpy
import time
import serial

from rclpy.node import Node
from std_msgs.msg import String
import message_pkg.msg as MsgType    # Custom waverunner message




class WaverunnerPublisher(Node):
    serial_port = None
    msg = 1
    motorValues = [0,0,0,0]
    servoValues = [0,0,0,0,0,0]


    def initialize_serial_port(self): 
        self.serial_port = serial.Serial(
        port="/dev/ttyTHS1",  # Should correspond with the selected pin. Yet to be tested
        baudrate=9600,      
        bytesize=serial.EIGHTBITS,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        )
        # Wait a second to let the port initialize
        time.sleep(1)

    def __init__(self):
        super().__init__('WaverunnerPublisher')
        #self.publisher_ = self.create_publisher(String, 'waverunner_info', 10)
        timer_period = 0.5  # seconds
        self.subscription = self.create_subscription(MsgType.ServoValues,'stewartInfo',self.listener_callback_servo,10)
        self.subscription
        self.subscription1 = self.create_subscription(MsgType.MotorValues,'mecanumInfo',self.listener_callback_motor,10)
        self.subscription1
        self.initialize_serial_port()

    def listener_callback_motor(self, msg):
        self.motorValues = msg.motorvalue
        self.write_serial_message()#msg.encodervalue, msg.encodervalue)

    def listener_callback_servo(self, msg):
        self.servoValues = msg.servovalue
        #self.write_serial_message() #commented out to not make it write tooo often on the serial and also the servo does not work currently
    
    
    def write_serial_message(self): # Input message parameters here until we know how it should be done
        # message bör vara samma som 'msg' men för att inte råka paja något kör jag ett annat namn så länge
        motorValues = self.motorValues
        servoValues = self.servoValues
        message = [0]*18
        startMsg = 0x02
        endMsg = 0x03
        print(motorValues[0])
        for i in range(6):
            # Start and end bytes
            if i < 2:
                message[i] = startMsg
                message[i+16] = endMsg
                
            # DC output
            if i < 4:
                message[2*i+2] = 1 if motorValues[i] < 0 else 1
                message[2*i+3] = abs(motorValues[i])
            
            # Servos
            message[i+10] = servoValues[i]
        
        self.serial_port.write(message)#, 0, 18)
        print(message)


def main(args=None):
    rclpy.init(args=args)
    waverunner_publisher = WaverunnerPublisher()
    rclpy.spin(waverunner_publisher)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    waverunner_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()