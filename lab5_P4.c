#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count, N, M;//0√ ±‚»≠

int is_prime(int x2)
{
	int i;
	for (i = 2; i < x2; i++)
		if (x2 % i == 0)
			return 0;
	if (x2 == 1)
		return 0;
	else
		return i;
}

void next_prime(int N)
{
	if (is_prime(N) != 0)
	{
		printf(" %d", N);
		count++;
	}
	if (count < M)
	    next_prime(N + 1);
	else
		return;
}

void insert(void)
{
	scanf("%d %d", &N, &M);
}

int main(void)
{
	insert();
	next_prime(N);
	return 0;
}