#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_strcat(char str[], char arr[])
{
	int size = 0;
	static int n = 0;
	while (str[size] != ' ' && str[size] != '\0')
		size++;
	size -= 1;

	if (n == 99) return;//공간 없음

	for (int i = 0; i <= size; i++, n++)
		arr[n] = str[i];
	arr[n] = '\0';
}

int main(void)
{
	char str[100];
	char arr[100] = "";
	int ret;

	while ((scanf("%s", str) != EOF))//scanf에 값이 들어가면 1반환, EOF는 -1반환//버그때문에 추가함"EOF"입력해도 나감
	{
		if (!strcmp(str, "EOF")) break;
		my_strcat(str, arr);
	}
	printf("%s", arr);

	return 0;
}