# 020 여러 주를 지원하는 세금 계산기
# 여러 주와 하나의 주 내에 있는 카운티에 따라 달라지는
# 세금 계산기를 작성하라. 먼저 주문가격을 입력 받고
# 주문할 주를 입력 받는다.
# 위스콘신 주의 경우에는 카운티를 추가로 입력 받는다.

tax = 0.05

amount = int(input("Amount: "))
state = input("State: ")
county = input("County: ")

if state.__eq__("WI"):
    print("Subtotal: $%.2f" % amount)
    if county.__eq__("Dunn"):
        tax = amount * 0.055
        print("Tax: $%.2f" % tax)
    else:
        tax = amount * 0.06
        print("Tax: $%.2f" % tax)
    print("Total: $%.2f" % (amount + tax))
else:
    print("Total: $%.2f" % (amount + tax))
