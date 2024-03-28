#include <stdio.h>

int main() {
	int a, b, f = 0;
	float result;
	char op;

	printf("첫 번째 수를 입력하세요:\n");
	scanf("%d", &a);

	printf("계산할 연산자를 입력하세요:\n");
	scanf(" %c", &op);

	printf("두 번째 수를 입력하세요:\n");
	scanf("%d", &b);

	if (op == '+')
	{
		printf("%d %c %d = %d입니다.", a, op, b, a + b);
	}
	else {
		if (op == '-')
		{
			printf("%d %c %d = %d입니다.", a, op, b, a - b);
		}
		else {
			if (op == '*')
			{
				printf("%d %c %d = %d입니다.", a, op, b, a * b);
			}
			else {
				if (op == '/')
				{
					printf("%d %c %d = %f입니다.", a, op, b, (float)a / (float)b);
				}
				else {
					if (op == '%')
					{
						printf("%d %c %d = %d입니다.", a, op, b, a % b);
					}
					else {
						printf("연산자를 잘못 입력했습니다.");
						f = 1;
					}
				}
			}
		}
	}

}
