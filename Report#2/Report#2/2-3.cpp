#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main() {
    float theta_deg;
    float m = 100, mu_s = 0.5, mu_k = 0.4, g = 9.81;

    printf("��簢�� �Է��Ͻÿ�(��): ");
    scanf("%f", &theta_deg);

    if (theta_deg < 0 || theta_deg >= 90) {
        printf("invalid input\n");
        return 0;
    }

    float theta = theta_deg * M_PI / 180.0;
    float Fs_max = mu_s * m * g * cos(theta);
    float Fg_para = m * g * sin(theta);

    if (Fg_para <= Fs_max) {
        printf("�������� ���� (�̲������� ����)\n");
    }
    else {
        float a = g * (sin(theta) - mu_k * cos(theta));
        if (a > 0)
            printf("�̲����� �߻�, ���ӵ�: %.3f m/s��\n", a);
        else
            printf("���ӵ� ���� (����)\n");
    }

    return 0;
}
