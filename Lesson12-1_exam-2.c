#include<stdio.h>

int main() {
	int arr[10];
	printf("정렬 전 배열:");
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

	printf("정렬 후 배열:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));
	}

}
