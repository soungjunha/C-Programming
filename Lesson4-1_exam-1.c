#include<stdio.h>

int main() {
	float a, b, result;

	printf("ù ��° ����� ���� �Է��ϼ���=>");
	scanf("%f", &a);
	printf("ù ��° ����� ���� �Է��ϼ���=>");
	scanf("%f", &b);

	result = a + b;
	printf("%.2f + %.2f = %.2f\n", a, b, result);
	result = a - b;
	printf("%.2f - %.2f = %.2f\n", a, b, result);
	result = a * b;
	printf("%.2f * %.2f = %.2f\n", a, b, result);
	result = a / b;
	printf("%.2f / %.2f = %.2f\n", a, b, result);
	result = (int)a % (int)b;
	printf("%d %% %d = %d\n", (int)a, (int)b, (int)result);
	
}