# 034 사원 명단 삭제
# 사원 명단이 들어있는 프로그램을 작성하라.
# 프로그램이 실행되면 리스트 안에 있는 모든 사원들의
# 이름을 출력한 다음, 명단에서 삭제할 이름을 입력받고
# 해당하는 이름을 제거한다.
# 그리고는 나머지 명단을 한 줄씩 출력한다.

empList = ["John Smith", "Jackie Jackson", "Chris Jones", "Amanda Cullen", "Jeremy Goodwin"]

print(empList)
delName = input("Which one do you want to delete? ")

if any(delName in i for i in empList):
	empList.remove(delName)
	print(empList)
else:
	print("No such name in the list.")
