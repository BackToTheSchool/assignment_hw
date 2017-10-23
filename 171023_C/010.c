// 010 셀프 계산대
// 간단한 셀프 계산대 시스템을 만들어 보자.
// 세 가지 물건의 가격과 수량을 각각 입력 받은 다음 소계를 구하고
// 소계에 대한 5.5%의 세금을 계산하자.
// 그리고 물건 종류별 수량과 전체 수량을 출력한 후 가격 소계, 세금, 합계 금액을 출력하자.

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
