#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1, x2, B, S;

	scanf("%d %d", &x1, &x2);
	B = (x1 > x2) ? x1 : x2;
	S = (x1 > x2) ? x2 : x1;

	printf("%d\n", B / S);
	printf("%d", B % S);

	return 0;
}