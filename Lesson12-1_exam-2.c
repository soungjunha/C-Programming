#include<stdio.h>

int main() {
	int arr[10];
	printf("���� �� �迭:");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", (arr + i));
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (*(arr + i) > *(arr + j))
			{
				int tmp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = tmp;
			}
		}
	}

	printf("���� �� �迭:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));
	}

}
