// 016 �չ������� ���� ������ ����
// ���̸� �Է� �޾� �̱����� ���� ������ ������ 16����
// ���Ͽ� 16�� �̻��̸� "You are old enough to legally drive."��� ����ϰ�,
// 16 �̸��̸�
// "You are not old enough to legally drive."��� ����ϴ�
// ���α׷��� �ۼ��϶�.

// Example
// What is the your age? 15
// You are not old enough to legally drive.

// What is the your age? 35
// You are old enough to legally drive.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int age;

	printf("What is your age? ");
	scanf("%d", &age);

	if (age >= 16)
		printf("You are old enough to legally drive.\n");
	else
		printf("You are not old enough to legally drive.\n");

	system("pause");
	return 0;


}
