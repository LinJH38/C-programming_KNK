#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1;
	char ch1;

	scanf("%d", &x1);
	ch1 = x1;

	printf("(int->int) %d\n", x1);
	printf("(int->char->int) %d\n", ch1);

	return 0;
}