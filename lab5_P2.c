#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_hline(int N)
{
	for (int x = 0; x < N; x++)
		printf("%d", N);
}

void print_vlines(int N)
{
	for (int x1 = 0; x1 < (N - 2); x1++)
	{
		printf("\n");
		printf("%d", N);
		for (int x2 = 0; x2 < (N - 2); x2++)
		{
			printf(" ");
		}
		printf("%d", N);
	}
	printf("\n");
}

void print_box(int N)
{
	if (N == 1)
		print_hline(N);
	
	else
	{
		print_hline(N);
		print_vlines(N);
		print_hline(N);
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);//정수 값 받음
	print_box(N);

	return 0;
}