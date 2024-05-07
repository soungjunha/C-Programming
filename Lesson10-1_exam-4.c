#include<stdio.h>
#include<string.h>

int main() {

	char str1[1000], str2[1000];
	printf("첫번째 문자열을 입력: ");
	gets_s(str1, sizeof(str1));
	printf("두번째 문자열을 입력: ");
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
