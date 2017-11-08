# 037 암호 생성기
# 안전한 암호를 생성하는 프로그램을 작성하시오
# 암호의 최소 길이, 특수문자 개수, 숫자 개수를
# 입력 받으면 이에 해당하는 암호를 생성한다.

# Example
# What's the minimum length? 8
# How many special characters? 2
# How many numbers? 2
# Your password is aurn2$1s#
import random

length = int(input("What's the minimum length? "))
spChar = int(input("How many special characters? "))
num = int(input("How many numbers? "))


def rand_alpha():
	alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
	         'v', 'w', 'x', 'y', 'z']
	rand = int(random.random() * len(alpha))

	return alpha[rand]


def rand_sp_char():
	sp_char = ['!', '@', '#', '$']
	rand = int(random.random() * len(sp_char))

	return sp_char[rand]


def rand_num():
	return int(random.random() * 9).__str__()


password = ""
spCount = 0
nCount = 0
aCount = 0

for i in range(length-2):
	if spCount < spChar and nCount < num and aCount < (length - spChar - num):
		randKey = int(random.random() * 3)  # 문자, 특문, 숫자 중 어떤 걸 넣을지 정해주는 키
		if randKey == 0:
			password += rand_alpha()
			aCount += 1
		elif randKey == 1:
			password += rand_sp_char()
			spCount += 1
		else:
			password += rand_num()
			nCount += 1

	if spCount >= spChar and nCount < num and aCount < (length - spChar - num):
		randKey = int(random.random() * 1)  # 문자, 특문, 숫자 중 어떤 걸 넣을지 정해주는 키
		if randKey == 0:
			password += rand_alpha()
			aCount += 1
		else:
			password += rand_num()
			nCount += 1

	if spCount < spChar and nCount >= num and aCount < (length - spChar - num):
		randKey = int(random.random() * 1)  # 문자, 특문, 숫자 중 어떤 걸 넣을지 정해주는 키
		if randKey == 0:
			password += rand_alpha()
			aCount += 1
		else:
			password += rand_sp_char()
			spCount += 1

	if spCount < spChar and nCount < num and aCount >= (length - spChar - num):
		randKey = int(random.random() * 1)  # 문자, 특문, 숫자 중 어떤 걸 넣을지 정해주는 키
		if randKey == 0:
			password += rand_num()
			nCount += 1
		else:
			password += rand_sp_char()
			spCount += 1

	if spCount >= spChar and nCount >= num and aCount < (length - spChar - num):
		password += rand_alpha()

	if spCount >= spChar and nCount < num and aCount >= (length - spChar - num):
		password += rand_num()

	if spCount < spChar and nCount >= num and aCount >= (length - spChar - num):
		password += rand_sp_char()

print(password)
