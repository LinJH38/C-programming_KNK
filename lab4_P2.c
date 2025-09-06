#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j / 10 != 0)
				printf("%d ", j % 10);
			else
				printf("%d ", j);
		}

		printf("\n");
	}

	return 0;
}