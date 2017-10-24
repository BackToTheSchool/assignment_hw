// 015 암호 검증
// 사용자 로그인 증명을 검증하는 간단한 프로그램을 작성하라.
// 프로그램은 사용자의 이름과 앙ㅁ호를 입력 받은 다음,
// 미리 저장된 사용자 이름에 대한 암호를 비교하여 암호가 일치하면
// "Welcome!"을, 그렇지 않으면, "That password is incorrect."를 출력한다.


// Example
// What is the password? 12345
// That password is incorrect.

// What is the password? abc$123
// Welcome!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char passin[16], pass[16];

	strcpy(pass, "abc$123");		// 문자열 초기화

	printf("What is the password? ");
	scanf("%s", &passin);
	if (!strcmp(passin, pass))
		printf("Welcome!\n");
	else
		printf("That password is in correct.\n");

	system("pause");
	return 0;


}
