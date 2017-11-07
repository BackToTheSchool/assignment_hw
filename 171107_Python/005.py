# 005 간단한 수학
# 두 개의 숫자를 입력 받은 후, 두 숫자를 이용한 사칙연산 결과를
# 다음의 출력 예와 같이 나타내보자.

# What is the first number? 10
# What is the second number? 5
# 10 + 5 = 15
# 10 - 5 = 5
# 10 * 5 = 50
# 10 / 5 = 2


firstNumber = float(input("What is the first number? "))
secondNumber = float(input("What is the second number? "))

print(firstNumber, '+', secondNumber, '=', firstNumber + secondNumber)
print(firstNumber, '-', secondNumber, '=', firstNumber - secondNumber)
print(firstNumber, '*', secondNumber, '=', firstNumber * secondNumber)
print(firstNumber, '/', secondNumber, '=', firstNumber / secondNumber)
