#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x[5];
	int sum = 0;

	scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);

	for (int i = 0; i < 5; i++)
	{
		if (x[i] >= 0)
			sum += x[i];
	};

	printf("%d", sum);

	return 0;
}
