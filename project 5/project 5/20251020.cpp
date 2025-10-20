#include <stdio.h>

int main(void)
{
	for (unsigned int i = 2; i <=9; i++)
	{
		for (unsigned int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}