// 014 ���� ����
// �Է��� ���ݿ� ���� ������ ����ϴ� ������ ���α׷��� �ۼ��϶�.
// ���α׷��� �ֹ� ���ݰ� �Բ� �� �̸��� �Է� �޴µ�,
// �� �̸��� 'WI'�� ��� ������ 5.5%�� �ȴ�.
// ���α׷��� �����ܽ� �� �����ڿ� �ش��ϴ� �Ұ�, ����, �հ� �ݾ��� ���������
// �ٸ� �ֿ� �����ϴ� ��쿡�� �հ� �ݾ׸��� ����Ѵ�.

// Example
// What is the order amount? 10
// What is the state: WI
// The subtotal is $10.00
// The tax is %0.55
// The total is $10.55

// What is the order amount? 10
// What is the state? MN
// The total is $10.55

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	double amount, total, tax;
	char state[3];
	tax = 0.55;

	printf("What is the order amount? ");
	scanf("%lf", &amount);
	printf("What is the state: ");
	scanf("%s", &state);

	if (!strcmp(state,"WI")) {
		printf("The subtotal is %.2lf", amount);
		printf("\nThe tax is %.2lf\n", tax/10);
	}

	total = amount * (1 + tax/10);

	printf("The total is %.2lf\n", total);


	system("pause");
	return 0;


}
