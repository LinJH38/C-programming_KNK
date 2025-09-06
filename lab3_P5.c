#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ABS[3] = { 3, 7, 5 };
	int LINZX[3];
	int strike = 0;
	int ball = 0;
	scanf("%d %d %d", &LINZX[0], &LINZX[1], &LINZX[2]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (LINZX[i] == ABS[j])
			{
				if (i == j)
					strike += 1;
				else
					ball += 1;
			}
		}
	}

	printf("%dS%dB", strike, ball);


	return 0;
}