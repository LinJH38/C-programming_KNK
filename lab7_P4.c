#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void change_alpha(char* a)
{
	for (int i = 0; i <= strlen(a); i++)
		if (isupper((unsigned char)a[i]))
			a[i] = tolower((unsigned char)a[i]);
}


int main(void)
{
	char str1[11] = "";
	char str2[11] = "";
	char* p;
	int sum = 0;
	scanf("%s", str1);
	scanf("%s", str2);

	p = str1;//str1�� ���ڿ� ��ü�� char�� �����ͷ� �����Ѽ�, ���߿� �ּҰ� ���� �����ϵ��� ��
	change_alpha(p);
	change_alpha(str2);

	while (strstr(p, str2) != 0) {
		sum++;
		//printf("%p\n", p);
		p = strstr(p, str2);
		//printf("%p\n", p);
		//if (sum == 3) break;
		p = p + 1;//�ּ� �� ĭ�� �о�鼭 ���. p�� �ּҷ� ��ĭ�� �о(�ߺ����� ����)(arrr->rrr->rr->r ����. null����)
	}
	printf("%d", sum);


	return 0;
}