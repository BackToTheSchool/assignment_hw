// 027 �Է� �� ����
// �̸��� ��, ���, �����ȣ�� �Է� ���� ����,
// ������ ���� ��Ģ�� �´����� �����ϴ� ���α׷� ������.
// �̸��� �ݵ�� �־�� �Ѵ�.
// ���� �ݵ�� �־�� �Ѵ�.
// �̸��� ���� �ּ��� �� ���� �̻��̾�� �Ѵ�.
// ����� AA-1234�� ���°� �Ǿ�� �Ѵ�.
// ��, �� ������ ���ĺ�, ������, 4�ڸ� ���ڷ� ����
// �����ȣ�� �ݵ�� ���ڿ����Ѵ�.
// �߸� �� �����Ͱ� �ԷµǸ� �����޽��� ���

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
