// 008 ���� ��Ƽ
// ���ڸ� �����ϰ� ������ ���α׷��� �ۼ��϶�.
// �����, ���� ����, ���� ������ �Է� �޴µ�, �̶� ���� ������ ¦������ �Ѵ�.
// �ϴ� �� ����� �ް� �Ǵ� ���� ���� ������ ����غ���.
// ���� ���� ������ �ִٸ� �� ������ ��Ÿ������.

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
