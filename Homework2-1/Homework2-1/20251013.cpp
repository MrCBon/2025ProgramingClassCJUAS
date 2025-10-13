#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char name[50];
	int student_ID;
	double height;
	double weight;
	double BMI;

	printf("이름을 입력하세요: ");
	scanf("%s", name);

	printf("학번을 입력하세요: ");
	scanf("%d", &student_ID);

	printf("키(cm)를 입력하세요: ");
	scanf("%lf", &height);

	printf("몸무게(kg)를 입력하세요: ");
	scanf("%lf", &weight);

	BMI = weight / (height * height);

	printf("\n");
	printf("이름: %s \n", name);
	printf("학번: %d\n", student_ID);
	printf("키: %.2lf\n", height);
	printf("몸무게: %.2lf\n", weight);
	printf("BMI 지수: %.2lf\n", BMI);
	return 0;

}