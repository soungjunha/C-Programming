#include <stdio.h>

void main() {
	int op,a, b;
	float result;
	printf("Ã¹ ¹øÂ° °è»êÇÒ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä ==>");
	scanf("%d", &a);
	printf("<1>µ¡¼À <2>»¬¼À <3>°ö¼À <4>³ª´°¼À ==>");
	scanf("%d", &op);
	printf("µÎ ¹øÂ° °è»êÇÒ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä ==>");
	scanf("%d", &b);

	if (op==1)
	{
		result = a + b;
		printf("%d + %d = %.0f", a, b, result);
	}
	else if (op == 2)
	{
		result = a - b;
		printf("%d - %d = %.0f", a, b, result);
	}
	else if (op == 3)
	{
		result = a * b;
		printf("%d * %d = %.0f", a, b, result);

	}
	else if (op == 4)
	{
		result = a / b;
		printf("%d / %d = %.1f", a, b, result);
	}
}