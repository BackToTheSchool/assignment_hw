// 015 ��ȣ ����
// ����� �α��� ������ �����ϴ� ������ ���α׷��� �ۼ��϶�.
// ���α׷��� ������� �̸��� �Ӥ�ȣ�� �Է� ���� ����,
// �̸� ����� ����� �̸��� ���� ��ȣ�� ���Ͽ� ��ȣ�� ��ġ�ϸ�
// "Welcome!"��, �׷��� ������, "That password is incorrect."�� ����Ѵ�.


// Example
// What is the password? 12345
// That password is incorrect.

// What is the password? abc$123
// Welcome!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char passin[16], pass[16];

	strcpy(pass, "abc$123");		// ���ڿ� �ʱ�ȭ

	printf("What is the password? ");
	scanf("%s", &passin);
	if (!strcmp(passin, pass))
		printf("Welcome!\n");
	else
		printf("That password is in correct.\n");

	system("pause");
	return 0;


}
