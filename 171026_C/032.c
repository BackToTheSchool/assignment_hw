// 032 숫자 맞추기 게임
// 난이도1 : 1~10, 2:1~100, 3:1~1000
// 난이도를 입력받고 게임을 시작
// 범위 내에서 무작위 숫자를 하나 선택 후
// 맞추라고 출력
// 플레이어가 맞는 숫자를 입력 할 때 마다,
// 업다운 출력
// 정답을 맞추면 몇번만에 맞췄는지 출력하고
// 게임을 다시 할 것인지 묻는다.

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
