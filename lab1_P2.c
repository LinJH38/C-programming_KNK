#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x1 = 4.200000, x2 = 5.100000;
	double sum = 0;

	printf("first number: %lf \n", x1);
	printf("second number: %lf \n", x2);

	sum = x1 + x2;

	printf("sum: %lf", sum);

	return 0;
}