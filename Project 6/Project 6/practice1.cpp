#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int times;
	int scanre;
	printf("2~9�� �� Ȯ���ϰ��� �ϴ� �ܼ��� �Է��Ͻʽÿ�:");
	scanre = scanf("%d", &times);

	if (scanre != 1)
	{
		printf("����: �ùٸ� ���� ������ �Է��Ͻʽÿ�.\n");
		return 1;
	}

	if (times < 2 || times > 9)
	{
		printf("����: 2~9�� ������ ���ڸ� �Է��� �ּ���.\n");
		return 1;
	}

	for (unsigned int j = 1; j <= 9; j++) 
		{
			printf("%d * %d = %d\n", times, j, times * j);
		}
	printf("\n");

	return 0;
}