// 002 글자 수 세기
// 문자열을 입력 받은 문자열과 문자열의 글자 수를 출력하는 프로그램을 작성하라

// Example
// What is the input stirng? Homer
// Homer has 5 characters.

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){

	char ip[255];
	printf("What is the input string? ");
	scanf("%s",&ip);
	
	printf("Homer has %d chracters.\n",strlen(ip));

	system("pause");
	return 0;


}