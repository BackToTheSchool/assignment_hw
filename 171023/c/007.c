// 007 ���簢�� ���� ����
// ���� ������ ����ϴ� ���α׷��� �ۼ��϶�. ���� ���̿� ����
// ��Ʈ ������ �Է� ���� ���� ������Ʈ�� ���� ���ͷ� ������ ��Ÿ����.

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
