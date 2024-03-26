#include<stdio.h>

int main() {
	float a, b, result;

	printf("첫 번째 계산할 수를 입력하세요=>");
	scanf("%f", &a);
	printf("첫 번째 계산할 수를 입력하세요=>");
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