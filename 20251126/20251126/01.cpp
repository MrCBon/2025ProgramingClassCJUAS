#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 10

int main(void)
{
    int arr[SIZE];
    int i;

    srand((unsigned int)time(NULL));

    for (i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 201 - 100;
    }


    printf("[랜덤 배열 생성]\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
