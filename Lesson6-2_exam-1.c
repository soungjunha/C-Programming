#include<stdio.h>

int main() {

	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == 1) {
			continue;
		}
		for (int j = 1; j <= 9; j++)
		{
			printf("%d*%2d= %2d  ", i, j, i * j);
			if (i == j)
			{
				break;
			}
		}
		printf("\n");
	}

}
