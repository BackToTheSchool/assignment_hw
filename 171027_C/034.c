// 034 ��� ��� ����
// ��� ����� ����ִ� ���α׷��� �ۼ��϶�.
// ���α׷��� ����Ǹ� ����Ʈ �ȿ� �ִ� ��� �������
// �̸��� ����� ����, ��ܿ��� ������ �̸��� �Է¹ް�
// �ش��ϴ� �̸��� �����Ѵ�.
// �׸���� ������ ����� �� �پ� ����Ѵ�.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main() {

	char employeeList[5][20];
	char delName[20];
	employeeList = { "John Smith", "Jackie Jackson",
		"Chris Jones", "Amanda Cullen", "Jeremy Goodwin" };

	printf("There are " + employeeList.length + " employees:");
	for (String anEmployeeList : employeeList) {
		System.out.println(anEmployeeList);
	}
	System.out.print("Enter an employee name to remove: ");
	delName = scan.nextLine();

	for (int i = 0; i<employeeList.length; i++) {
		if (employeeList[i].equals(delName)) {
			for (; i<employeeList.length - 1; i++)
				employeeList[i] = employeeList[i + 1];
		}
	}

	employeeList[employeeList.length - 1] = "";

	for (String anEmployeeList : employeeList) {
		System.out.println(anEmployeeList);
	}


	system("pause");
	return 0;
}