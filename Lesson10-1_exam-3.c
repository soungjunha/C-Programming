#include<stdio.h>
#include<string.h>

int main() {

	char str[1000];
	printf("������ �Է�: ");
	gets_s(str, sizeof(str));

	for (int i = 0; i < (strlen(str) - 1); i++)
	{
		if (str[i] >= 'a')
			str[i] -= 32;
		else
			str[i] += 32;
	}
	printf("��ȯ�� ����=> ");
	puts(str);

}
