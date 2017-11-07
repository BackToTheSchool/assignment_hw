# 021 숫자에 해당하는 이름으로 바꾸기
# 1부터 12까지의 숫자를 해당하는 달로 변환시키는
# 프로그램을 만들어보자. 먼저 숫자를 입력받은 다음
# 이에 해당하는 달 이름을 출력한다.
# 만일 범위를 넘어서는 숫자를 입력 받은 경우엔
# 적절한 에러 문구를 출력하자.


month = int(input("Enter a month: "))

monthInAlpha = ['January', 'February', 'March', 'April', 'May', 'June',
                'July', 'August', 'September', 'October', 'November', 'December']

if month > 12 or month < 0:
    print("Out of range error")
else:
    print("%d is %s in alphabet" % (month, monthInAlpha[month-1]))
