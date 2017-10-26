// 029 �߸� �� �Է� ó��
// �������ڸ� �ۼ�Ʈ ������ ���� ����,
// �������� �� 2�谡 �Ǵµ����� �ɸ��� �Ⱓ��
// ����ϴ� ���α׷��� ¥��.

// years = 72/r

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_integer(char ip[10]) {
	int i, c, tmp;		// ī���� i, ���� Ȯ�� ��ū c, ��ȯ�� ���� ���� tmp
	c = 0, tmp = 0;
	for (i = 0; i < strlen(ip); i++) {
		if (ip[i] >= 48 && ip[i] <= 57) {
			c++;
		}
	}

	if (c == strlen(ip)) {
		for (i = 0; i < strlen(ip); i++) {
			tmp = tmp * 10 + ip[i]-48;
		}
		return tmp;
	}
	else return -1;
}

int main() {
	double year;
	char rate[10];

	strcpy(rate, "r");		// �ʱ�ȭ

	while (check_integer(rate) == -1) {
		printf("What is the rate of return? ");
		scanf("%s", &rate);

		year = check_integer(rate)/72;

		if (check_integer(rate) !=-1) {	// �������� Ȯ���ϰ� �ƴϸ� error
			if (check_integer(rate) == 0)
				printf("Divide by 0 error.\n");	// ���ܵ� 0�̸� ����
			else
				printf("It wiil take %.1lf years to double your initial investment\n", year);
			//������ ��� �� ����
		}
		else
			printf("Sorry. That's not a valid input.\n");
	}

	system("pause");
	return 0;


}
