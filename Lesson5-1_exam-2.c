#include<stdio.h>
int main() {
	char op;
	int a, b;

	printf("수식을 한줄로 입력하세요.");
	scanf("%d %c %d", &a, &op, &b);
	
	switch (op)
	{
	case '+':
		printf("%d %c %d = %d입니다", a, op, b, a + b);
		break;
	case '-':
		printf("%d %c %d = %d입니다", a, op, b, a - b);
		break;
	case '*':
		printf("%d %c %d = %d입니다", a, op, b, a * b);
		break;
	case '/':
		printf("%d %c %d = %d입니다", a, op, b, a / b);
		break;
	case '%':
		printf("%d %c %d = %d입니다", a, op, b, a % b);
		break;
	default:
		printf("연산자를 잘못 입력하였습니다");
		break;
	}
}