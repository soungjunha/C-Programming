#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int a, b;
	int result;

	a = 100;
	b = 50;

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);

}