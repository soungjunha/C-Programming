#include <stdio.h>

int main() {
	int a, b, result;
	char op;

	printf("첫 번째 수를 입력하세요:\n");
	scanf("%d", &a);

	printf("계산할 연산자를 입력하세요:\n");
	scanf(" %c", &op);

	printf("두 번째 수를 입력하세요:\n");
	scanf("%d", &b);

	if (op == '+')
	{
		result = a + b;
	}
	if (op == '-')
	{
		result = a - b;
	}
	if (op == '*')
	{
		result = a * b;
	}
	if (op == '/')
	{
		result = a / b;
	}
	if (op == '%')
	{
		result = a % b;
	}

	printf("%d %c %d = %d입니다.", a, op, b, result);

}
