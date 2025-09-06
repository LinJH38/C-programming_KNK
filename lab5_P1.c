#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_digit(int x)
{
	int count = 0;
	do {
		x = x / 10;
		count++;
	} while (x != 0);

	return count;
}

int main(void)
{
	int x;
	scanf("%d", &x);//정수 입력 받음
    printf("%d", check_digit(x));//정수 자릿수 출력

	return 0;
}