# 019 BMI 계산기
# 사용자로부터 사람의 키(인치 단위), 몸무게(파운드 단위)를
# 입력 받아 BMI를 계산하는 프로그램을 작성하라.
# BMI = (weight/(height * height))*703

# Example
# Your BMI is 19.5
# You are within the ideal weight range.

# Your BMI is 32.5
# You are overweight. You should see your doctor.

weight = int(input("Weight: "))
height = int(input("Height: "))
bmi = weight / (height ** 2) * 703

print("Your BMI is %.1f" % bmi)

if bmi > 22.5:
    print("You are overweight. You should see your doctor.")
elif bmi < 19:
    print("You are underweight. You should see your doctor.")
else:
    print("You are wihtin the ideal weight range.")

