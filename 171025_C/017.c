// 017 혈중 알코올 농도 계산기
// 몸무게, 성별, 음주량(잔 수), 마신 술에 해당하는 알코올량,
// 마지막으로 술을 마신 후 경과 시간을 입력 받은 다음
// 다음식을 이용하여 혈중 알코올 농도(BAC)를
// 구하는 프로그램을 작성하라.
// BAC = (알콜량*5.14/몸무게*흡수비 계수)-0.015 *경과 시간

// Example
// Your BAC is 0.08
// It is not legal for you to drive.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double r(char sex[7]) {
	int c = 0;
	while (c == 0) {
		if (!strcmp(sex, "M"))
			return 0.73;
		else if (!strcmp(sex, "F"))
			return 0.6;
		else
			scanf("%s", &sex);
	}
}

int filter(char ip[10]) {
	int gonext = 0;	// 문자인지 숫자인지 확인해서 다음으로 넘어가는지 판별하는 키
	int i = 0;		// 안쪽 for문 카운터
	int c = 0;		// 이 함수 실행 후 반복되는 횟수 카운터
	int result = 0;

	while (gonext != strlen(ip) * 4) {	// 숫자인지 판별
		if (c != 0) {	// 처음인지 확인해서 처음이 아니면 문자 받기
			printf("Wrong input. Please enter integer. ");
			scanf("%s", ip);
		}
		for (i = 0; i < strlen(ip); i++) {	// 문자면 gonext 변화x
			if (isdigit(ip[i]) == 0)
				gonext = 0;
			else {		// 숫자면 숫자 하나당 gonext 4 증가
				gonext = gonext + 4;
				result = result * 10 + ip[i] - 48;	// 문자를 숫자로 변환
			}
		}
		c++;
	}
	return result;
}

int main() {

	char A[10], W[10], H[10];
	int alc, weight, hour;
	double BAC;
	char sex[7];

	printf("How much you drunk? ");
	scanf("%s", &A);
	alc = filter(A);
	printf("What is your weight? ");
	scanf("%s", &W);
	weight = filter(W);
	printf("What is your sex?(M/F) ");
	scanf("%s", &sex);
	printf("How many hours past after you drink? ");
	scanf("%s", &H);
	hour = filter(H);

	BAC = (alc*5.14 / weight*r(sex)) - 0.015*hour;
	
	printf("Your BAC is %.2lf\n", BAC);
	if (BAC<0.08)
		printf("It is legal for you to drive.\n");
	else
		printf("It is not legal for you to drive.\n");

	system("pause");
	return 0;


}
