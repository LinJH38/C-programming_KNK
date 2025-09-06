#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void input(char arr[10][101], int * k, int * n)//k는 회전 수, n은 단어 수
{
	char buf[101];
	
	while (scanf("%s", buf))//scanf가 이미 분리자로써 공백을 취급함. 따라서 token 함수 없애도 될 듯. EOF = -1이라 참이니, 추가 설정
	{
		if (isdigit(buf[0])) {
			*k = atoi(buf);//회전수
			break;
		}
		if (*n >= 10) break;//개수 초과
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

	if (n == 0) return 0;//숫자만 입력한 case
	for (int i = 0; i < k%n; i++) rotate(arr, n);//k번 회전
	
	for (int i = 0; i < n; i++)
		printf("%s ", arr[i]);

	return 0;
}