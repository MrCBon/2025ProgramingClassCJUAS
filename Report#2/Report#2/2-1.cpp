#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float weight;
    printf("ÃÑ ¹«°Ô ÀÔ·Â(kg): ");
    scanf("%f", &weight);

    if (weight < 0) {
        printf("invalid input\n");
        return 0;
    }

    if (weight <= 600)
        (weight >= 0) ? printf("OK\n") : printf("invalid input\n");
    else
        printf("Overload\n");

    return 0;
}
