#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char door;
    float temp;
    int time;

    printf("�� ���� �Է�(o:open / c:close): ");
    scanf(" %c", &door);
    printf("�µ� �Է�(��C): ");
    scanf("%f", &temp);
    printf("���� �ð�(��): ");
    scanf("%d", &time);

    if ((door != 'o' && door != 'c') || time < 0) {
        printf("invalid input\n");
        return 0;
    }

    if (door == 'c') {
        if (temp >= 2.0 && temp <= 8.0) {
            printf("Normal\n");
        }
        else {
            if (time <= 30) {
                printf("Warning\n");
            }
            else {
                printf("Critical\n");
            }
        }
    }
    
    else if (door == 'o') {
        if (time >= 60 && (temp <= 2.0 || temp >= 8.0)) {
            printf("Critical\n");
        }
        else {
            printf("Normal\n");
        }
    }

    return 0;
}
