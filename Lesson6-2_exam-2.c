#include<stdio.h>

int main() {

	int num;
	while (1)
	{
		scanf("%d", &num);
		if (num == 0) {
			printf("�ٽ� �Է��ϼ���\n");
			continue;
		}
		else if (num>=11)
		{
			printf("�׷��� ���� ��ǥ�� ����� �� �����ϴ�.");
			break;
		}
		for (int i = 0; i < num; i++)
		{
			printf("*");
		}
		printf("\n");

	}

}
