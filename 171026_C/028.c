// 028 �Է� �� ����
// �̸��� ��, ���, �����ȣ�� �Է� ���� ����,
// ������ ���� ��Ģ�� �´����� �����ϴ� ���α׷� ������.
// �̸��� �ݵ�� �־�� �Ѵ�.
// ���� �ݵ�� �־�� �Ѵ�.
// �̸��� ���� �ּ��� �� ���� �̻��̾�� �Ѵ�.
// ����� AA-1234�� ���°� �Ǿ�� �Ѵ�.
// ��, �� ������ ���ĺ�, ������, 4�ڸ� ���ڷ� ����
// �����ȣ�� �ݵ�� ���ڿ����Ѵ�.
// �߸� �� �����Ͱ� �ԷµǸ� �����޽��� ���

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int item[5], i, sum;

	printf("Enter the first number: ");
	scanf("%d", &item[0]);
	printf("Enter the second number: ");
	scanf("%d", &item[1]);
	printf("Enter the third number: ");
	scanf("%d", &item[2]);
	printf("Enter the fourth number: ");
	scanf("%d", &item[3]);
	printf("Enter the fifth number: ");
	scanf("%d", &item[4]);

	sum = 0;
	for (i = 0; i < 5; i++) {
		sum = sum + item[i];
	}

	printf("The total is %d\n", sum);


	system("pause");
	return 0;


}
