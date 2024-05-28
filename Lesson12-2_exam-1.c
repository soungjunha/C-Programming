#include<stdio.h>
#include<string.h>

void reverse_string(char* ss) {
	char tmp;
	int len = strlen(ss);
	for (int i = 0; i < len / 2; i++)
	{
		tmp = *(ss + i);
		*(ss + i) = *(ss + len - i - 1);
		*(ss + len - i - 1) = tmp;
	}
}

int main() {
	char str[100];

	gets_s(str, sizeof(str));

	reverse_string(&str);

	printf("%s", str);

}
