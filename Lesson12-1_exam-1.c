#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	printf("���ڿ��� �Է��ϼ���:");
	gets_s(str, 100);
	printf("������ �Ųٷ� ���=>");
	for (int i = strlen(str)-1; i >= 0; i--)
	{
		printf("%c", *(str + i));
	}
}
