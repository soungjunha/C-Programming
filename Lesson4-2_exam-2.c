#include <stdio.h>

int main() {
	int a, b, f = 0;
	float result;
	char op;

	printf("ù ��° ���� �Է��ϼ���:\n");
	scanf("%d", &a);

	printf("����� �����ڸ� �Է��ϼ���:\n");
	scanf(" %c", &op);

	printf("�� ��° ���� �Է��ϼ���:\n");
	scanf("%d", &b);

	if (op == '+')
	{
		printf("%d %c %d = %d�Դϴ�.", a, op, b, a + b);
	}
	else {
		if (op == '-')
		{
			printf("%d %c %d = %d�Դϴ�.", a, op, b, a - b);
		}
		else {
			if (op == '*')
			{
				printf("%d %c %d = %d�Դϴ�.", a, op, b, a * b);
			}
			else {
				if (op == '/')
				{
					printf("%d %c %d = %f�Դϴ�.", a, op, b, (float)a / (float)b);
				}
				else {
					if (op == '%')
					{
						printf("%d %c %d = %d�Դϴ�.", a, op, b, a % b);
					}
					else {
						printf("�����ڸ� �߸� �Է��߽��ϴ�.");
						f = 1;
					}
				}
			}
		}
	}

}
