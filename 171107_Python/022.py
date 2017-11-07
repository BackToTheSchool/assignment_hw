# 022 숫자 비교
# 세 개의 숫자를 입력 받은 다음,
# 먼저 세 개의 숫자가 다른지를 확인하여
# 같은숫자가 있다면 프로그램을 종료시키고,
# 그렇지 않은 경우에는 입력한 세 개의 숫자 중
# 가장 큰 수를 출력 시키는 프로그램을 작성하라.

# Example
# Enter the first number: 1
# Enter the second number: 51
# Enter the third number: 2
# The largest number is 51

number = [0 for _ in range(3)]
for i in range(0, 3):
    number[i] = int(input("Enter the number %d: " % (i + 1)))

if number[0] == number[1] and number[1] == number[2]:
    print("All three numbers are same.")
else:
    print(max(number), "is the biggest number among three.")

