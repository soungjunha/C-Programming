#include <stdio.h>

void main() {
	int op,a, b;
	float result;
	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d", &a);
	printf("<1>���� <2>���� <3>���� <4>������ ==>");
	scanf("%d", &op);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d", &b);

	if (op==1)
	{
		result = a + b;
		printf("%d + %d = %.0f", a, b, result);
	}
	else if (op == 2)
	{
		result = a - b;
		printf("%d - %d = %.0f", a, b, result);
	}
	else if (op == 3)
	{
		result = a * b;
		printf("%d * %d = %.0f", a, b, result);

	}
	else if (op == 4)
	{
		result = a / b;
		printf("%d / %d = %.1f", a, b, result);
	}
}