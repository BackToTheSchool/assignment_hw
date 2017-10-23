// 006 퇴직 계산기
// 정년까지 몇 년 남았는지, 퇴직하는 해는 몇 년이 되는지를 계산하는
// 프로그램을 작성하라. 이 프로그램은 현재 나이와 퇴직하고자 하는
// 나이를 입력 받아 다음의 출력 예와 같이 나타낸다.

// Example
// What is your current age? 25
// At what age would you like to retire? 65
// You have 40 years left until you can retire.
// It's 2017, so you can retire in 2057.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int atoi1(char ip[15]) {
	int op, i;
	op = 0, i = 0;
	for (; ip[i] != '\0'; i++) {		// 문자 끝까지 읽어서 op에 입력 숫자를 넣어주는거
		op = 10 * op;
		op = op + ip[i] - 48;	// 0의 아스키 코드가 48이므로 48을 빼줌
	}
	return op;
}

int main() {

	char cAge[15], rAge[15];
	int current, retire;
	time_t timer;
	struct tm *t;  timer = time(NULL); // 현재 시각을 초 단위로 얻기
	t = localtime(&timer); // 초 단위의 시간을 분리하여 구조체에 넣기

	printf("What is your current age? ");
	scanf("%s", &cAge);
	printf("At what age would you like to retire? ");
	scanf("%s", &rAge);

	current = atoi1(cAge);
	retire = atoi1(rAge);

	printf("You have %d years left until you can retire.\n", retire - current);
	printf("It's %d, so you can retire in %d.\n", t->tm_year + 1900, t->tm_year + 1900 + retire);

	system("pause");
	return 0;


}
