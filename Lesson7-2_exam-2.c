#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

int main() {
	int a, b, result;
	char op;

	scanf("%d%d %c", &a, &b, &op);

	if (op=="+")
	{
		result = add(a, b);
	}
	else if (op == "-")
	{
		result = sub(a, b);
	}
	else if (op == "*")
	{
		result = mul(a, b);
	}
	else if (op == "/")
	{
		result = div(a, b);
	}
	else
	{
		result = mod(a, b);
	}

	printf("%d", result);

}

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int div(int a, int b){
	return a/b;
}

int mod(int a, int b) {
	return a%b;
}
