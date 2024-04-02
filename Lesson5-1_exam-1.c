#include<stdio.h>

int main() {
	int dan;

	printf("¸î ´Ü?");
	scanf("%d", &dan);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

}
