#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year1, year2, month1, month2, day1, day2;

	scanf("%d/%d/%d %d/%d/%d", &year1, &month1, &day1, &year2, &month2, &day2);

	if (year1 < year2)
		printf("%04d/%02d/%02d", year1, month1, day1);
	else if (year1 == year2)
	{
		if (month1 < month2)
			printf("%04d/%02d/%02d", year1, month1, day1);
		else if (month1 == month2)
		{
			if (day1 < day2)
				printf("%04d/%02d/%02d", year1, month1, day1);
			else
				printf("%04d/%02d/%02d", year2, month2, day2);
		}
		else
			printf("%04d/%02d/%02d", year2, month2, day2);
	}
	else
		printf("%04d/%02d/%02d", year2, month2, day2);


	return 0;
}
