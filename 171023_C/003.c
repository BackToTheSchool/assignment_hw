// 003 ����ǥ ���
// �ο뱸�� �� ���� �� ����� �Է� �޴� ���α׷��� �ۼ��϶�.
// �ο뱸�� ��� �̸��� ������ ��� ���� ���� ��Ÿ������.

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