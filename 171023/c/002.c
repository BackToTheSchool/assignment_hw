// 002 ���� �� ����
// ���ڿ��� �Է� ���� ���ڿ��� ���ڿ��� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�

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