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
	scanf("%d", &x);//���� �Է� ����
    printf("%d", check_digit(x));//���� �ڸ��� ���

	return 0;
}