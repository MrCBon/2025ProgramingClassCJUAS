#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10
// 분산 계산 함수
double calcVariance(int arr[], double mean) {
    double var = 0;
    for (int i = 0; i < N; i++)
        var += pow(arr[i] - mean, 2);
    return var / N;
}

int main() {
    int num[N];
    int sum = 0;
    srand(time(NULL));

    // 난수 생성 (0~99)
    for (int i = 0; i < N; i++) {
        num[i] = rand() % 100;
        sum += num[i];
        printf("%d ", num[i]);
    }
    
    // 통계량 계산
    double mean = (double)sum / N;
    double variance = calcVariance(num, mean);
    double stddev = sqrt(variance);

    printf("\n합계: %.2f, 평균: %.2f, 분산: %.2f, 표준편차: %.2f\n",
        (double)sum, mean, variance, stddev);
    return 0;
}