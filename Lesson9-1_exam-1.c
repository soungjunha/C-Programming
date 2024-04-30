#include<stdio.h>

int main() {
	int arr[10];
	int len,cnt=0;
	for (cnt = 0; cnt < 10; cnt++)
	{
		scanf("%d", &arr[cnt]);
		if (arr[cnt] == 0)
			break;
	}

	len = sizeof(arr) / sizeof(int);
	printf("len=%d\n", len);
	
	for (int i = cnt; i >=0 ; i--)
	{
		printf("%d\n ", arr[i]);
	}

}
