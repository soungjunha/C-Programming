#include<stdio.h>

int main() {
	int i=2, j=1, k=2;
	while (i <= 9)
	{
		printf(" #Á¦%d´Ü#  ", i);
		i++;
	}

	i = 1;
	printf("\n");

	while (i<=9)
	{
		k = 2;
		while (k<=9)
		{
			printf("%d*%2d =%2d  ", k, i, i * k);
			k++;
		}
		printf("\n");
		i++;
	}

}
