
""" Step 1:
•	Connect VCC Pin of PCA9685 to 3.3 Volt Pin of Jetson Nano (Pin 1 upper outside)
•	Connect GND Pin of PCA9685 to Jetson Nano GND (Row 3, inside pin)
•	Connect SDA Pin of PCA9685 to Jetson Nano Pin 3 (Row 2, outside pin)
•	Connect SCL Pin of PCA9685 to Jetson Nano Pin 5 (Row 3, outside pin) """

from adafruit_servokit import ServoKit
myKit=ServoKit(channels=16)
import time
for i in range(0,180,1):
    myKit.servo[1].angle=i
    time.sleep(.1)