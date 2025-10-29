#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float V;
    float rho = 998.2, mu = 0.001002, D = 0.05;

    printf("���� V(m/s): ");
    scanf("%f", &V);

    if (V < 0) {
        printf("invalid input\n");
        return 0;
    }

    float Re = rho * V * D / mu;
    float q = 0.5f * rho * V * V;

    if (Re < 2300)
        printf("����, ");
    else if (Re <= 4000)
        printf("õ��, ");
    else
        printf("����, ");

    (q >= 0) ?
        printf("Re=%.1f, ���� q=%.2f Pa\n", Re, q) :
        printf("��� ����\n");

    return 0;
}