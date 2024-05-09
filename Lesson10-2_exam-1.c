#include<stdio.h>

int main() {
	int arr[9][9];

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			arr[j - 1][i - 1] = i * j;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%2d*%2d=%2d ", j + 1, i + 1, arr[i][j]);
		}
		printf("\n");
	}

}
