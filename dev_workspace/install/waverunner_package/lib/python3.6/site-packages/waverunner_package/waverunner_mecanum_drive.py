import rclpy
from rclpy.node import Node
import numpy as np
from std_msgs.msg import String
import message_pkg.msg as MsgType

import time

class pMecanumDrive(Node):
    maxPWM = 100    # 0-255
    dt = 500        # ms

    # Variables that we need to find from other nodes
    Vx = 1
    Vy = 0
    z = 0                    
    scale = 1               # Dessa fyra kommer från användaren
    messuredSpeeds = [0,0,0,0] # Publiceras av pulsräknarnoden
    
    # Variables to keep track of previous data
    previousPWMs = [0,0,0,0]
    prevoiusMeasuredSpeeds = [0,0,0,0]
   
    def __init__(self):
        super().__init__('pMecanumDrive')
        self.publisher_ = self.create_publisher(MsgType.MotorValues, 'mecanumInfo', 10)
        timer_period = self.dt*0.001 #0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.subscription1 = self.create_subscription(MsgType.MecanumInput,'mecanumInput',self.listener_callback_mecanumInput,10)#info about the servos
        self.subscription2 = self.create_subscription(MsgType.Encoder,'encoderInfo', self.listener_callback_encoderInfo,10)#information about the motor
        self.subscription1
        self.subscription2  

    def listener_callback_mecanumInput(self, msg):   
        print("Received Velocity x,y and angular velocity z", end=" ")
        print(msg.inputvalue[0],end=" ")
        print(msg.inputvalue[1],end=" ")
        print(msg.inputvalue[2])
        Vx = msg.inputvalue[0]
        Vy = msg.inputvalue[1]
        z  = msg.inputvalue[2]

    def listener_callback_encoderInfo(self, msg):
        self.messuredSpeeds = msg.encodervalue   
        print("Received Encoder info", end=" ")
        print(self.messuredSpeeds)

    def pulsesToRPM(self, pulses):
        return (pulses/(12.0*64.0))/(self.dt/(60.0*1000.0))

    def restrict(self, inin, minmin, maxmax):
        if (inin < minmin):
            return minmin
        elif (inin > maxmax):
            return maxmax
        return inin
        
    def getIndividualWheelSpeeds(self, Vx, Vy, z, scale): # Alla fyra kommer från användaren
        ret = [0, 0, 0, 0]                  # [frontLeft, frontRight, rearLeft, rearRight]
        
        #alpha = tan^-1(Vy/Vx)				# Relative direction of movement
        #magnitude = sqrt(Vx^2+Vy^2)		# Speed

        ret[0] = (Vx -Vy -z)*scale  #(sin(alpha-pi/4)*magnitude + z) * scale
        ret[1] = (Vx +Vy +z)*scale  #(sin(alpha-pi/4)*magnitude - z) * scale
        ret[2] = (Vx +Vy -z)*scale  #(sin(alpha+pi/4)*magnitude + z) * scale
        ret[3] = (Vx -Vy +z)*scale  #(sin(alpha+pi/4)*magnitude - z) * scale

        return ret
        
    def Fpd(self, motorIndex, preferredSpeed):
        Kp = 1.6
        Kd = 5

        #measuredSpeed = self.pulsesToRPM(self.messuredSpeeds[motorIndex])
        error = preferredSpeed - self.messuredSpeeds[motorIndex]

        P = Kp*error
        D = Kd*((self.messuredSpeeds[motorIndex] - self.prevoiusMeasuredSpeeds[motorIndex])/self.dt) 

        # Update previous measure
        self.prevoiusMeasuredSpeeds[motorIndex] = self.messuredSpeeds[motorIndex]

        return P + D
    
    def activateSingleRegulatorLoop(self):
        dcOutputPWMs = [0,0,0,0]
        preferredSpeeds = self.getIndividualWheelSpeeds(self.Vx, self.Vy, self.z, self.scale)

        for  i in range(4):
            dcOutputPWMs[i] = self.restrict(self.previousPWMs[i] + self.Fpd(i, preferredSpeeds[i]), -self.maxPWM, self.maxPWM)
            self.previousPWMs[i] = dcOutputPWMs[i]
        
        return dcOutputPWMs

    # ROS time
    def timer_callback(self):
        msg = MsgType.MotorValues()
        outputValues = self.activateSingleRegulatorLoop() #Convert from float to int     #self.activateSingleRegulatorLoop()
        outputValues = [int(a) for a in outputValues]
        msg.motorvalue = outputValues
        self.publisher_.publish(msg)
        print("Publishing mecanumInfo:", end=" ")
        print(msg.motorvalue)

def main(args=None):
    rclpy.init(args=args)
    pub_mecanum = pMecanumDrive()
    rclpy.spin(pub_mecanum)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pub_mecanum.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()