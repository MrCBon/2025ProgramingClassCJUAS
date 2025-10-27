#include <stdio.h>


int rec_func(int n)
{
    if (n == 1)            
        return 1;
    else
        return n + rec_func(n - 1);  
}

int main(void)
{
    int result;

    result = rec_func(10);  
    printf("%d\n", result); 

    return 0;
}
