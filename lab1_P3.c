#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char A = 'A';

	printf("The double quotation mark is \".\n");
	printf("The single quotation mark is \'.\n");
	printf("Character A is \'%c\'.\n", A);
	printf("To represent a double quotation mark, use the escape sequence \\\".\n");
	return 0;
}