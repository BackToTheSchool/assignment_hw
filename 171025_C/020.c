// 020 ���� �ָ� �����ϴ� ���� ����
// ���� �ֿ� �ϳ��� �� ���� �ִ� ī��Ƽ�� ���� �޶�����
// ���� ���⸦ �ۼ��϶�. ���� �ֹ������� �Է� �ް�
// �ֹ��� �ָ� �Է� �޴´�.
// �����ܽ� ���� ��쿡�� ī��Ƽ�� �߰��� �Է� �޴´�.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i;
	double amount, tax, ctax;
	char state[15], county[15], cin[15];

	printf("What is the order amount? ");
	scanf("%lf", &amount);
	printf("What state do you liv in? ");
	scanf("%s", &state);
	printf("What county do you liv in? ");
	scanf("%s", &county);	


	ctax = 0;

	if (!strcmp(state, "WI")) {
		tax = 5.5;
		printf("The state tax is $%.2lf.\n", amount*tax / 100);
		if (!strcmp(county, "Eau Claire")) {	// scanf�� ���ϱ� space������ �Է� �ް� �ڿ��� �����Ѵ�.
			ctax = 0.5;							// �۱����� �������~!
		}
		else if (!strcmp(county, "Dunn")) {
			ctax = 0.4;
		}
		else ctax = 0;
		printf("The county tax is $%.2lf\n", amount*ctax / 100);
	}
	else if (!strcmp(state, "IL")) {
		tax = 8;
		printf("The state tax is $%.2lf.\n", amount*tax / 100);
	}
	else
		tax = 5.5;

	printf("The total tax is $%.2lf\n", amount*(tax + ctax) / 100);
	printf("The total is $%.2lf\n", amount*(1 + (tax + ctax) / 100));

	system("pause");
	return 0;


}
