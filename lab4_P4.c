#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int seed;
	int answer;
	int sol;

	scanf("%d", &seed); ///random seed
	srand(seed);
	answer = rand() % 10;

	while (1)
	{
		scanf("%d", &sol);

		if (sol < answer)
			printf("%d<?\n", sol);
		else if (sol > answer)
			printf("%d>?\n", sol);
		else if (sol == answer)
		{
			printf("%d==?\n", sol);
			break;
		}
	}
	return 0;
}



/*(4/17) do while
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include< stdlib.h>

int main(void)
{
	int answer, seed;
	int sol;

	scanf("%d", &seed);

	srand(seed);

	answer = rand() % 10;

	do {
		scanf("%d", &sol);

		if (answer > sol)
			printf("%d<?\n", sol);
		else if (answer < sol)
			printf("%d>?\n", sol);
	} while (!(answer == sol));

	printf("%d==?", sol);

	return 0;
}
*/