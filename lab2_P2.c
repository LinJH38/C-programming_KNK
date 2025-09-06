#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int Stime;
	int hour, min, second;

	scanf("%u", &Stime);

	hour = Stime / 3600;
	min = (Stime - (hour * 3600)) / 60;
	second = (Stime - (hour * 3600)) % 60;

	printf("%d%d:", hour / 10, hour % 10);
	printf("%d%d:", min / 10, min % 10);
	printf("%d%d", second / 10, second % 10);


	return 0;
}

