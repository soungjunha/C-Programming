#include<stdio.h>
#include<string.h>

int main() {

	char str[100];
	int len;
	printf("���ڿ��� �Է��ϼ���: ");
	gets_s(str, sizeof(str));

	len = strlen(str);
	for (int i = 0; i < (len - 1) / 2; i++)
	{
		char tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
	puts(str);

}
