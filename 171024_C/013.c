// 013 ���� ���
// ������ ���� ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.
// ���α׷��� ���� , ���ڱⰣ, ������, ���� ������ ���޵Ǵ� Ƚ���� �Է� �޴´�.
// ������ = ����(1 + ������/������������ȸ��)^(���ڱⰣ*������������ȸ��)

// Example
// What is the principal amount? 1500
// What is the rate: 4.3
// What is the number of years: 6
// What is the number of times the interest
// is compounded per year: 4
// $1500 invested at 4.3% for 6 years compounded 4 times per year is $1938.84

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	double principal, rate, years, tipy, op;
	printf("What is the principal amount? ");
	scanf("%lf", &principal);
	printf("What is the rate: ");
	scanf("%lf", &rate);
	printf("What is the number of years: ");
	scanf("%lf", &years);
	printf("What is the number of times the interest\nis compounded per year: ");
	scanf("%lf", &tipy);
	op = principal *pow((1 + rate / 100 / tipy), tipy*years);

	printf("$%.0lf invested at %.1lf%% for %.0lf years compounded %.0lf times per year is $%.2lf\n", principal, rate, years, tipy, op);

	system("pause");
	return 0;


}
