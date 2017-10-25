// 021 숫자에 해당하는 이름으로 바꾸기
// 1부터 12까지의 숫자를 해당하는 달로 변환시키는
// 프로그램을 만들어보자. 먼저 숫자를 입력받은 다음
// 이에 해당하는 달 이름을 출력한다.
// 만일 범위를 넘어서는 숫자를 입력 받은 경우엔
// 적절한 에러 문구를 출력하자.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int month;
	char str[20];

	printf("Please enter the number of the month: ");
	scanf("%d", &month);

	switch (month) {
	case 1: strcpy(str, "January");
		break;
	case 2: strcpy(str, "February");
		break;
	case 3: strcpy(str, "March");
		break;
	case 4: strcpy(str, "April");
		break;
	case 5: strcpy(str, "May");
		break;
	case 6: strcpy(str, "June");
		break;
	case 7: strcpy(str, "July");
		break;
	case 8: strcpy(str, "August");
		break;
	case 9: strcpy(str, "September");
		break;
	case 10: strcpy(str, "October");
		break;
	case 11: strcpy(str, "November");
		break;
	case 12: strcpy(str, "December");
		break;
	default: printf("Out of range error!\n");
	}

	printf("The name of the month is %s.\n", str);
	
	system("pause");
	return 0;


}
