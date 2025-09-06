#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch1;

	scanf("%c", &ch1);

	printf("(%%c) %c\n", ch1);
	printf("(%%d) %d\n", ch1 - 48);

	return 0;
}