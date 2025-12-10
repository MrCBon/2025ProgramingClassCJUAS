#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define DT 0.01
#define G 9.81
#define MAX_STEPS 20000

// 최고 높이 찾기
double GetMaxHeight(double arr[], int count)
{
    double maxValue = arr[0];
    int i;

    for (i = 1; i < count; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int main(void)
{
    double PI = 3.1415926535;

    double v0 = 15.0;
    double angle_deg = 75.0;

    // 단순 계산
    double angle_rad;
    double vx, vy;

    // 위치 값
    double x = 0.0;
    double y = 0.0;

    // 시간, 인덱스
    double t = 0.0;
    int idx = 0;

    // 배열
    double x_list[MAX_STEPS];
    double y_list[MAX_STEPS];

    // 각도 라디안 변환
    angle_rad = angle_deg * PI / 180.0;

    // 속도 분해
    vx = v0 * cos(angle_rad);
    vy = v0 * sin(angle_rad);

    // 시뮬레이션 시작
    while (1)
    {
        // 매 스텝 기록
        x_list[idx] = x;
        y_list[idx] = y;

        // 위치 업데이트
        x = x + vx * DT;
        y = y + vy * DT;

        // 땅에 닿으면 종료
        if (y < 0)
        {
            break;
        }

        // 속도 업데이트(중력)
        vy = vy - G * DT;

        // 시간 증가
        t = t + DT;

        // 배열 인덱스 증가
        idx++;

        // 배열 범위 초과 방지
        if (idx >= MAX_STEPS)
        {
            break;
        }
    }

    // 최고 높이 계산
    double max_y = GetMaxHeight(y_list, idx);

    // 비행거리(마지막 x 값)
    double distance = x_list[idx - 1];

    // 출력
    printf("비행 시간: %.3lf sec\n", t);
    printf("최고 높이: %.3lf m\n", max_y);
    printf("수평 사거리: %.3lf m\n", distance);

    return 0;
}
