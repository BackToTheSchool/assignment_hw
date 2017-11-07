# 007 직사각형 방의 면적
# 방의 면적을 계산하는 프로그램을 작성하라. 방의 길이와 폭을
# 피트 단위로 입력 받은 다음 제곱피트와 제곱 미터로 면적을 나타내라.

# Example
# What is the length of the room in feet? 15
# What is the width of the room in feet? 20
# You entered dimensions of 15 feet by 20 feet
# The area is
# 300 square feet
# 27.871 square meters

length = int(input("What is the length of the room in feet? "))
width = int(input("What is the width of the room in feet? "))

print("You entered dimensions of", length, "feet by", width, "feet")
print("The area is", length*width, "square feet")
print("%.3f square meters" % (length*width*0.0929))

