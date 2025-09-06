#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int temp;

	scanf("%d", &temp);

	if (temp < 0)
		printf("cold, indoor");
	else if ((temp >= 0) && (temp < 40))
		printf("moderate, outdoor");
	else if (temp >= 40)
		printf("hot, indoor");

	return 0;
}