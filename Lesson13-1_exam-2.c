#include<stdio.h>
#include<string.h>

void input_num(int* arr,char* sort_meo,int*cnt) {
	printf("입력 숫자열:");
	for (*cnt = 0; *cnt < 10; (*cnt)++)
	{
		scanf("%d", (arr + (*cnt)));
		if (*(arr + (*cnt)) == 0) break;
	}
	printf("정렬 방식:");
	scanf("%s", sort_meo);
}

void sorting(int* arr, int cnt) {
	for (int i = 0; i < cnt; i++)
	{
		for (int j = i; j < cnt; j++)
		{
			if (*(arr + i) > *(arr + j)) {
				int tmp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = tmp;
			}
		}
	}
}

void print_arr(int* arr, char* sort_meo,int cnt) {
	if (!strcmp(sort_meo, "오름차순")) {
		for (int i = 0; i < cnt; i++)
		{
			printf("%d  ", *(arr + i));
		}
	}
	else {
		for (int i = cnt-1; i >= 0; i--)
		{
			printf("%d  ", *(arr + i));
		}
	}
}

int main() {
	int arr[10] = { 0 },cnt=0;
	char sort_meo[10];
	input_num(arr, sort_meo,&cnt);
	sorting(arr, cnt);
	print_arr(arr, sort_meo, cnt);

}
