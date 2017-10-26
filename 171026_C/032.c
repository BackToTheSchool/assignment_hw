// 032 ���� ���߱� ����
// ���̵�1 : 1~10, 2:1~100, 3:1~1000
// ���̵��� �Է¹ް� ������ ����
// ���� ������ ������ ���ڸ� �ϳ� ���� ��
// ���߶�� ���
// �÷��̾ �´� ���ڸ� �Է� �� �� ����,
// ���ٿ� ���
// ������ ���߸� ������� ������� ����ϰ�
// ������ �ٽ� �� ������ ���´�.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int count, level, lim;
	double random_number, check;
	char re;
	re = 'y';
	srand(time(NULL));
	printf("Let's play Guess the Number.\n");
	
	while (re == 'y') {
		printf("Pick a difficulty level (1, 2, or 3): ");
		count = 1;
		scanf("%d", &level);

		if (level == 1) {
			lim = 10;
		}
		else if (level == 2) {
			lim = 100;
		}
		else if (level == 3) {
			lim = 1000;
		}

		random_number = rand() % lim + 1;

		printf("I have my number. What's your guess? ");
		check = 0;
		while (random_number != check) {
			scanf("%lf", &check);
			if (random_number != check) {
				if (random_number > check)
					printf("Too low. Guess again: ");
				else
					printf("Too high. Guess again: ");
				count++;
				 
			}
			else {
				printf("You got it in %d guesses!\n", count);
				printf("Play again? (y/n) ");
				getchar();
				scanf("%c", &re);
				
			}
		}
	}

	system("pause");
	return 0;


}
