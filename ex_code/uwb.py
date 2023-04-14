import serial
import struct

ser = serial.Serial('/dev/ttyTHS1',115200,timeout=1)

while True:
	if ser.in_waiting > 5:
		data1 = ser.read(2)
		data2 = ser.read(2)
		values1 = struct.unpack('<H',data1)[0]
		values2 = struct.unpack('<H',data2)[0]-50
		if (values1 < 3000)and(values1 != 2580)and(values1 != 1300)and(values1 != 2068)and(values2 < 3000)and(values2 != 2580)and(values2 != 1300)and(values2 != 2068)and(values2 != 1812):
			#print("dist1:{},dist2:{}".format(values1,values2))
			#print("dist1:{}".format(values1))
			#print(values1)
			if abs(values1 - values2) < 250:
				print("Go straight dist1:{}, dist2:{}".format(values1,values2))
			elif (values1 - values2) > 250:
				print("turn left dist1:{}, dist2:{}".format(values1,values2))
			elif (values2 - values1) > 250:
				print("turn right dist1:{}, dist2;{}".format(values1,values2))