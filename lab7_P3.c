#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int reinier(char * arr)
{
	char str1[100]="";
	char str2[100]="";
	int size = 0;
	int mid;
	while (arr[size] != '\0')
		size++;
	size -= 1;//�迭 ũ�� ����
    mid = (size / 2) + (size % 2);//�߰���
	
	for (int i = 0; i < mid; i++)
	{
		if ((int)isupper(arr[i]))
			arr[i]=tolower((unsigned char)arr[i]);
		if ((int)isupper(arr[size - i]))
			arr[size-i]=tolower((unsigned char)arr[size - i]);//�� �� �� �빮���̸� �ҹ��ڷ� ��ȯ��
		str1[i] = arr[i];
		str2[i] = arr[size - i];
	}
	//printf("%s %s\n", str1, str2); //�˻�
	if (strcmp(str1, str2) == 0) return 1;
	return 0;
}

int main(void)
{
	char arr[100];
	scanf("%s", arr);

	printf("%d", reinier(arr));
	return 0;
}