#include<stdio.h>
#include<string.h>

int main() {

	char str1[1000], str2[1000];
	printf("ù��° ���ڿ��� �Է�: ");
	gets_s(str1, sizeof(str1));
	printf("�ι�° ���ڿ��� �Է�: ");
	gets_s(str2, sizeof(str2));

	if (!strcmp(str1,str2))
	{
		puts(str1);
	}
	else
	{
		puts(strcat(str1, str2));
	}

}
