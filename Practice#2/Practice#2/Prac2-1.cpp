#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calculate(double num1, double num2, char op);

int main(void)
{
    double num1, num2, result;
    char op;

    printf("��Ģ������ �Է��Ͻÿ� (��: 3+5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    result = calculate(num1, num2, op);

    if (op == '%')
        printf("���: %d\n", (int)result);
    else
        printf("���: %.2lf\n", result);

    return 0;
}

double calculate(double num1, double num2, char op)
{
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0)
            return num1 / num2;
        else {
            printf("0���� ���� �� �����ϴ�.\n");
            return 0;
        }
    case '%':
        if ((int)num2 != 0)
            return (int)num1 % (int)num2;
        else {
            printf("0���� ���� �� �����ϴ�.\n");
            return 0;
        }
    default:
        printf("�߸��� �������Դϴ�.\n");
        return 0;
    }
}