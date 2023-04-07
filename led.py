import Jetson.GPIO as GPIO
import time

led_pin = 33

# Set up GPIO mode and output pin
GPIO.setmode(GPIO.BOARD)
GPIO.setup(led_pin, GPIO.OUT)

# Blink LED 5 times
for i in range(5):
    GPIO.output(led_pin, GPIO.HIGH)
    time.sleep(1)
    GPIO.output(led_pin, GPIO.LOW)
    time.sleep(1)
print(1)
# Clean up GPIO pins
GPIO.cleanup()

