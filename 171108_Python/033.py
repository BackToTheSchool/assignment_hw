# 033 Magic 8 Ball
# Magic 8 Ball 게임을 작성하라.
# Magic 8 Ball 게임은 사용자로부터 질문을 입력받아
# 이에 대한 답을 "Yes", "No", "Maybe", "Ask again later"
# 등 중에서 무작위로 대답해주는 게임이다.
import random

import math

print("Magic 8 Ball game start")
input("What is your question? ")

randNumber = math.floor(random.random() * 4)

if randNumber == 0:
	print("Yes.")
elif randNumber == 1:
	print("No.")
elif randNumber == 2:
	print("Maybe.")
else:
	print("Ask again later.")
