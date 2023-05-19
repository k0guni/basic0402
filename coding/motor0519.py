import time
import busio

from board import SCL_1, SDA_1
from adafruit_pca9685 import PCA9685

i2c = busio.I2C(SCL_1, SDA_1)

pca = PCA9685(i2c, address=0x40)
pca.frequency = 100

pwm_channel = 0
dir_channel = 1
brk_channel = 2


def motor(speed, i):

    if speed > 100:
        speed = 100
    elif speed < -100:
        sped = -100
    if speed == 0:
        pca.channels[dir_channel+4*i].duty_cycle = int(0xffff)
        pca.channels[brk_channel+4*i].duty_cycle = int(0xffff)
    elif speed > 0:
        pca.channels[dir_channel+4*i].duty_cycle = int(0xffff)
        pca.channels[brk_channel+4*i].duty_cycle = int(0x0000)
        pca.channels[pwm_channel+4*i].duty_cycle = int((speed/100) * (0xffff/100))
    else:
        pca.channels[dir_channel+4*i].duty_cycle = int(0x0000)
        pca.channels[brk_channel+4*i].duty_cycle = int(0x0000)
        pca.channels[pwm_channel+4*i].duty_cycle = int((speed/100) * (0xffff/100))

print("Fowards slow")
motor(50,0)
motor(50,1)
motor(50,2)
motor(50,3)
time.sleep(3)

print("Fowards")
motor(100,0)
motor(100,1)
motor(100,2)
motor(100,3)
time.sleep(3)

print("Backwards slow")
motor(-50,0)
motor(-50,1)
motor(-50,2)
motor(-50,3)
time.sleep(3)

print("Backwards")
motor(-100,0)
motor(-100,1)
motor(-100,2)
motor(-100,3)
time.sleep(3)

print("Stop")
motor(0,0)
motor(0,1)
motor(0,2)
motor(0,3)
time.sleep(3)

pca.deinit()