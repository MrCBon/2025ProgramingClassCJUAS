#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double num1, num2;
    char op;

    printf("��Ģ������ �Է��Ͻÿ� (��: 3+5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
    case '+':
        printf("���: %.2lf\n", num1 + num2);
        break;
    case '-':
        printf("���: %.2lf\n", num1 - num2);
        break;
    case '*':
        printf("���: %.2lf\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("���: %.2lf\n", num1 / num2);
        else
            printf("0���� ���� �� �����ϴ�.\n");
        break;
    default:
        printf("�߸��� �������Դϴ�.\n");
    }

    return 0;
}