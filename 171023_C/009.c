// 009 페인트 계산기
// 천장을 칠하는 데 필요한 페인트 양을 구하는 프로그램을 작성하라.
// 길이와 폭을 입력 받은 다음, 1리터에 9m2을 칠한다고 가정하여 계산하자.
// 그리고 천장을 칠하는 데 필요한 페인트 양을 정수로 표현해보자.

// Example
// You will need to purchase 2 liters of
// paint to cover 10 square meters.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PAINT_UNIT 9.0;

int main() {

	int length, width;
	double need;

	printf("How long is the length of the room? ");
	scanf("%d", &length);
	printf("How long is the width of the room? ");
	scanf("%d", &width);
	need = length*width / PAINT_UNIT;

	printf("You will need to purchase %.lf liters of\n", ceil(need));
	printf("paint to cover %d square meters.\n", length*width);

	system("pause");
	return 0;


}
