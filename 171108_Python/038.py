# 038 필터링 값
# 숫자 리스트를 입력 받고 공백글자로 나누어 저장한 다음
# 이 중에 짝수만 들어 있는 새로운 배열을 만들어 출력
# 하는 프로그램을 작성하라.

# Example
# Enter a list of numbers, separated by spaces:
#  1 2 3 4 5 6 7 8
# The even numbers are 2 4 6 8.


print("Enter a list of numbers, separated by spaces")

ip = input()
ip = ip.split(' ')

even = []
for i in range(len(ip)):
	if int(ip[i]) % 2 == 0:
		even.append(ip[i])

print("The even numbers are", even)
