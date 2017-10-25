// 020 여러 주를 지원하는 세금 계산기
// 여러 주와 하나의 주 내에 있는 카운티에 따라 달라지는
// 세금 계산기를 작성하라. 먼저 주문가격을 입력 받고
// 주문할 주를 입력 받는다.
// 위스콘신 주의 경우에는 카운티를 추가로 입력 받는다.

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
		if (!strcmp(county, "Eau Claire")) {	// scanf를 쓰니까 space까지만 입력 받고 뒤에는 무시한다.
			ctax = 0.5;							// 송교수님 도와줘요~!
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
