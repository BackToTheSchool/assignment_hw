// 008 피자 파티
// 피자를 정학하게 나누는 프로그램을 작성하라.
// 사람수, 피자 개수, 조각 개수를 입력 받는데, 이때 조각 개수는 짝수여야 한다.
// 일단 한 사람이 받게 되는 피자 조각 개수를 출력해보자.
// 만일 남는 조각이 있다면 그 개수도 나타내보자.

// Example
// How many people? 8
// How many pizzas do you have? 2

// How many pieces are in a pizza? 8
// 8 people with 2 pizzas
// Each person gets 2 pieces of pizza.
// There are 0 leftover pieces.

#include <stdio.h>
#include <stdlib.h>


int main() {

	int people, pizza, piece;

	printf("How many people? ");
	scanf("%d", &people);
	printf("How many pizzas do you have? ");
	scanf("%d", &pizza);
	printf("\nHow many pieces are in a pizza? ");
	scanf("%d", &piece);
	printf("%d people with %d pizzas\n", people, pizza);
	printf("Each person gets %d pieces of pizza.\n", pizza*piece / people);
	printf("There are %d leftover pieces.\n", pizza*piece % people);

	system("pause");
	return 0;


}
