#include <stdio.h>
#define NUM_PRINT 5
void PrintHelloWorld(int nCount);
int main(void)
{
	int nCount = 0;
	PrintHelloWorld(nCount);
	return 0;
}
void PrintHelloWorld(int nCount)
{
	if (nCount == NUM_PRINT)
	{
		return;
	}
	printf("hello, World!(%d)\n", nCount);
	PrintHelloWorld(++nCount);
	printf("jam\n");
	return;
}