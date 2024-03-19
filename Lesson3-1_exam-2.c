#include<stdio.h>

void main() {
	int type,a;
	printf("입력진수 결정 <1>10 <2>16 <3>8 ==>");
	scanf("%d", &type);

	printf("값입력:");
	if(type==1)
		scanf("%d", &a);
	else if(type==2)
		scanf("%x", &a);
	else
		scanf("%o", &a);

	printf("10진수==> %d\n", a);
	printf("16진수==> %x\n", a);
	printf("8진수==> %o\n", a);

}
