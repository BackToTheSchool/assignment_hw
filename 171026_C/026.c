// 026 ī�� ��� ��ȯ �Ⱓ
// ī�� ����� ��ȯ�ϴ� �� �ɸ��� ���� ���� ����ϴ�
// ���α׷��� �ۼ��Ͻÿ�. �� ���, ������, �� ��ȯ �ݾ�
// �� �Է¹��� ���� ��ȯ�� �ҿ�Ǵ� ���� ���� ����ϸ� �ȴ�.
// n=-1/30*log(1+b/p*(1+pow((1+i),30)))/log(1+i)
// Example
// The password '12345'is a very weak password
// The password 'abcdef'is a weak password
// The password 'abc123xyz'is a strong password
// The password '1337h@xor'is a very strong password

// ���� ������ �����ϴ� ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double cmupo(double b, double i, double p) {
	return -1 / 30 * log(1 + b / p*(1 + pow(1 + i/36500, 30))) / log(1 + i/36500);

}

int main() {
	double b, i, p, r;
		
	printf("What is your balance? ");
	scanf("%lf", &b);
	printf("What is the APR on the card(as percent)? ");
	scanf("%lf", &i);
	printf("What is the monthly payment you can make? ");
	scanf("%lf", &p);

	printf("\nIt will take you %.0lf months to pay off this card\n", cmupo(b, i, p));
	r = cmupo(b, i, p);
	printf("%lf", cmupo(b, i, p));

	system("pause");
	return 0;


}
