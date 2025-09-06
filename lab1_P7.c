#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1;
	unsigned char uch1;

	scanf("%d", &x1);
	uch1 = x1;

	printf("(int->int) %d\n", x1);
	printf("(int->unsigned char->int) %d", uch1); // %d 대신 %u 쓰면 틀린 건가요?? %u만 써야하는 줄 알았는데, 6번 문제 그대로 하라하셔서 %d 썼는데도 잘 나오네요 ㅎㅎ,,,

	return 0;
}