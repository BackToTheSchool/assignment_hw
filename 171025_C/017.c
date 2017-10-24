// 017 ���� ���ڿ� �� ����
// ������, ����, ���ַ�(�� ��), ���� ���� �ش��ϴ� ���ڿ÷�,
// ���������� ���� ���� �� ��� �ð��� �Է� ���� ����
// �������� �̿��Ͽ� ���� ���ڿ� ��(BAC)��
// ���ϴ� ���α׷��� �ۼ��϶�.
// BAC = (���ݷ�*5.14/������*����� ���)-0.015 *��� �ð�

// Example
// Your BAC is 0.08
// It is not legal for you to drive.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double r(char sex[7]) {
	int c = 0;
	while (c == 0) {
		if (!strcmp(sex, "M"))
			return 0.73;
		else if (!strcmp(sex, "F"))
			return 0.6;
		else
			scanf("%s", &sex);
	}
}

int filter(char ip[10]) {
	int gonext = 0;	// �������� �������� Ȯ���ؼ� �������� �Ѿ���� �Ǻ��ϴ� Ű
	int i = 0;		// ���� for�� ī����
	int c = 0;		// �� �Լ� ���� �� �ݺ��Ǵ� Ƚ�� ī����
	int result = 0;

	while (gonext != strlen(ip) * 4) {	// �������� �Ǻ�
		if (c != 0) {	// ó������ Ȯ���ؼ� ó���� �ƴϸ� ���� �ޱ�
			printf("Wrong input. Please enter integer. ");
			scanf("%s", ip);
		}
		for (i = 0; i < strlen(ip); i++) {	// ���ڸ� gonext ��ȭx
			if (isdigit(ip[i]) == 0)
				gonext = 0;
			else {		// ���ڸ� ���� �ϳ��� gonext 4 ����
				gonext = gonext + 4;
				result = result * 10 + ip[i] - 48;	// ���ڸ� ���ڷ� ��ȯ
			}
		}
		c++;
	}
	return result;
}

int main() {

	char A[10], W[10], H[10];
	int alc, weight, hour;
	double BAC;
	char sex[7];

	printf("How much you drunk? ");
	scanf("%s", &A);
	alc = filter(A);
	printf("What is your weight? ");
	scanf("%s", &W);
	weight = filter(W);
	printf("What is your sex?(M/F) ");
	scanf("%s", &sex);
	printf("How many hours past after you drink? ");
	scanf("%s", &H);
	hour = filter(H);

	BAC = (alc*5.14 / weight*r(sex)) - 0.015*hour;
	
	printf("Your BAC is %.2lf\n", BAC);
	if (BAC<0.08)
		printf("It is legal for you to drive.\n");
	else
		printf("It is not legal for you to drive.\n");

	system("pause");
	return 0;


}
