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

	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", name);

	printf("�й��� �Է��ϼ���: ");
	scanf("%d", &student_ID);

	printf("Ű(cm)�� �Է��ϼ���: ");
	scanf("%lf", &height);

	printf("������(kg)�� �Է��ϼ���: ");
	scanf("%lf", &weight);

	BMI = weight / (height * height);

	printf("\n");
	printf("�̸�: %s \n", name);
	printf("�й�: %d\n", student_ID);
	printf("Ű: %.2lf\n", height);
	printf("������: %.2lf\n", weight);
	printf("BMI ����: %.2lf\n", BMI);
	return 0;

}