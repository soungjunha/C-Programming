#include<stdio.h>

int main() {
	int s, l, m, tmp, r = 0;
	printf("합계의 시작값=> ");
	scanf("%d", &s);
	printf("합계의 끝값=> ");
	scanf("%d", &l);
	printf("배수=> ");
	scanf("%d", &m);

	tmp = s;

	while (tmp <= l)
	{
		if (tmp % m == 0)
			r += tmp;
		tmp++;
	}

	printf("%d에서 %d까지 %d의 배수의 합=> %d", s, l, m, r);

}
