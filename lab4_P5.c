////(4/17) 수정
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include< stdlib.h>//추가

int main(void)
{
	int x1, x2, x3;
	int seed;

	scanf("%d", &seed);

	srand(seed);
	do {
		x1 = rand() % 10;
		x2 = rand() % 10;
		x3 = rand() % 10;
	} while (!(x1 != x2 && x2 != x3 && x1 != x3));



	int ABS[3] = { x1, x2, x3 };
	int LIN[3];
	int strike, ball;

	for (int j = 1; j <= 10; j++)
	{
		strike = 0, ball = 0;

		for (int i = 0; i <= 2; i++)
			scanf("%d", &LIN[i]);

		for (int k = 0; k <= 2; k++)
		{
			for (int m = 0; m <= 2; m++)
			{
				if (ABS[k] == LIN[m])
				{
					if (k == m)
						strike++;
					else
						ball++;
				}
			}
		}

		printf("%dS%dB\n", strike, ball);

		if (strike == 3)
		{
			printf("Success");
			return 0;
		}
	}

	printf("Fail");

	return 0;
}






/*->컴파일 오류 이유: stdlib h 헤더파일을 추가하지 않음.->난수 생성 불가
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1, x2, x3;
	int seed;
	int s1, s2, s3;
	int strike = 0;
	int ball = 0;


	scanf("%d", &seed);
	srand(seed);
	do {
		x1 = rand() % 10;
		x2 = rand() % 10;
		x3 = rand() % 10;
	} while (!(x1 != x2 && x2 != x3 && x1 != x3));

	for (int i = 0; i < 10; i++)
	{
		strike = 0;
		ball = 0;

		scanf("%d %d %d", &s1, &s2, &s3);

		if (x1 == s1)
			strike++;
		if (x2 == s2)
			strike++;
		if (x3 == s3)
			strike++;
		if ((x1 == s2) || (x1 == s3))
			ball++;
		if ((x2 == s1) || (x2 == s3))
			ball++;
		if ((x3 == s1) || (x3 == s2))
			ball++;/////////////////////////////////가독성이 너무 떨어짐

		if (strike == 3)
		{
			printf("Success");
			return 0;
		}
		printf("%dS%dB\n", strike, ball);
	}

	printf("Fail");

	return 0;
}
*/