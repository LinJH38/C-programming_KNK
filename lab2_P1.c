#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int THO, HUN, TEN, value, cal;

	scanf("%u", &value);
	THO = value / 1000;
	cal = value - (THO * 1000);
	HUN = cal / 100;
	cal = cal - (HUN * 100);
	TEN = cal / 10;
	cal = cal - (TEN * 10);

	printf("%uTHO %uHUN %uTEN %u", THO, HUN, TEN, cal);

	return 0;
}
