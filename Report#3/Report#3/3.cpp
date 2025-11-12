#include <stdio.h>

int add(int a, int b) {    
    return a + b;
}

int main() {
    int x = 3, y = 5;
    int result = add(x, y);  
    printf("%d + %d = %d\n", x, y, result);
    return 0;
}