#include<stdio.h>

int main() {

	int num;
	while (1)
	{
		scanf("%d", &num);
		if (num == 0) {
			printf("다시 입력하세요\n");
			continue;
		}
		else if (num>=11)
		{
			printf("그렇게 많은 별표를 출력할 수 없습니다.");
			break;
		}
		for (int i = 0; i < num; i++)
		{
			printf("*");
		}
		printf("\n");

	}

}
