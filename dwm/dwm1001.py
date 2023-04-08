import serial
import struct

ser = serial.Serial('/dev/ttyTHS1',9600,timeout=1)

while True:
	data = ser.read_until(b'Wx14')
	if len(data)< 5:
		continue
	id = data[0]
	dist1 = int.from_bytes(data[1:3], byteorder='little', signed=True)
	dist2 = int.from_bytes(data[3:5], byteorder='little', signed=True)
	#if dist1>0 and dist2>0:
	print(dist1,dist2)



