#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void rotate(int* arr, int i)
{
	int size = i;
	int Sarr[10];

	for (int x = 0; x < size; x++)
		*(Sarr + x) = *(arr + (x + 1));
	*(Sarr + size) = *arr;
	for (int j = 0; j <= size; j++)
		*(arr + j) = *(Sarr + j);
}

int main(void)
{
	int i = 0;
	int k;
	int arr[12];
	int num;

	while (i < 12 && scanf("%d ", &num))
	{
		arr[i++] = num;
		if (num == 0)
		{
			scanf("%d", &arr[i]);//ȸ����
			break;
		}
	}

	k = arr[i] % (i - 1);//ȸ����(�ֱ��Լ�) = ȸ���� / �迭��
	for (int m = 0; m < k; m++) rotate(arr, i - 2);//ȸ��
	for (int y = 0; y < i - 1; y++)	printf("%d ", arr[y]);//���

}





