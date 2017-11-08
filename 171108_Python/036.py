# 036 통계 계산
# 웹사이트의 응답시간을 밀리초로 받는 프로그램을 작성하라.
# 사용자가 'done'이라고 입력할 때까지 응답시간을 받는다.
# 그 다음 평균 응답시간, 최소 응답시간, 최대 응답시간, 표준편차를 출력하자.
# 평균 값을 구하는 방법은 다음과 같다.

# Example
# Enter a number: 100
# Enter a number: 200
# Enter a number: 1000
# Enter a number: 300
# Enter a number: done
# Numbers: 100, 200, 1000, 300
# The average is 400.
# The min is 100.
# The max is 1000.
# The standard deviation is 400.25.
import sys

import math

times = [" "]
items = []
addUp = 0
addUp2 = 0

i = 1
while not times[i-1].__eq__("done"):
	tmp = input("Enter a number: ")
	times.append(tmp)
	i += 1

times.__delitem__(len(times)-1)
times.__delitem__(0)

sys.stdout.write("Numbers: ")
for j in range(len(times)):
	sys.stdout.write("%d, " % int(times[j]))
	addUp += int(times[j])
print("")

for i in range(len(times)):
	items.append(pow(int(times[i]) - addUp / len(times), 2))
	addUp2 += items[i]

addUp2 = math.sqrt(addUp2 / len(items))

print("The average is %.1f" % (addUp / len(times)))
print("The minimum is %s" % min(times))
print("The maximum is %s" % max(times))
print("The standard deviation is %.1f" % addUp2)
