#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1;
	unsigned char uch1;

	scanf("%d", &x1);
	uch1 = x1;

	printf("(int->int) %d\n", x1);
	printf("(int->unsigned char->int) %d", uch1); // %d ��� %u ���� Ʋ�� �ǰ���?? %u�� ����ϴ� �� �˾Ҵµ�, 6�� ���� �״�� �϶��ϼż� %d ��µ��� �� �����׿� ����,,,

	return 0;
}