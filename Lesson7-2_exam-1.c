#include<stdio.h>

int total_sum(int n) {

	static int sum = 0;
	return sum += n;

}

int main() {
	int n;
	do{
		scanf("%d", &n);
		printf("%d\n", total_sum(n));
	} while (n != 0);

}
