#include<stdio.h>

void main() {
	int type,a;
	printf("�Է����� ���� <1>10 <2>16 <3>8 ==>");
	scanf("%d", &type);

	printf("���Է�:");
	if(type==1)
		scanf("%d", &a);
	else if(type==2)
		scanf("%x", &a);
	else
		scanf("%o", &a);

	printf("10����==> %d\n", a);
	printf("16����==> %x\n", a);
	printf("8����==> %o\n", a);

}
