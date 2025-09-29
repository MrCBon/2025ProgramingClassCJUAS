#pragma warning(disbale:4996)
#include <stdio.h>
#define_CRT_SECURE_NO_WARNINGS

int main(void)
{
	int nAge = 99;
	float fHeight = 999.0f;
	double dWeight = 999.0;

	char chTemp = ' ';
	char chString[100] = ' ';

	printf("input your alphabet and word:\n");
	int nResScanf = scanf_s(" %c%s", &chTemp, chString);

	printf("output:%d\n",nResScanf);

	printf("(Alphabet:%C)(Word:%s)\n", chTemp, chString);

	return 0;

}






















































































































































--------------------------------------------------------------------------------------------------------------------------------ggggggggggggggggggggggggggggggggglm
}