#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void input(char arr[10][101], int * k, int * n)//k�� ȸ�� ��, n�� �ܾ� ��
{
	char buf[101];
	
	while (scanf("%s", buf))//scanf�� �̹� �и��ڷν� ������ �����. ���� token �Լ� ���ֵ� �� ��. EOF = -1�̶� ���̴�, �߰� ����
	{
		if (isdigit(buf[0])) {
			*k = atoi(buf);//ȸ����
			break;
		}
		if (*n >= 10) break;//���� �ʰ�
		strcpy(arr[(*n)++], buf);
	}

}

void rotate(char arr[][101], int n)
{
	char temp[101];
	int i;
	strcpy(temp, arr[0]);
	for (i = 0; i<n-1; i++) strcpy(arr[i], arr[i+1]);
	strcpy(arr[n - 1], temp);
}


int main(void)
{
	char arr[10][101];
	int k=0, n=0;

	input(arr, &k, &n);

	if (n == 0) return 0;//���ڸ� �Է��� case
	for (int i = 0; i < k%n; i++) rotate(arr, n);//k�� ȸ��
	
	for (int i = 0; i < n; i++)
		printf("%s ", arr[i]);

	return 0;
}