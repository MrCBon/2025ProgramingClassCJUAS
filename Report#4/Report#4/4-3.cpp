#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 벡터 입력
void getVec(double v[])
{
    scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);
}

// 내적
double dot(double a[], double b[])
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

// 외적
void cross(double a[], double b[], double r[])
{
    r[0] = a[1] * b[2] - a[2] * b[1];
    r[1] = a[2] * b[0] - a[0] * b[2];
    r[2] = a[0] * b[1] - a[1] * b[0];
}

// 메인 함수
int main(void)
{
    double a[3], b[3], c[3];

    // 벡터값 입력
    printf("벡터 A(x y z): ");
    getVec(a);

    printf("벡터 B(x y z): ");
    getVec(b);

    double d = dot(a, b);
    cross(a, b, c);

    // 결과 출력
    printf("\n내적(dot) = %.4lf\n", d);
    printf("외적(cross) = (%.4lf, %.4lf, %.4lf)\n",
        c[0], c[1], c[2]);
    
    return 0;
}

