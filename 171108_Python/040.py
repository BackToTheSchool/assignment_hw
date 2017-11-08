# 040 필터링 레코드
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

searchKey = input("Enter a search string: ")

info = [john, tou, mic, jake, jaque, sally]
op = []
for i in range(len(info)):
	if info[i][0].__contains__(searchKey) or info[i][1].__contains__(searchKey):
		op.append(info[i])

for i in range(len(op)):
	print(op[i])
