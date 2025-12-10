#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

   
    int lotto[6];      // 로또 번호
    int userNums[6];   // 사용자 번호
    int matchCount = 0; // 일치 개수

    // 로또 번호 생성 (중복 체크)
    int count = 0;
    while (count < 6)
    {
        int n = rand() % 45 + 1;
        int dup = 0;
        for (int i = 0; i < count; i++)
            if (lotto[i] == n) dup = 1;
        if (!dup) lotto[count++] = n;
    }

    // 사용자 입력
    printf("로또번호 6개 입력: ");
    for (int i = 0; i < 6; i++)
        scanf("%d", &userNums[i]);

    // 일치 개수 계산
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (lotto[i] == userNums[j])
                matchCount++;

    // 결과 출력
    printf("\n LOTTO 6/45 금회차 당첨 번호: ");
    for (int i = 0; i < 6; i++)
        printf("%d ", lotto[i]);

    printf("\n일치 개수: %d\n", matchCount);

    return 0;
}
