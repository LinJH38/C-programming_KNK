#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	ch = getchar();

	if ((ch >= 'a') && (ch <= 'z'))
	{
		ch = 'A' + (ch - 'a');
		printf("%c", ch);
	}
	else if ((ch >= 'A') && (ch <= 'Z'))
	{
		ch = 'a' + (ch - 'A');
		printf("%c", ch);
	}
	else
		printf("none");

	return 0;
}