import rclpy
import RPi.GPIO as GPIO
from rclpy.node import Node
import array as arr

from time import sleep #to keep track of time
from datetime import datetime #to get high enough accuracy in delta time

from std_msgs.msg import String
from message_pkg.msg import Encoder    # Custom waverunner message


class pEncoder(Node):
    counter = 6
    interuptPins = [19,31,23,22] # Order of array is FL,FR,RL,RR
    secondSensorPins = [21,33,26,24] # Order of array is FL,FR,RL,RR
    pulseCounter = [0,0,0,0]

    lastTimer = datetime.now()

    def __init__(self):
        super().__init__('pEncoder')
        self.publisher_ = self.create_publisher(Encoder, 'encoderInfo', 10)
        timer_period = 0.1 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        newTimer = datetime.now()
        msg = Encoder()
        #print(self.pulsesToRPM(self.pulseCounter[0],(newTimer - self.lastTimer).total_seconds()*1000),self.pulseCounter[0], (newTimer - self.lastTimer).total_seconds()*1000)

        for index, pulseCounter in enumerate(self.pulseCounter):
            msg.encodervalue[index] = pulseCounter
            self.pulseCounter[index] = 0
                        
        self.publisher_.publish(msg) # meddelandet skickas
        self.get_logger().info('Publishing: 1:%d 2:%d 3:%d 4:%d ' % (msg.encodervalue[0],msg.encodervalue[1],msg.encodervalue[2],msg.encodervalue[3]))
        self.lastTimer = datetime.now()

    def pulsesToRPM(self, pulses, dt):
       # print('pulses: %d dt: %d' % (pulses,dt))
        return (pulses/(12*64))/(dt/(60*1000)) #2V --> 5 varv på 15s = 20 rpm
  
    def encoder_interrupt(self,channel): 
        index = 0
        if channel == self.interuptPins[0]:
            index = 0
        elif channel == self.interuptPins[1]:
            index = 1
        elif channel == self.interuptPins[2]:
            index = 2
        elif channel == self.interuptPins[3]:
            index = 3


        self.pulseCounter[index] += 1
        # #sleep(0.002) # extra 2 mSec de-bounce time
        # Switch_A = GPIO.input(self.interuptPins[index])
        # Switch_B = GPIO.input(self.secondSensorPins[index])
        # if (Switch_A == 1) and (Switch_B == 0) : # A then B ->
        #     self.pulseCounter[index] += 1
        #     #print('direction ->', self.pulseCounter[index])
        #     # at this point, B may still need to go high, wait for it
        #     while Switch_B == 0:
        #         Switch_B = GPIO.input(self.secondSensorPins[index])
        #     # now wait for B to drop to end the click cycle
        #     while Switch_B == 1:
        #         Switch_B = GPIO.input(self.secondSensorPins[index])
        #     return

        # elif (Switch_A == 1) and (Switch_B == 1): # B then A <-
        #     self.pulseCounter[index] -= 1
        #     #print('direction <- %d' % self.pulseCounter[index])
        #     # A is already high, wait for A to drop to end the click cycle
        #     while Switch_A == 1:
        #         Switch_A = GPIO.input(self.interuptPins[index])
        #     return
        # else: # discard all other combinations
        #     return





        #if(GPIO.input(self.secondSensorPins[index])): #Check if the 2nd pin is also high, then we are spinning in the other direction
         #   self.pulseCounter[index] -= 1
            #print('Pulse counter: %d anti clockwise -- . Pin A: %s  Pin B: %s' % (self.pulseCounter[index],GPIO.input(self.interuptPins[index]), GPIO.input(self.secondSensorPins[index])))
       # else:
         #   self.pulseCounter[index] += 1
            #print('Pulse counter:  %d clockwise ++ Pin A: %s  Pin B: %s' % (self.pulseCounter[index],GPIO.input(self.interuptPins[index]), GPIO.input(self.secondSensorPins[index])))


        #print('interrupt yes channel: %s index %d and counter %d' % (channel, index, self.pulseCounter[index]))


  


    def initGPIO(self):
        GPIO.setwarnings(False) #Shows warning
        GPIO.setmode(GPIO.BOARD) # We are using the board pins numbers and not GPIO number pins

        for pin in self.interuptPins:
            GPIO.setup(pin, GPIO.IN) #Setup all pins that will be used for interupt as a input to read the voltage in

        for pin in self.secondSensorPins:
            GPIO.setup(pin, GPIO.IN) #setup secondary all pins

        for index, pin in enumerate(self.interuptPins):
            #GPIO.add_event_detect(pin, GPIO.RISING, lambda self,channel,index:self.encoder_interrupt(self, channel,index)) #callback=rotation_decode)#, bouncetime=2) #
            GPIO.add_event_detect(pin, GPIO.RISING, callback=self.encoder_interrupt) 
            print(index, pin)
    
    #def pulsesToRPM(pulses):
        #return pulses/(12.0*64.0))/dt/(60.0*1000.0))

    

   

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

