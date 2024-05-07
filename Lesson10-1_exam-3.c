#include<stdio.h>
#include<string.h>

int main() {

	char str[1000];
	printf("문자을 입력: ");
	gets_s(str, sizeof(str));

	for (int i = 0; i < (strlen(str) - 1); i++)
	{
		if (str[i] >= 'a')
			str[i] -= 32;
		else
			str[i] += 32;
	}
	printf("변환된 문자=> ");
	puts(str);

}
