#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int times;
	int scanre;
	printf("2~9단 중 확인하고자 하는 단수를 입력하십시오:");
	scanre = scanf("%d", &times);

	if (scanre != 1)
	{
		printf("오류: 올바른 숫자 형식을 입력하십시오.\n");
		return 1;
	}

	if (times < 2 || times > 9)
	{
		printf("오류: 2~9단 사이의 숫자를 입력해 주세요.\n");
		return 1;
	}

	for (unsigned int j = 1; j <= 9; j++) 
		{
			printf("%d * %d = %d\n", times, j, times * j);
		}
	printf("\n");

	return 0;
}