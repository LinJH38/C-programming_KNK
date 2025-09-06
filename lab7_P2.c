#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int my_strcmp(char str1[], char str2[])//수업 들으면서 떠올린 원리랑 동일함
{
	int x1, x2;
	int s1, s2;
	int n;//회전 사이즈
	int v = 0;

	s1 = strlen(str1);
	s2 = strlen(str2);

	n = (s1 > s2) ? s1 : s2;

	for (int i = 0; i < n; i++)
	{
		x1 = str1[i], x2 = str2[i];
		if ((x1 == 0)) return printf("%s<%s", str1, str2);
		if ((x2 == 0)) return printf("%s>%s", str1, str2);
		v = x1 - x2;
		if (v < 0) return printf("%s<%s", str1, str2);
		else if (v > 0) return printf("%s>%s", str1, str2);
		else continue;
	}
	return printf("%s==%s", str1, str2);
}

int main(void)
{
	char str1[100];
	char str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	my_strcmp(str1, str2);
	return 0;
}