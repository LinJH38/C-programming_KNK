#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;
    int sum = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    sum = x + y;

    printf("sum: %d\n", sum);

    return 0;
}