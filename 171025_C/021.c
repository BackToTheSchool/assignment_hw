// 021 ���ڿ� �ش��ϴ� �̸����� �ٲٱ�
// 1���� 12������ ���ڸ� �ش��ϴ� �޷� ��ȯ��Ű��
// ���α׷��� ������. ���� ���ڸ� �Է¹��� ����
// �̿� �ش��ϴ� �� �̸��� ����Ѵ�.
// ���� ������ �Ѿ�� ���ڸ� �Է� ���� ��쿣
// ������ ���� ������ �������.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int month;
	char str[20];

	printf("Please enter the number of the month: ");
	scanf("%d", &month);

	switch (month) {
	case 1: strcpy(str, "January");
		break;
	case 2: strcpy(str, "February");
		break;
	case 3: strcpy(str, "March");
		break;
	case 4: strcpy(str, "April");
		break;
	case 5: strcpy(str, "May");
		break;
	case 6: strcpy(str, "June");
		break;
	case 7: strcpy(str, "July");
		break;
	case 8: strcpy(str, "August");
		break;
	case 9: strcpy(str, "September");
		break;
	case 10: strcpy(str, "October");
		break;
	case 11: strcpy(str, "November");
		break;
	case 12: strcpy(str, "December");
		break;
	default: printf("Out of range error!\n");
	}

	printf("The name of the month is %s.\n", str);
	
	system("pause");
	return 0;


}
