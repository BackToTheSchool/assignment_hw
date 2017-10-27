// 035 대회 또는 그리기 대회의 수상자를 선택하는 프로그램을 작성하라.
// 프로그램은 아무것도 입력하지 않을 때까지 대회 참가자 이름을
// 입력 받은 다음 이 중에서 무작위로 수상자를 선정한다.

// Example
// Enter a name: Homer
// Enter a name: Bart
// Enter a name: Maggie
// Enter a name: Lisa
// Enter a name: Moe
// Enter a name:
// The winner is... Maggie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
	
	char simpsons[10][30];
	char temp[10][30];

	srand(time(NULL));
	int i = 0;
	while (1) {
		printf("Enter a name: ");
		scanf("%s", &simpsons[i]);
		i++;
		if (!strcmp(simpsons[i - 1], "done")) {
			strcpy(simpsons[i - 1], "");
			break;
		}
		
	};

	int random = rand() % strlen(simpsons);

	printf("The winner is... %s.\n", simpsons[random]);

	system("pause");
	return 0;

}
