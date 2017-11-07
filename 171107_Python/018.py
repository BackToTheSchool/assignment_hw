# 018 온도 변환
# 화씨온도와 섭씨온도를 서로 변환시키는 프로그램 작성

# Example
# Press C to convert from Fahrenheit to Celsius
# Press F to convert from Celsius to Fahrenheit
# Your choice: C

# Please enter the temperature in F: 32
# The temperature in Celsius is 0.

print("Press C to convert from Fahrenheit to Celsius")
print("Press F to convert from Celsius to Fahrenheit")

tempType = input("Your choice: ")


if tempType.__eq__("C"):
    temperature = int(input("Please enter the temperature in F: "))
    print("The temperature in Celsius is %.1f" % ((temperature - 32) * 5 / 9))
else:
    temperature = int(input("Please enter the temperature in C: "))
    print("The temperature in Celsius is %.1f" % (temperature * 9 / 5 + 32))
