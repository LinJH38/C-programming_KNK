#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int x1, x2, x3;
int answer[3];
int ABS[3];

void set_Seed(void) {
	int seed;
	scanf("%d", &seed);
	srand(seed);
}

void set_Answer(void) {
	set_Seed();
	do {
		x1 = rand() % 10;
		x2 = rand() % 10;
		x3 = rand() % 10;
	} while (!(x1 != x2 && x2 != x3 && x1 != x3));
}

void arranswer(void)
{
	answer[0] = x1;
	answer[1] = x2;
	answer[2] = x3;
}

void arrABS(void)//응답 입력
{
	scanf("%d %d %d", &ABS[0], &ABS[1], &ABS[2]);
}


int check_strike(void)
{
	int strike = 0;

	for (int i = 0; i < 3; i++)
		if (answer[i] == ABS[i])
			strike++;

	return strike;
}

int check_ball(void)
{
	int ball = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if ((answer[i] == ABS[j]) && (i!=j))
				ball++;

	return ball;
}


int main(void)
{
	set_Answer();
	arranswer();
	for (int i = 0; i < 10; i++)
	{
		arrABS();
		printf("%dS%dB\n", check_strike(), check_ball());
		if (check_strike() == 3)
		{
			printf("Success");
			return 0;
		}
	}
	printf("Fail");
	return 0;
}