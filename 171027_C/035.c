// 035 ��ȸ �Ǵ� �׸��� ��ȸ�� �����ڸ� �����ϴ� ���α׷��� �ۼ��϶�.
// ���α׷��� �ƹ��͵� �Է����� ���� ������ ��ȸ ������ �̸���
// �Է� ���� ���� �� �߿��� �������� �����ڸ� �����Ѵ�.

// Example
// Enter a name: Homer
// Enter a name: Bart
// Enter a name: Maggie
// Enter a name: Lisa
// Enter a name: Moe
// Enter a name:
// The winner is... Maggie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
	
	char simpsons[10][30];
	char temp[10][30];

	srand(time(NULL));
	int i = 0;
	while (1) {
		printf("Enter a name: ");
		scanf("%s", &simpsons[i]);
		i++;
		if (!strcmp(simpsons[i - 1], "done")) {
			strcpy(simpsons[i - 1], "");
			break;
		}
		
	};

	int random = rand() % strlen(simpsons);

	printf("The winner is... %s.\n", simpsons[random]);

	system("pause");
	return 0;

}
