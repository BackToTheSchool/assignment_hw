// 004 Mad Libs
// ���, ����, �����, �λ翡 �ش�Ǵ� �ܾ �Է� ���� ��
// �������� ���� �̾߱⿡ �־� �ϼ��� �̾߱⸦ ����غ���

// Enter a noun: dog
// Enter a verb: walk
// Enter an adjective: blue
// Enter an adverb: quickly
// Do you walk your blue dog quickly? That's hilarious!
#include <stdio.h>
#include <stdlib.h>

int main(){

	char noun[30];
	char verb[30];
	char adjective[30];
	char adverb[30];
	printf("Enter a noun: ");
	scanf("%s",&noun);
	printf("Enter a verb: ");
	scanf("%s",&verb);
	printf("Enter an adjevtice: ");
	scanf("%s",&adjective);
	printf("Enter an adverb: ");
	scanf("%s",&adverb);

	printf("Do you %s your %s %s %s? That's hilarious!\n",verb,adjective,noun,adverb);

	system("pause");
	return 0;


}