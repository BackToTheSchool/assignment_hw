// 033 Magic 8 Ball
// Magic 8 Ball ������ �ۼ��϶�.
// Magic 8 Ball ������ ����ڷκ��� ������ �Է¹޾�
// �̿� ���� ���� "Yes", "No", "Maybe", "Ask again later"
// �� �߿��� �������� ������ִ� �����̴�.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main() {

	char question[40];
	srand(time(NULL));
	int random = rand()%4+1;

	printf("What's your question? ");
	scanf("%s", question);

	switch (random) {
	case 1:
		printf("Yes\n");
		break;
	case 2:
		printf("No\n");
		break;
	case 3:
		printf("Maybe\n");
		break;
	case 4:
		printf("Ask again later\n");
		break;
	}

	system("pause");
	return 0;
}