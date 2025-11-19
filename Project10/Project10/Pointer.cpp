#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double custom_fabs(double d) {
    return (d < 0.0) ? -d : d;
}

double custom_sqrt(double n) {
    if (n < 0) return -1;   // 음수 sqrt 방지
    if (n == 0) return 0;

    double guess = n / 2.0;
    for (int i = 0; i < 20; i++) {
        guess = (guess + n / guess) / 2.0;
    }
    return guess;
}

int main(void) {
    double points[2][2];

    double* p_x1 = &points[0][0];
    double* p_y1 = &points[0][1];
    double* p_x2 = &points[1][0];
    double* p_y2 = &points[1][1];

    printf("Input 1st pint information:\n ");
    if (scanf("%lf %lf", p_x1, p_y1) != 2) return 1;

    printf("Input 2nd pint information:\n ");
    if (scanf("%lf %lf", p_x2, p_y2) != 2) return 1;

    double dx = *p_x2 - *p_x1;
    double dy = *p_y2 - *p_y1;

    printf("\n--- Calculated Output, line equation ---\n");
    if (custom_fabs(dx) < 1e-12) {
        printf("수직선입니다 (x = %.4f)\n", *p_x1);
    }
    else {
        double slope = dy / dx;
        double bias = *p_y1 - slope * (*p_x1);
        printf("slope: %.4f\n", slope);
        printf("bias: %.4f\n", bias);
    }

    double distance_sq = dx * dx + dy * dy;
    double distance = custom_sqrt(distance_sq);

    return 0;
}
