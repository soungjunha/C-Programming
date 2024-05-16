#include<stdio.h>
#include<string.h>

char stack[10][10];
int top;

void push(char str[]) {

	if (top>=10)
	{
		printf("stack is full");
	}
	else
	{
		strcpy(stack[top], str);
		top++;
	}

}

void pop() {
	if (top<=10)
	{
		printf("stack is empty");
	}
	else {
		printf("%s\n", stack[top - 1]);
		top--;
	}
	
}

int main() {
	char str[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%s", &str);
		if (!strcmp(str, "end"))
		{
			break;
		}
		push(str);

	}
	printf("------------------------------------------------------------------------\n");
	for (int i = top-1; i >= 0; i--)
	{
		pop();
	}
}
