# 039 레코드 정렬
# 앞의 직원 명단을 Last Name으로 정렬시킨 다음,
# 그 결과를 표 형태로 출력하는 프로그램을 작성하라.

# fName     lName       position        sepDate
# John      Johnson     Manager         2016-12-31
# Tou       Xiong       SoftEngineer    2016-10-15
# Michaela  Michaelson  District Man.   2015-12-19
# Jake      Jacobson    Programmer
# Jacquelyn Jackson     DBA
# Sally     Weber       Web Developer   2015-12-18

john = ['John', 'Johnson', 'Manager', '2016-12-31']
tou = ['Tou', 'Xiong', 'SoftEngineer', '2016-10-15']
mic = ['Michaela', 'Michaelson', 'District Man', '2015-12-19']
jake = ['Jake', 'Jacobson', 'Programmer', '']
jaque = ['Jacquelyn', 'Jackson', 'DBA', '']
sally = ['Sally', 'Weber', 'Web Developer', '2015-12-18']

info = [john, tou, mic, jake, jaque, sally]
fName = [john[1], tou[1], mic[1], jake[1], jaque[1], sally[1]]
info.sort()

for i in range(len(info)):
	print(info[i])
