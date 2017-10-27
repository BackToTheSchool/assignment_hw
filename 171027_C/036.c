// // 036 ��� ���
// ������Ʈ�� ����ð��� �и��ʷ� �޴� ���α׷��� �ۼ��϶�.
// ����ڰ� 'done'�̶�� �Է��� ������ ����ð��� �޴´�.
// �� ���� ��� ����ð�, �ּ� ����ð�, �ִ� ����ð�, ǥ�������� �������.
// ��� ���� ���ϴ� ����� ������ ����.


// Example
// Enter a number: 100
// Enter a number: 200
// Enter a number: 1000
// Enter a number: 300
// Enter a number: done
// Numbers: 100, 200, 1000, 300
// The average is 400.
// The min is 100.
// The max is 1000.
// The standard deviation is 400.25.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>


int main() {

	int numbers[30];
	float forAve[30];
	char temp[30];
	int sum = 0, min, max, average, c = 0;
	double standardDeviation;

	int i = 0;
	while (1) {
		printf("Enter a number: ");
			scanf("%s",&temp);
		i++; c++;
		if (!strcmp(temp,"done")) {
			c--;
			break;
		}
		numbers[i - 1] = atoi(temp);
	}

	printf("Numbers: ");
	for (i = 0; i<c; i++) {
		sum = sum + numbers[i];
		printf("%d ",numbers[i]);
	}
	average = sum / c;


	min = numbers[0];
	max = numbers[0];
	for (i = 0; i<c - 1; i++) {
		min = min(numbers[i + 1], min);
		max = max(numbers[i + 1], max);
	}

	sum = 0;
	for (i = 0; i<c; i++) {
		forAve[i] = numbers[i] - average;
		forAve[i] = pow(forAve[i], 2);
		sum = (int)(sum + forAve[i]);
	}

	standardDeviation = sqrt(sum / c);




	printf("\nThe average is %d.\n", average);
	printf("The min is %d.\n", min);
	printf("The max is %d.\n", max);
	printf("The standard deviation is %lf.\n", standardDeviation);

	system("pause");
	return 0;

}
