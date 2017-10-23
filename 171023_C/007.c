// 007 직사각형 방의 면적
// 방의 면적을 계산하는 프로그램을 작성하라. 방의 길이와 폭을
// 피트 단위로 입력 받은 다음 제곱피트와 제곱 미터로 면적을 나타내라.

// Example
// What is the length of the room in feet? 15
// What is the width of the room in feet? 20
// You entered dimensions of 15 feet by 20 feet
// The area is
// 300 square feet
// 27.871 square meters

#include <stdio.h>
#include <stdlib.h>

#define m2 0.09290304;

double f2tom2(double f2) {
	return f2*m2;
}

int main() {

	double length, width;

	printf("What is the length of the room in feet? ");
	scanf("%lf", &length);
	printf("What is the width of the room in feet? ");
	scanf("%lf", &width);

	printf("You entered dimensions of %.lf feet by %.lf feet.\n", length, width);
	printf("The area is\n%.lf square feet\n%.3lf square meters\n", length*width, f2tom2(length*width));

	system("pause");
	return 0;


}
