# 016 합법적으로 운전 가능한 연령
# 나이를 입력 받아 미국법상 운전 가능한 나이인 16세와
# 비교하여 16세 이상이면 "You are old enough to legally drive."라고 출력하고,
# 16 미만이면
# "You are not old enough to legally drive."라고 출력하는
# 프로그램을 작성하라.

# Example
# What is the your age? 15
# You are not old enough to legally drive.

# What is the your age? 35
# You are old enough to legally drive.

LEGAL_AGE = 16

age = int(input("What is your age? "))

if age < LEGAL_AGE:
    print("You are not old enough to legally drive.")
else:
    print("You are old enough to legally drive.")