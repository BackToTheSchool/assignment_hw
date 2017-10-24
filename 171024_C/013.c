// 013 복리 계산
// 복리를 통해 투자 수익을 계산하는 프로그램을 작성하라.
// 프로그램은 원금 , 투자기간, 연이율, 연간 수익이 지급되는 횟수를 입력 받는다.
// 원리금 = 원금(1 + 연이율/연간이자지급회수)^(투자기간*연간이자지급회수)

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
