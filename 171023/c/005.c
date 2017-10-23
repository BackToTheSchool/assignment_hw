// 005 간단한 수학
// 두 개의 숫자를 입력 받은 후, 두 숫자를 이용한 사칙연산 결과를
// 다음의 출력 예와 같이 나타내보자.

// What is the first number? 10
// What is the second number? 5
// 10 + 5 = 15
// 10 - 5 = 5
// 10 * 5 = 50
// 10 / 5 = 2
#include <stdio.h>
#include <stdlib.h>

int atoi1(char ip[15]){
       int op, i;
       op=0, i=0;
       for(;ip[i]!='\0';i++){		// 문자 끝까지 읽어서 op에 입력 숫자를 넣어주는거
           op=10*op;
           op = op + ip[i] - 48;	// 0의 아스키 코드가 48이므로 48을 빼줌
       }
       return op;    
}

void print(int par1, int par2) {
	printf("%d + %d = %d\n", par1, par2, par1 + par2);
	printf("%d - %d = %d\n", par1, par2, par1 - par2);
	printf("%d * %d = %d\n", par1, par2, par1 * par2);
	printf("%d / %d = %d\n", par1, par2, par1 / par2);

}

int main(){

	char fNum[15], sNum[15];
	int first, second;
	printf("What is the first number? ");
	scanf("%s",&fNum);
	printf("What is the second number? ");
	scanf("%s",&sNum);
	first = atoi1(fNum);
	second = atoi1(sNum);
	print(first, second);
	
	system("pause");
	return 0;


}
