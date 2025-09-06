#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	scanf("%c", &ch);

	printf("(%%c) %c\n", ch);
	printf("(%%d) %d\n", ch);

	return 0;
}