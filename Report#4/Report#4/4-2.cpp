#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// 합계 계산 함수
double CalcSum(int arr[], int count)
{
    double total = 0.0;
    for (int i = 0; i < count; i++)
        total += arr[i];
    return total;
}

// 분산 계산 함수
double CalcVariance(int arr[], int count, double avg)
{
    double variance = 0.0;
    for (int i = 0; i < count; i++)
        variance += (arr[i] - avg) * (arr[i] - avg);
    return variance / count;
}

int main(void)
{
    srand((unsigned int)time(NULL));

    int totalCount = 100;
    int extractCount = 10;

    int numbers[100];       // 난수값 저장한 배열
    int extracted[10];      // 자동으로 선택된 10개 값 저장

    int minValue, maxValue;

    printf("난수 생성 최소값 입력: ");
    scanf("%d", &minValue);

    printf("난수 생성 최대값 입력: ");
    scanf("%d", &maxValue);

    // 난수 생성
    for (int i = 0; i < totalCount; i++)
        numbers[i] = (rand() % (maxValue - minValue + 1)) + minValue;

    // 생성된 난수 출력
    int startIndex = rand() % (totalCount - extractCount + 1);
    int endIndex = startIndex + extractCount - 1;

    printf("\n자동으로 선택된 추출 범위: %d ~ %d\n", startIndex, endIndex);

    // 선택된 값 중 10개 추출 개시
    for (int i = 0; i < extractCount; i++)
        extracted[i] = numbers[startIndex + i];

    // 합계, 평균, 분산, 표준편차 계산
    double sum = CalcSum(extracted, extractCount);
    double mean = sum / extractCount;
    double variance = CalcVariance(extracted, extractCount, mean);
    double stdev = sqrt(variance);

    printf("\n합계: %.4lf\n", sum);
    printf("평균: %.4lf\n", mean);
    printf("분산: %.4lf\n", variance);
    printf("표준편차: %.4lf\n", stdev);

    return 0;
}
