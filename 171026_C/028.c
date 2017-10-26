// 028 입력 값 검증
// 이름과 성, 사번, 우편번호를 입력 받은 다음,
// 다음과 같은 규칙에 맞는지를 점검하는 프로그램 만들자.
// 이름은 반드시 넣어야 한다.
// 성은 반드시 넣어야 한다.
// 이름과 성은 최소한 두 글자 이상이어야 한다.
// 사번은 AA-1234의 형태가 되어야 한다.
// 즉, 두 글자의 알파벳, 하이픈, 4자리 숫자로 구성
// 우편번호는 반드시 숫자여야한다.
// 잘못 된 데이터가 입력되면 에러메시지 출력

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int item[5], i, sum;

	printf("Enter the first number: ");
	scanf("%d", &item[0]);
	printf("Enter the second number: ");
	scanf("%d", &item[1]);
	printf("Enter the third number: ");
	scanf("%d", &item[2]);
	printf("Enter the fourth number: ");
	scanf("%d", &item[3]);
	printf("Enter the fifth number: ");
	scanf("%d", &item[4]);

	sum = 0;
	for (i = 0; i < 5; i++) {
		sum = sum + item[i];
	}

	printf("The total is %d\n", sum);


	system("pause");
	return 0;


}
