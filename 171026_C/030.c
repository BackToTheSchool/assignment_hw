// 030 0부터 12까지의 곱셈표를 만드는 프로그램


#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b;
	for(a = 0; a < 13; a++) {
		for (b = 0; b < 13; b++) {
			printf("%dx%d=%d\t", a, b, a*b);
		}
		printf("\n");
	}
	system("pause");
	return 0;


}
