import rclpy
import RPi.GPIO as GPIO
from rclpy.node import Node
import array as arr

from time import sleep #to keep track of time

from std_msgs.msg import String
from message_pkg.msg import Encoder    # Custom waverunner message

class pEncoder(Node):
    counter = 6
    interuptPins = [19,31,23,22] # Order of array is FL,FR,RL,RR
    secondSensorPins = [21,33,26,24] # Order of array is FL,FR,RL,RR
    pulseCounters = [0,0,0,0]



    def __init__(self):
        super().__init__('pEncoder')
        self.publisher_ = self.create_publisher(Encoder, 'encoderInfo', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Encoder()
        msg.fl = self.counter
        #self.counter +=1
        #msg.data = '%d' % sel  f.i
        self.publisher_.publish(msg) # meddelandet skickas
        self.get_logger().info('Publishing: %d' % self.counter)

   
    #def encoder_interrupt(indexArray): 
      #  print('ENCODER INTERUPTED on: %d and is %d ' % mainPin, GPIO.input(mainPin))
    def interrupt(channel): 
       # print('ENCODER INTERUPTED on: %d and is %d ' % mainPin, GPIO.input(mainPin))
        print('interrupt yes')


    def initGPIO(self):
        GPIO.setwarnings(False) #Shows warning

        GPIO.setmode(GPIO.BOARD) # We are using the board pins numbers and not GPIO number pins

        for pin in self.interuptPins:
            GPIO.setup(pin, GPIO.IN) #Setup all pins that will be used for interupt as a input to read the voltage in

        for pin in self.secondSensorPins:
            GPIO.setup(pin, GPIO.IN) #setup secondary all pins

        for index, pin in enumerate(self.interuptPins):
            #GPIO.add_event_detect(pin, GPIO.RISING, lambda channel:encoder_interrupt(index)) #callback=rotation_decode)#, bouncetime=2) #
            GPIO.add_event_detect(pin, GPIO.RISING, callback=interrupt) 
            print(index, pin)

  

   

def main(args=None):
    rclpy.init(args=args)

    encoder_publisher = pEncoder()
    encoder_publisher.initGPIO()
    rclpy.spin(encoder_publisher)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)

    GPIO.cleanup() 
    encoder_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
