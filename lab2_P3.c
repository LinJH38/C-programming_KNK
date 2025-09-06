#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input, output;

	scanf("%d", &input);

	output = ((input / 100) * 100);

	printf("%d", output);

	return 0;
}
