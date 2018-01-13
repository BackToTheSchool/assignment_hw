import serial

ser = serial.Serial('/COM5', timeout=1)
print(ser.name)
while True:
    a = ser.readline()
    decode_str_data = a.decode('utf-8')
    print(decode_str_data)
ser.close()
