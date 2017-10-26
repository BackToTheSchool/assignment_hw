// 027 입력 값 검증
// 이름과 성, 사번, 우편번호를 입력 받은 다음,
// 다음과 같은 규칙에 맞는지를 점검하는 프로그램 만들자.
// 이름은 반드시 넣어야 한다.
// 성은 반드시 넣어야 한다.
// 이름과 성은 최소한 두 글자 이상이어야 한다.
// 사번은 AA-1234의 형태가 되어야 한다.
// 즉, 두 글자의 알파벳, 하이픈, 4자리 숫자로 구성
// 우편번호는 반드시 숫자여야한다.
// 잘못 된 데이터가 입력되면 에러메시지 출력

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char fname[20], lname[20], zip[6], id[8];
	int fv, lv, zv, iv, c;

	printf("Enter the first name: ");
	scanf("%s", &fname);
	printf("Enter the last name: ");
	scanf("%s", &lname);
	printf("Enter the ZIP code: ");
	scanf("%s", &zip);
	printf("Enter an employee ID: ");
	scanf("%s", &id);

	if (strlen(fname) > 2) {
		fv = 1;
	}
	else
		fv = 0;
	
	if (strlen(lname) > 2) {
		lv = 1;
	}
	else
		lv = 0;
	
	zv = 0;
	for (c = 0; c < strlen(zip); c++) {
		if (zip[c] >= 48 && zip[c] <= 57) {
			zv++;
		}
	}
	
	if (zv != 5)
		zv = 0;
	else
		zv = 5;

	iv = 0;
	for (c = 0; c < strlen(id); c++) {
		if (c <= 1 && ((id[c] >= 65 && id[c] <= 90)||(id[c]>=97&&id[c]<=122))) {
			iv++;
		}
		else if (c == 2 && id[c] == 45) {
			iv++;
		}
		else if (c <= 5 && id[c] >= 48 && id[c] <= 57) {
			iv++;
		}
		else
			iv = iv;
	}
	

	if (fv != 1)
		printf("\"%s\" is not valid first name. It's too short.\n",fname);
	if (lv != 1)
		printf("\"%s\" is not valid last name. It's too short.\n",lname);
	if (zv != 5)
		printf("The ZIP cod must be numeric.\n");
	if (iv != 6)
		printf("%s is not valid ID\n",id);

	if (fv == 1 && lv == 1 && zv == 5 && iv == 6)
		printf("There were no errors found.\n");


	system("pause");
	return 0;


}
