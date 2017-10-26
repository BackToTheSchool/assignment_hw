// 026 카드 대금 상환 기간
// 카드 대금을 상환하는 데 걸리는 개월 수를 계산하는
// 프로그램을 작성하시오. 총 대금, 연이율, 월 상환 금액
// 을 입력받은 다음 상환에 소요되는 개월 수를 출력하면 된다.
// n=-1/30*log(1+b/p*(1+pow((1+i),30)))/log(1+i)
// Example
// The password '12345'is a very weak password
// The password 'abcdef'is a weak password
// The password 'abc123xyz'is a strong password
// The password '1337h@xor'is a very strong password

// 식이 거지라서 제낍니다 ㅎㅎ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double cmupo(double b, double i, double p) {
	return -1 / 30 * log(1 + b / p*(1 + pow(1 + i/36500, 30))) / log(1 + i/36500);

}

int main() {
	double b, i, p, r;
		
	printf("What is your balance? ");
	scanf("%lf", &b);
	printf("What is the APR on the card(as percent)? ");
	scanf("%lf", &i);
	printf("What is the monthly payment you can make? ");
	scanf("%lf", &p);

	printf("\nIt will take you %.0lf months to pay off this card\n", cmupo(b, i, p));
	r = cmupo(b, i, p);
	printf("%lf", cmupo(b, i, p));

	system("pause");
	return 0;


}
