#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rep(int* input, int num)
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
		if (num == input[i])
			sum++;
	printf("%d: %d\n", num, sum);
}

int main(void)
{
	int input[10];

	scanf("%d %d %d %d %d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8], &input[9]);
		//¾ê ³ë°¡´Ù ¸»°í ¹¹ ¾ø³ª? 
	for (int x = 0; x < 10; x++)
		rep(input, x);

	return 0;
}