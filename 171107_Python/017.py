# 017 혈중 알코올 농도 계산기
# 몸무게, 성별, 음주량(잔 수), 마신 술에 해당하는 알코올량,
# 마지막으로 술을 마신 후 경과 시간을 입력 받은 다음
# 다음식을 이용하여 혈중 알코올 농도(BAC)를
# 구하는 프로그램을 작성하라.
# BAC = (알콜량*5.14/몸무게*흡수비 계수)-0.015 *경과 시간

# Example
# Your BAC is 0.08
# It is not legal for you to drive.

weight = int(input("Weight: "))
sex = input("Sex (m/f): ")
alcohol = int(input("Alcohol: "))
timeLeft = int(input("Time left: "))

if sex.__eq__("m"):
    bac = (alcohol * 5.14 / weight * 0.73) - 0.015 * timeLeft
elif sex.__eq__("f"):
    bac = (alcohol * 5.14 / weight * 0.6) - 0.015 * timeLeft
else:
    print("input error")

print("Your BAC is %.2f" % bac)

if bac > 0.05:
    print("It is not legal for you to drive.")
else:
    print("It is legal for you to drive.")
