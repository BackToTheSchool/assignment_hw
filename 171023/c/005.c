// 005 ������ ����
// �� ���� ���ڸ� �Է� ���� ��, �� ���ڸ� �̿��� ��Ģ���� �����
// ������ ��� ���� ���� ��Ÿ������.

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
       for(;ip[i]!='\0';i++){		// ���� ������ �о op�� �Է� ���ڸ� �־��ִ°�
           op=10*op;
           op = op + ip[i] - 48;	// 0�� �ƽ�Ű �ڵ尡 48�̹Ƿ� 48�� ����
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
