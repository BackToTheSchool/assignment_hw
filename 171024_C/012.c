// 012 �ܸ� ���
// �ܸ��� ����ϴ� ���α׷��� �ۼ��϶�.
// ������ �Է� ���� ���� ���ڸ� �ۼ�Ʈ ������ �Է� �ް�,
// �Ⱓ�� �� ������ �Է� ���� �� ������(����+����)�� ����غ���.
// �ܸ� ������ ������ ����.
//  ������ = ����(1+������ * �Ⱓ)

// Example
// Enter the principal: 1500
// Enter the rate of interest: 4.3
// Enter the number of years: 4
// After 4 years at 4.3%, the investment will be worth $1758


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	double principal, interest, years, op;
	printf("Enter the principal: ");
	scanf("%lf", &principal);
	printf("Enter the rate of interest: ");
	scanf("%lf", &interest);
	printf("Enter the number of years: ");
	scanf("%lf", &years);
	op = principal *(1 + interest*years/100);

	printf("After %.0lf years at %.1lf %%, the investment will be worth $%.0lf\n", years, interest, op);

	system("pause");
	return 0;


}
