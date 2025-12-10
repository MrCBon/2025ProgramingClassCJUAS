#include <stdio.h>

struct S {
    int x; 
    int y; 
};

union U {
    int x;
    int y;
};

int main(void)
{
    
    struct S s = { 10, 20 };
    union U u;

    printf("=== [1] 메모리 크기 비교 ===\n");
    printf("구조체 S의 크기: %zu 바이트 (int 두 개의 합)\n", sizeof(struct S));
    printf("공용체 U의 크기: %zu 바이트 (int 중 가장 큰 하나의 크기)\n", sizeof(union U));   
    printf("----------------------------------------\n");
    printf("=== [2] 구조체 S 동작 확인 ===\n");
    printf("s.x = %d, s.y = %d (값이 독립적으로 보존됨)\n", s.x, s.y);
    printf("----------------------------------------\n");
    printf("=== [3] 공용체 U 동작 확인 (데이터 덮어쓰기) ===\n");
    u.x = 100;

    printf("u.x = 100 할당 후: u.x = %d, u.y = %d\n", u.x, u.y);
    u.y = 200;

    printf("u.y = 200 할당 후: u.x = %d, u.y = %d\n", u.x, u.y);
    printf("----------------------------------------\n");

    return 0;
}