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

	p = str1;//str1의 문자열 전체를 char형 포인터로 가르켜서, 나중에 주소값 연산 가능하도록 함
	change_alpha(p);
	change_alpha(str2);

	while (strstr(p, str2) != 0) {
		sum++;
		//printf("%p\n", p);
		p = strstr(p, str2);
		//printf("%p\n", p);
		//if (sum == 3) break;
		p = p + 1;//주소 한 칸씩 밀어가면서 계산. p의 주소로 한칸씩 밀어냄(중복포함 가능)(arrr->rrr->rr->r 순서. null포함)
	}
	printf("%d", sum);


	return 0;
}