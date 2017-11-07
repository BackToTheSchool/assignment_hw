# 029 잘못 된 입력 처리
# 복리이자를 퍼센트 단위로 받은 다음,
# 원리금이 총 2배가 되는데까지 걸리는 기간을
# 계산하는 프로그램을 짜라.

# years = 72/r

rate = 0

while rate.__eq__("0") or not rate.isnumeric():
	rate = input("What is the rate of return? ")

	if rate.__eq__("0"):
		print("Can't divide number by 0.")
	elif not rate.isnumeric():
		print("Sorry, That's not a valid input.")
	else:
		print("It will take %d years to double your initial investment" % (72 / int(rate)))
