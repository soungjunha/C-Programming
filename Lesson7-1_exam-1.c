#include<stdio.h>

void multiplication_table(int n) {
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %2d = %2d\n", n, i, n * i);
	}
}

int main() {
	int n;
	printf("출력하고싶은 단을 입력 하세요:");
	scanf("%d", &n);
	multiplication_table(n);
}
