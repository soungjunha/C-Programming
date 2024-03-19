#include<stdio.h>

void main() {
	int a;
	printf("정수를 하나 입력하세요==>");
	scanf("%d", &a);

	printf("10진수==> %d\n", a);
	printf("16진수==> %x\n", a);
	printf("8진수==> %o\n", a);

}
