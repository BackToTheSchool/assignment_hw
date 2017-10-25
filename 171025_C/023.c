// 023 자동차 문제 해결
// 자동차에 대한 문제를 해결하는 프로그램을 작성하라.
// 이를 위해 다음의 의사결정 트리를 이용하라.

// Example
// Is the car silent when you turn the key? y
// Are the battery terminals corroded? n
// The battery cabled may be damaged.
// Replace cables and try again.

#include <stdio.h>
#include <stdlib.h>

int main() {

	char yn, dump;

	printf("q1");
	scanf("%c", &yn);
	if (yn == 'y') {
		scanf("%c", &dump);
		printf("q2-1");
		scanf("%c", &yn);
		if (yn == 'y')
			printf("a1");
		else
			printf("a2");
	}
	else {
		scanf("%c", &yn);
		printf("q2-2");
		scanf("%c", &yn);
		if (yn == 'y') {
			printf("a3");
		}
		else {
			scanf("%c", &yn);
			printf("q3");
			scanf("%c", &yn);
			if (yn == 'y')
				printf("a4");
			else {
				scanf("%c", &yn);
				printf("q4");
				scanf("%c", yn);
				if (yn == 'y') {
					scanf("%c", &yn);
					printf("q5");
					scanf("%c", yn);
					if (yn == 'y') {
						printf("a5");
					}
					else printf("a6");
				}
				else
					printf("Wrong answer\n");
			}
		}
	}

	system("pause");
	return 0;


}
