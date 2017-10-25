// 024 ���ʱ׷� ����
// �� ���� ���ڿ��� ���Ͽ� ���ΰ� �ֳʱ׷�������
// �˻��ϴ� ���α׷��� �ۼ��϶�.
// ���α׷��� �� ���� ���ڿ��� �Է� ���� ��
// ������ ��� �� ���� ����ؾ� �Ѵ�.

// Example
// Enter two strings and I'll tell you if they are anagrams: 
// Enter the first string: note
// Enter the second string: tone
// "note" and "tone" are anagrams.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAnagram(char stra[40], char strb[40]) {
	
	int i, c;
	char tmp;
	char str1[40], str2[40];
	strcpy(str1, stra);			// ���⼭ �μ��� str1,2�� �ϰ� �ް� �Ǹ�
	strcpy(str2, strb);			// ���ڿ� �ּҰ��� ���� ���� �����ϹǷ� ���縦 �ؼ� �ٸ� ������ �����ϰ� �Ѵ�.
	c = 0;
	i = strlen(str1);
	while (c != strlen(str1)-1) {	// ��ū�� ���ڿ��� ����-1���� Ȯ�� (������ ���� �Ϸ�)
		c = 0;						// ������ �������� Ȯ���ϴ� ��ū
		for (i = 0; i < strlen(str1)-1; i++) {	// ���ڿ� ���̸�ŭ �ϸ� \0�� ���ع����Ƿ� ���ڿ� ���� -1��ŭ �ݺ�
			if (str1[i] - str1[i + 1] > 0) {	// i, i+1��° ���ڸ� ���ؼ�  i��°�� ũ��
				tmp = str1[i + 1];				// i��°�� i+1��°�� ���� ��ġ�� �ٲ۴�
				str1[i + 1] = str1[i];
				str1[i] = tmp;
			}
			else
				c++;							// i+1�� ũ�� ��ū c�� 1 �÷��ش�.
		}										// ������ �Ϸ� �Ǿ�����, c�� ���ڿ� ����-1�� �����Ƿ� ������ Ż���Ѵ�.
	}

	c = 0;
	while (c != strlen(str2)-1) {
		c = 0;
		for (i = 0; i < strlen(str2)-1; i++) {
			if (str2[i] - str2[i + 1] > 0) {
				tmp = str2[i + 1];
				str2[i + 1] = str2[i];
				str2[i] = tmp;
			}
			else
				c++;
		}
	}
	
	
	if (!strcmp(str1, str2))
		return 1;		// ������ 1 �ٸ��� 0�� ����
	else
		return 0;
}

int main() {

	char str1[40], str2[40];
	int i;

	printf("Enter two strings and I'll tell you if they are anagrams:\n");
	printf("Enter the first string: ");
	scanf("%s", &str1);
	printf("Enter the second string: ");
	scanf("%s", &str2);

	if (isAnagram(str1, str2) == 1)
		printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
	else
		printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
	system("pause");
	return 0;


}
