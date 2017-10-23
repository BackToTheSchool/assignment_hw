// 001 인사하기
// 이름을 입력 받아 인사말을 출력하는 프로그램

// Example
// What is your name? Brain
// Hello, Brain, nice to meet you


#include<stdio.h>
#include<stdlib.h>
int main(){
	char name[20];
	printf("What is your name? ");
	scanf("%s",&name);

	printf("Hello, %s, nice to meet you!\n",&name);

	system("pause");
	return 0;
}
