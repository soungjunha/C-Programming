#include<stdio.h>

void sort(int* num) {
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (*(num + i) < *(num + j)) {
				int tmp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = tmp;
			}
		}
	}

}

int main() {
	int arr[10];
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(&arr);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

}
