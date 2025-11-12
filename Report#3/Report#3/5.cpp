#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    //난수 생성
    int target = rand() % 100 + 1;  // 1~100 사이 난수
    int guess;

    printf("1~100 사이 숫자를 맞혀보세요! (기회 10번)\n");

    for (int i = 1; i <= 10; i++) {
        printf("[%d번째 시도] 입력: ", i);
        scanf("%d", &guess);
        // 입력값 검증
        if (guess == target) {
            printf("정답입니다! (%d회 시도)\n", i);
            return;
        }
        // 힌트 제공
        else if (guess < target)
            printf("UP!\n");
        else
            printf("DOWN!\n");
    }
    printf("10번의 기회를 모두 사용했습니다. 정답은 %d입니다.\n", target);
}

// 메인함수
int main() {
    srand(time(NULL));
    playGame();
    return 0;
}
