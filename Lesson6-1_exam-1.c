#include<stdio.h>

int main() {
	int s, l, m, tmp, r = 0;
	printf("�հ��� ���۰�=> ");
	scanf("%d", &s);
	printf("�հ��� ����=> ");
	scanf("%d", &l);
	printf("���=> ");
	scanf("%d", &m);

	tmp = s;

	while (tmp <= l)
	{
		if (tmp % m == 0)
			r += tmp;
		tmp++;
	}

	printf("%d���� %d���� %d�� ����� ��=> %d", s, l, m, r);

}
