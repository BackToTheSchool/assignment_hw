// 018 BMI 계산기
// 사용자로부터 사람의 키(인치 단위), 몸무게(파운드 단위)를
// 입력 받아 BMI를 계산하는 프로그램을 작성하라.
// BMI = (weight/(height * height))*703

// Example
// Your BMI is 19.5
// You are within the ideal weight range.

// Your BMI is 32.5
// You are overweight. You should see yout doctor.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int weight, height;
	double bmi;

	printf("How tall are you? ");
	scanf("%d", &height);
	printf("What is your weight? ");
	scanf("%d", &weight);

	bmi = (weight/(height*height))*703;

	printf("Your BMI is %.1lf", bmi);
	if (bmi>=18.5 && bmi<=25)
		printf("You are within the ideal weight range.\n");
	else
		printf("You are overweight. You should see your doctor.\n");

	system("pause");
	return 0;


}
