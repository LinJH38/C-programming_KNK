#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	int x;

	scanf("%c", &ch);

	x = ((64 < ch) && (ch < 91)) || ((96 < ch) && (ch < 123));
	printf("%d", x);

	return 0;
}
