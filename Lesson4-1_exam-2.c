#include<stdio.h>

int main() {
	int year;
	printf("������ �Է��ϼ���:");
	scanf("%d", &year);
	if ((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)) {
		printf("%d���� �����Դϴ�.", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.", year);
	}
}
