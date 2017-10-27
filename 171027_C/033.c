// 033 Magic 8 Ball
// Magic 8 Ball 게임을 작성하라.
// Magic 8 Ball 게임은 사용자로부터 질문을 입력받아
// 이에 대한 답을 "Yes", "No", "Maybe", "Ask again later"
// 등 중에서 무작위로 대답해주는 게임이다.

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