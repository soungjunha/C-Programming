#include<stdio.h>
int main() {
	char op;
	int a, b;

	printf("������ ���ٷ� �Է��ϼ���.");
	scanf("%d %c %d", &a, &op, &b);
	
	switch (op)
	{
	case '+':
		printf("%d %c %d = %d�Դϴ�", a, op, b, a + b);
		break;
	case '-':
		printf("%d %c %d = %d�Դϴ�", a, op, b, a - b);
		break;
	case '*':
		printf("%d %c %d = %d�Դϴ�", a, op, b, a * b);
		break;
	case '/':
		printf("%d %c %d = %d�Դϴ�", a, op, b, a / b);
		break;
	case '%':
		printf("%d %c %d = %d�Դϴ�", a, op, b, a % b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��Ͽ����ϴ�");
		break;
	}
}