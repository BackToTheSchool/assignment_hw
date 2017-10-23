// 003 따옴표 출력
// 인용구와 그 말을 한 사람을 입력 받는 프로그램을 작성하라.
// 인용구와 사람 이름은 다음의 출력 예와 같이 나타내보자.

// Example
// What is the quotes? These aren't the droids you're looking for.
// Who said it? Obi-Wan Kenobi
// Obi-Wan Kenobi says, "These aren't the droids you're looking for."

#include <stdio.h>
#include <stdlib.h>

int main(){
	char person[30];
	char quotes[200];
	printf("What is the quotes? ");
	scanf("%s",&quotes);

	printf("Who said it? ");
	scanf("%s",&person);
	printf("%s says, \"%s\"\n",person,quotes);

	system("pause");
	return 0;



}