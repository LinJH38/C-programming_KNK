#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int total, rest;
	int sum = 0;

	scanf("%d", &total);

	while (1)
	{
		rest = total % 10;
		total = total / 10;

		if (rest == 3)
			sum++;
		else if ((total == 0) && (rest == 0))
			break;
	}

	printf("%d", sum);

	return 0;
}