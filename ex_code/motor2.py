#!/usr/bin/python
# -*- coding: utf-8 -*-

import Adafruit_PCA9685
import time

# Initialise the PCA9685 using desired address and/or bus:
pwm = Adafruit_PCA9685.PCA9685(address = 0x40, busnum = 1)

# Number of servo
servo_num = 12

# Set frequency to 60[Hz]
pwm.set_pwm_freq(60)

while True:
    channel  = input(1)
    position = input(150)
    pwm.set_pwm(channel, 0, position)
    time.sleep(2)


