# 010 셀프 계산대
# 간단한 셀프 계산대 시스템을 만들어 보자.
# 세 가지 물건의 가격과 수량을 각각 입력 받은 다음 소계를 구하고
# 소계에 대한 5.5%의 세금을 계산하자.
# 그리고 물건 종류별 수량과 전체 수량을 출력한 후 가격 소계, 세금, 합계 금액을 출력하자.

# Example
# Price of item 1: 25
# Quantity of item 1: 2
# Price of item 2: 10
# Quantity of item 2: 1
# Price of item 3: 4
# Quantity of item 3: 1
# Subtotal : $64.00
# Tax: $3.52
# Total: $67.52

price = [0 for _ in range(3)]              # 배열 price 선언, 0 으로 초기화
quantity = [0 for _ in range(3)]
total = 0

for i in range(0, 3):                       # i가 0~2 반복
    print("Price of item %d: " % (i+1))
    price[i] = int(input())
    print("Quantity of item %d: " % (i+1))
    quantity[i] = int(input())
    total += price[i] * quantity[i]

print("Subtotal : $%.2f" % total)
print("Tax :$%.2f" % (total * 0.055))
print("Total : $%.2f" % (total * 1.055))


