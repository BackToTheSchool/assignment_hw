// 009 ����Ʈ ����
// õ���� ĥ�ϴ� �� �ʿ��� ����Ʈ ���� ���ϴ� ���α׷��� �ۼ��϶�.
// ���̿� ���� �Է� ���� ����, 1���Ϳ� 9m2�� ĥ�Ѵٰ� �����Ͽ� �������.
// �׸��� õ���� ĥ�ϴ� �� �ʿ��� ����Ʈ ���� ������ ǥ���غ���.

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
