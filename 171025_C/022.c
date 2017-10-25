// 022 숫자 비교
// 세 개의 숫자를 입력 받은 다음,
// 먼저 세 개의 숫자가 다른지를 확인하여
// 같은숫자가 있다면 프로그램을 종료시키고,
// 그렇지 않은 경우에는 입력한 세 개의 숫자 중
// 가장 큰 수를 출력 시키는 프로그램을 작성하라.

// Example
// Enter the first number: 1
// Enter the second number: 51
// Enter the third number: 2
// The largest number is 51

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[3], tmp, c;

	printf("Enter the first number: ");
	scanf("%d", &a[0]);
	printf("Enter the second number: ");
	scanf("%d", &a[1]);
	printf("Enter the third number: ");
	scanf("%d", &a[2]);

	for (c = 0; c < 2; c++) {
		if (a[c] - a[c + 1] > 0)
			tmp = a[c];
		else tmp = a[c + 1];
	}
	printf("The largest number is %d\n", tmp);

	system("pause");
	return 0;


}
