#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main() {
    float theta_deg;
    float m = 100, mu_s = 0.5, mu_k = 0.4, g = 9.81;

    printf("경사각을 입력하시오(도): ");
    scanf("%f", &theta_deg);

    if (theta_deg < 0 || theta_deg >= 90) {
        printf("invalid input\n");
        return 0;
    }

    float theta = theta_deg * M_PI / 180.0;
    float Fs_max = mu_s * m * g * cos(theta);
    float Fg_para = m * g * sin(theta);

    if (Fg_para <= Fs_max) {
        printf("정지상태 유지 (미끄러지지 않음)\n");
    }
    else {
        float a = g * (sin(theta) - mu_k * cos(theta));
        if (a > 0)
            printf("미끄러짐 발생, 가속도: %.3f m/s²\n", a);
        else
            printf("가속도 없음 (정지)\n");
    }

    return 0;
}
