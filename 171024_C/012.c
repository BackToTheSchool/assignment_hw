// 012 단리 계산
// 단리를 계산하는 프로그램을 작성하라.
// 원금을 입력 받은 다음 이자를 퍼센트 단위롤 입력 받고,
// 기간을 연 단위로 입력 받은 후 원리금(원금+이자)을 출력해보자.
// 단리 공식은 다음과 같다.
//  원리금 = 원금(1+연이율 * 기간)

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
