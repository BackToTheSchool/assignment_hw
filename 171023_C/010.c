// 010 ���� ����
// ������ ���� ���� �ý����� ����� ����.
// �� ���� ������ ���ݰ� ������ ���� �Է� ���� ���� �Ұ踦 ���ϰ�
// �Ұ迡 ���� 5.5%�� ������ �������.
// �׸��� ���� ������ ������ ��ü ������ ����� �� ���� �Ұ�, ����, �հ� �ݾ��� �������.

// Example
// Price of item 1: 25
// Quantity of item 1: 2
// Price of item 2: 10
// Quantity of item 2: 1
// Price of item 3: 4
// Quantity of item 3: 1
// Subtotal : $64.00
// Tax: $3.52
// Total: $67.52

#include <stdio.h>
#include <stdlib.h>

#define TAX_PER 0.055;

int main() {

	int item[3][2], i;
	double subtotal, tax, total;
	subtotal = 0;
	tax = 0;
	total = 0;
	
	for (i = 0; i < 3; i++) {
		printf("Price of item %d: ",i+1);
		scanf("%d", &item[i][0]);
		printf("Quantity of item %d: ",i+1);
		scanf("%d", &item[i][1]);
	}

	for (i = 0; i < 3; i++) 
		subtotal = subtotal + item[i][0]*item[i][1];
	
	tax = subtotal * TAX_PER;
	total = subtotal + tax;


	printf("Subtotal: $%.2lf\n", subtotal);
	printf("Tax: $%.2lf\n", tax);
	printf("Total: $%.2lf\n", total);

	system("pause");
	return 0;


}
