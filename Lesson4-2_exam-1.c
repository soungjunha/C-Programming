#include <stdio.h>

int main() {
	int a, b, result;
	char op;

	printf("ù ��° ���� �Է��ϼ���:\n");
	scanf("%d", &a);

	printf("����� �����ڸ� �Է��ϼ���:\n");
	scanf(" %c", &op);

	printf("�� ��° ���� �Է��ϼ���:\n");
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

	printf("%d %c %d = %d�Դϴ�.", a, op, b, result);

}
