// 022 ���� ��
// �� ���� ���ڸ� �Է� ���� ����,
// ���� �� ���� ���ڰ� �ٸ����� Ȯ���Ͽ�
// �������ڰ� �ִٸ� ���α׷��� �����Ű��,
// �׷��� ���� ��쿡�� �Է��� �� ���� ���� ��
// ���� ū ���� ��� ��Ű�� ���α׷��� �ۼ��϶�.

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
