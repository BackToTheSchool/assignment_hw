# 032 숫자 맞추기 게임
# 난이도 1: 1~10, 2: 1~100, 3: 1~1000
# 난이도를 입력받고 게임을 시작
# 범위 내에서 무작위 숫자를 하나 선택 후
# 맞추라고 출력
# 플레이어가 맞는 숫자를 입력 할 때 마다,
# 업다운 출력
# 정답을 맞추면 몇번만에 맞췄는지 출력하고
# 게임을 다시 할 것인지 묻는다.
import random

import math

print("Let's play Guess the Number.")
difficulty = int(input("Enter the level of difficulty(1~3): "))

again = "y"
while again.__eq__("y"):
	if 1 <= difficulty <= 3:
		limit = pow(10, difficulty)
	else:
		print("Wrong input")
		break

	randomNumber = math.ceil(random.random() * limit) + 1
	c = 0
	guess = -1

	while not guess == randomNumber:
		guess = int(input("I have my number. What's your guess? "))

		if guess > randomNumber:
			c += 1
			print("Too high! guess again.")
		elif guess < randomNumber:
			c += 1
			print("Too low! guess again.")
		elif guess == randomNumber:
			c += 1
			print("Correct! You got it in %d guesses." % c)
		else:
			print("Wrong input")
	again = input("Play again?(y/n) ")
