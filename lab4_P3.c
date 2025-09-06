#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float avg;
	int sum = 0;
	int j = 0;
	int x;

	while (1)
	{
		scanf("%d", &x);

		if (x <= 0)
			break;
		else if (x > 100)
			continue;
		else if ((x > 0) && (x <= 100))
		{
			sum += x;
			j++;
		}
	}

	avg = (sum * 1.0) / j;

	printf("%.02f", avg);

	return 0;
}