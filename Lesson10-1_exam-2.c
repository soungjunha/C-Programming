#include<stdio.h>
#include<string.h>

int main() {

	char str[1000];
	char aa, bb;
	printf("���ڿ��� �Է��ϼ���: ");
	gets_s(str, sizeof(str));
	printf("���� ���ڿ� ���ο� ����: ");
	scanf(" %c %c", &aa, &bb);

	for (int i = 0; i < (strlen(str) - 1); i++)
	{
		if (str[i] == aa)
			str[i] = bb;
	}
	printf("��ȯ�� ���=> ");
	puts(str);

}
