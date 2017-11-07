# 028 숫자 추가
# 네 숫자를 입력 받아서 그 합을 출력하는 프로그램을 작성하시오.

number = [0 for _ in range(4)]

for i in range(4):
	number[i] = int(input("Enter number %d: " % (i + 1)))

print("Sum of four numbers is", sum(number))
