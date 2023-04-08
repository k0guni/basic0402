import time
import busio

from board import SCL, SDA
from adafruit_pca9685 import PCA9685
from adafruit_motor import motor

i2c = busio.I2C(SCL, SDA)

pca = PCA9685(i2c, address=0x40)
pca.frequency = 100

pca.channels[0].duty_cycle = 0xFFFF
pca.channels[5].duty_cycle = 0xFFFF
pca.channels[6].duty_cycle = 0xFFFF
pca.channels[11].duty_cycle = 0xFFFF

motor1 = motor.DCMotor(pca.channels[1], pca.channels[2])
motor2 = motor.DCMotor(pca.channels[3], pca.channels[4])
motor3 = motor.DCMotor(pca.channels[8], pca.channels[7])
motor4 = motor.DCMotor(pca.channels[10], pca.channels[9])

print("Forwards slow")
motor1.throttle = 0.5
motor2.throttle = 0.5
motor3.throttle = 0.5
motor4.throttle = 0.5
time.sleep(3)

print("Forwards")
motor1.throttle = 1
motor2.throttle = 1
motor3.throttle = 1
motor4.throttle = 1
time.sleep(3)

print("Backwards")
motor1.throttle = -1
motor2.throttle = -1
motor3.throttle = -1
motor4.throttle = -1
time.sleep(3)

print("Backwards slow")
motor1.throttle = -0.5
motor2.throttle = -0.5
motor3.throttle = -0.5
motor4.throttle = -0.5
time.sleep(3)

print("Stop")
motor1.throttle = 0
motor2.throttle = 0
motor3.throttle = 0
motor4.throttle = 0
time.sleep(3)

print("Spin freely")
motor1.throttle = None
motor2.throttle = None
motor3.throttle = None
motor4.throttle = None

pca.deinit()
