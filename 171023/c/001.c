// 001 �λ��ϱ�
// �̸��� �Է� �޾� �λ縻�� ����ϴ� ���α׷�

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
