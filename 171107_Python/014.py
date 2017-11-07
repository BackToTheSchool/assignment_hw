# 014 세금 계산기
# 입력한 가격에 대한 세금을 계산하는 간단한 프로그램을 작성하라.
# 프로그램은 주문 가격과 함께 주 이름을 입력 받는데,
# 주 이름이 'WI'인 경우 세율은 5.5%가 된다.
# 프로그램은 위스콘신 주 거주자에 해당하는 소계, 세율, 합계 금액을 출력하지만
# 다른 주에 거주하는 경우에는 합계 금액만을 출력한다.

# Example
# What is the order amount? 10
# What is the state: WI
# The subtotal is $10.00
# The tax is $0.55
# The total is $10.55

# What is the order amount? 10
# What is the state? MN
# The total is $10.55

amount = int(input("What is the order amount? "))
state = input("What is the state: ")

if state.__eq__('WI'):
    print("The subtotal is $%.2f" % amount)
    print("The tax is $%.2f" % (amount * 0.055))

print("The total is $%.2f" % (amount * 1.055))
