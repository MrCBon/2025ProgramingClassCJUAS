#include <stdio.h>

int main()
{
    int code = 65;
    char ch = 'A';
    const char* str1 = "Char/String & Escapes";
    const char* str2 = "double quotes";
    float avg = 87.3456f;

    printf("=== %s ===\n\n", str1);
    printf("Char : %c, code: %d\n\n", ch, code);
    printf("Mesesage:\n\n");
    printf("First line\n\n");
    printf("\tIndented second line\n\n");
    printf("Third line\n\n");
    printf("Quotes: \"%s\" and 'single quotes' \n\n", str2);
    printf("Backslash: \\\n\n");
    printf("Average: [\t%8.2f]", avg);


    return 0;
}
