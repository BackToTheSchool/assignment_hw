// 006 ���� ����
// ������� �� �� ���Ҵ���, �����ϴ� �ش� �� ���� �Ǵ����� ����ϴ�
// ���α׷��� �ۼ��϶�. �� ���α׷��� ���� ���̿� �����ϰ��� �ϴ�
// ���̸� �Է� �޾� ������ ��� ���� ���� ��Ÿ����.

// Example
// What is your current age? 25
// At what age would you like to retire? 65
// You have 40 years left until you can retire.
// It's 2017, so you can retire in 2057.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int atoi1(char ip[15]) {
	int op, i;
	op = 0, i = 0;
	for (; ip[i] != '\0'; i++) {		// ���� ������ �о op�� �Է� ���ڸ� �־��ִ°�
		op = 10 * op;
		op = op + ip[i] - 48;	// 0�� �ƽ�Ű �ڵ尡 48�̹Ƿ� 48�� ����
	}
	return op;
}

int main() {

	char cAge[15], rAge[15];
	int current, retire;
	time_t timer;
	struct tm *t;  timer = time(NULL); // ���� �ð��� �� ������ ���
	t = localtime(&timer); // �� ������ �ð��� �и��Ͽ� ����ü�� �ֱ�

	printf("What is your current age? ");
	scanf("%s", &cAge);
	printf("At what age would you like to retire? ");
	scanf("%s", &rAge);

	current = atoi1(cAge);
	retire = atoi1(rAge);

	printf("You have %d years left until you can retire.\n", retire - current);
	printf("It's %d, so you can retire in %d.\n", t->tm_year + 1900, t->tm_year + 1900 + retire);

	system("pause");
	return 0;


}
