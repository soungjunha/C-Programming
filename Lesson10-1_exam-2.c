#include<stdio.h>
#include<string.h>

int main() {

	char str[1000];
	char aa, bb;
	printf("문자열을 입력하세요: ");
	gets_s(str, sizeof(str));
	printf("기존 문자와 새로운 문자: ");
	scanf(" %c %c", &aa, &bb);

	for (int i = 0; i < (strlen(str) - 1); i++)
	{
		if (str[i] == aa)
			str[i] = bb;
	}
	printf("변환된 결과=> ");
	puts(str);

}
