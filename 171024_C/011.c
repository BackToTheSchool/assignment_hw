// 011 ȯ�� ��ȯ
// ȯ���� ��ȯ�ϴ� ���α׷��� �ۼ��϶�.
// ���⿡���� ���ο��� �̱� �޷��� ��ȯ��Ų��.
// ���� ���� �ݾ��� �Է� ���� ���� ���� ȯ���� �Է��� �޴´�.
// �׷���� ���ο� �ش��ϴ� �̱� �޷� ���� ����Ѵ�.
// ȯ�� ��ȯ ���� ������ ����.
// amount_to = amount_from * rate_from / rate_to
// amount_to�� ��ȯ �� �̱� �޷� �����̴�.
// amount_from�� ���� �����̴�.
// rate_from�� ������ ���� ȯ���̴�.
// rate_to�� ������ �̱� �޷� ȯ���̴�.

// Example
// How many Euros are you exchanging? 81
// What is the exchange rate? 137.51
// 81 Euros at an exchange rate of 137.51 is
// 111.38 dollars

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	double euro, dollar, eRate;
	printf("How many Euros are you exchanging? ");
	scanf("%lf", &euro);
	printf("What is the exchange rate? ");
	scanf("%lf", &eRate);
	dollar = euro * eRate/100;

	printf("%.0lf Euros at an exchange rate of %.2lf is\n%.2lf dollars\n", euro, eRate,dollar);

	system("pause");
	return 0;


}
