// 029 잘못 된 입력 처리
// 복리이자를 퍼센트 단위롤 받은 다음,
// 원리금이 총 2배가 되는데까지 걸리는 기간을
// 계산하는 프로그램을 짜라.

// years = 72/r

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_integer(char ip[10]) {
	int i, c, tmp;		// 카운터 i, 숫자 확인 토큰 c, 변환된 숫자 저장 tmp
	c = 0, tmp = 0;
	for (i = 0; i < strlen(ip); i++) {
		if (ip[i] >= 48 && ip[i] <= 57) {
			c++;
		}
	}

	if (c == strlen(ip)) {
		for (i = 0; i < strlen(ip); i++) {
			tmp = tmp * 10 + ip[i]-48;
		}
		return tmp;
	}
	else return -1;
}

int main() {
	double year;
	char rate[10];

	strcpy(rate, "r");		// 초기화

	while (check_integer(rate) == -1) {
		printf("What is the rate of return? ");
		scanf("%s", &rate);

		year = check_integer(rate)/72;

		if (check_integer(rate) !=-1) {	// 숫자인지 확인하고 아니면 error
			if (check_integer(rate) == 0)
				printf("Divide by 0 error.\n");	// 숫잔데 0이면 에러
			else
				printf("It wiil take %.1lf years to double your initial investment\n", year);
			//나머지 계산 후 리턴
		}
		else
			printf("Sorry. That's not a valid input.\n");
	}

	system("pause");
	return 0;


}
