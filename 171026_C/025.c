// 025 ��ȣ ���� ����
// �־��� ��ȣ�� ���⵵�� �����ϴ� ���α׷��� �ۼ��϶�.
// ���⵵�� ������ ���� ��Ģ���� ���Ѵ�.
// ���� ���� ��ȣ�� ���ڷθ� ����, ���̵� 8�� �̸�
// ���� ��ȣ�� �����ڷθ� ���� ���̵� 8�� �̸�
// ���� ��ȣ�� ������ �� �� �̻��� ����, 8�� �̻�
// ���� ���� ��ȣ�� ������, ����, Ư�����ڷ� ���� 8�̻�

// Example
// The password '12345'is a very weak password
// The password 'abcdef'is a weak password
// The password 'abc123xyz'is a strong password
// The password '1337h@xor'is a very strong password

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int passwordValidator(char pass[16]) {
	int c, i, s, j;	// ���� c ���� i, Ư������ s, ī���� j
	c = 0; i = 0; s = 0;
	for (j = 0; j < strlen(pass); j++) {
		if ((pass[j] >= 48 )&&( pass[j] <= 57)) {
			i++;
		}
		else if ((pass[j] >= 65) && (pass[j] <= 90) || (pass[j] >= 97) && (pass[j] <= 122)) {
			c++;
		}
		else
			s++;
	}

	if (s == 0 && c == 0 && (s + c + i) < 8) {
		return 0;
	}
	else if (i == 0 && s == 0 && (s + c + i) < 8) {
		return 1;
	}
	else if (c >= 1 && (s + c + i) >= 8 && i >= 1&&s==0) {
		return 2;
	}
	else if (c >= 1 && (s + c + i) >= 8 && i >= 1 && s >= 1) {
		return 3;
	}
	else
		return 4;

}

int main() {
	int i;
	char pass[16], hard[12];

	printf("Please enter the passwod: ");
	scanf("%s", &pass);
	
	switch (passwordValidator(pass)) {
	case 0:
		strcpy(hard, "very weak");
		break;
	case 1:
		strcpy(hard, "weak");
		break;
	case 2:
		strcpy(hard, "strong");
		break;
	case 3:
		strcpy(hard, "very strong");
		break;
	default:
		strcpy(hard, "normal");
		break;
	}

	printf("The password \'%s\' is a %s password\n", pass, hard);

	system("pause");
	return 0;


}
