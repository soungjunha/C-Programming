#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	printf("문자열을 입력하세요:");
	gets_s(str, 100);
	printf("내용을 거꾸로 출력=>");
	for (int i = strlen(str)-1; i >= 0; i--)
	{
		printf("%c", *(str + i));
	}
}
