# 035 대회 또는 그리기 대회의 수상자를 선택하는 프로그램을 작성하라.
# 프로그램은 아무것도 입력하지 않을 때까지 대회 참가자 이름을
# 입력 받은 다음 이 중에서 무작위로 수상자를 선정한다.

# Example
# Enter a name: Homer
# Enter a name: Bart
# Enter a name: Maggie
# Enter a name: Lisa
# Enter a name: Moe
# Enter a name:
# The winner is... Maggie
import random

listA = [" "]

i = 1
while not listA[i-1].__eq__(""):    # 이전 입력이 공백이 아닐경우 반복
	tmp = input("Enter a name: ")
	listA.append(tmp)   # 배열의 마지막 요소 다음에 추가
	i += 1

listA.__delitem__(0)        # 배열 첫 요소와 마지막 요소를 지워줌
listA.__delitem__(len(listA)-1)

randNum = int(random.random() * len(listA))
# 배열의 번호는 정수형이어야 하므로 int로 캐스트

print("The winner is... %s." % listA[randNum])
