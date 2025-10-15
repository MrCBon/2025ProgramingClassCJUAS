#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double num1, num2;
    char op;

    printf("사칙연산을 입력하시오 (예: 3+5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
    case '+':
        printf("결과: %.2lf\n", num1 + num2);
        break;
    case '-':
        printf("결과: %.2lf\n", num1 - num2);
        break;
    case '*':
        printf("결과: %.2lf\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("결과: %.2lf\n", num1 / num2);
        else
            printf("0으로 나눌 수 없습니다.\n");
        break;
    default:
        printf("잘못된 연산자입니다.\n");
    }

    return 0;
}