#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#define gold 1.618033988749

int n;

int fibonacci(int n)
{
	if (n <= 0)
		return 0.0;
	else if (n == 1)
		return 1.0;
	else
		return(fibonacci(n - 1) + fibonacci(n - 2));
}

double golden_ratio(int n)
{
	if (n <= 1)
		return 0.0;
	else
	    return (double)fibonacci(n) / fibonacci(n - 1);
}

int check_error(int n)
{
	if (fabs(golden_ratio(n)-gold)<1e-6)
		return n;
	else
		return check_error(n + 1);
}

int main(void)
{
	int x;
	x = check_error(n);
	printf("n=%d, f(n)=%d, error=%.9lf", x, fibonacci(x), fabs(golden_ratio(x) - gold));
	return 0;
}