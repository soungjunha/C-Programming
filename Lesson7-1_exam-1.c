#include<stdio.h>

void multiplication_table(int n) {
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %2d = %2d\n", n, i, n * i);
	}
}

int main() {
	int n;
	printf("����ϰ���� ���� �Է� �ϼ���:");
	scanf("%d", &n);
	multiplication_table(n);
}
