#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//입력 버퍼에 남아 있는 문자(특히 '\n')를 제거하여 다음 입력 함수가 정상적으로 동작하도록 하는 함수
void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        ;
    }
}

int main(void)
{
    char str1[100];
    char str2[100];
    char copy[100];
    char sentence[200];
    char temp[200];

    char* pos;
    char ch;

    char* p_str1 = str1;
    char* p_str2 = str2;
    char* p_copy = copy;
    char* p_sentence = sentence;
    char* p_temp = temp;

    printf("Enter first string(no spaces):");
    scanf("%99s", p_str1);


    printf("Enter second string(no spaces):");
    scanf("%99s", p_str2);

    printf("\n--- Printed string (usinf puts)---\n");
    puts(p_str1);
    puts(p_str2);

    //----------------------------------------------------------
    //strlen 함수를 사용하여 각 문자열(str1, str2)의 길이(문자 개수)를 계산하고 출력하는 부분
    printf("\n---strlen practice---\n");
    printf("Length of str1:%zu\n", strlen(p_str1));
    printf("Length of str2:%zu\n", strlen(p_str2));
    //----------------------------------------------------------

    //scanf로 문자열을 입력받고, 입력 버퍼에 남은 개행 문자('\n')를 없애기 위해 존재하므로 이를 제거하지 않으면 이후 fgets가 즉시 종료되어 문장을 제대로 입력받지 못하게 됨
    clear_input_buffer();

    printf("\nEnter one sentence(can include spaces):");
    fgets(p_sentence, sizeof(sentence), stdin);
    printf("\nYou entered (sentence)=");
    puts(p_sentence);

    //---------------------------------------------------------

    //strcpy 함수를 사용하여 str1의 내용을 copy 배열로 복사하는 문자열 복사 실습이 목적
    printf("\n--- Practice #1:?????????---\n");
    strcpy(p_copy, p_str1);
    printf("copy=");
    puts(p_copy);
    //----------------------------------------------------------

    //strcat 함수를 사용하여 str2의 내용을 str1의 끝에 이어붙이는 문자열 연결 실습
    printf("\n--- Practice #2:?????????---\n");
    if (strlen(p_str1) + strlen(p_str2) < sizeof(str1)) {
        strcat(p_str, p_str2);
        printf("After concatenation, str1=");
        puts(p_str1);
    }
    else {
        printf("str1 buffer is too small; cannnot perform strcat!\n");
    }

    //----------------------------------------------------------

    //----------------------------------------------------------
    //printf로 strcmp 함수를 사용하여 str1과 str2를 사전식으로 비교하는 부분
    printf("\n--- Practice#3: ?????????---\n");
    {
        int cmp = strcmp(p_str1, p_str2);
        if (cmp == 0) {
            printf("str1 and str2 are equal.\n")
        }
        else if (cmp < 0) {
            printf("In lexicographical order, str1 comes before str2.\n");
        }
        else {
            printf("In lexicographical order, str1 comes after str2.\n");
        }
    }
    //----------------------------------------------------------
    //----------------------------------------------------------
    //이 파트는 strstr 함수를 사용하여 문장 안에 특정 문자열인 str2이 포함되어 있는지 검색하는 부분, 만약 발견되면 해당 위치의 주소를 반환하고, 없으면 NULL을 반환하는 역할
    printf("\n--- practice #5: ????????? ---\n");
    pos = strstr(p_sentence, p_str2);
    if (pos != NULL) {
        printf("Found\"%s\"in sentence.\n", p_str2);
    }
    //----------------------------------------------------------

    //----------------------------------------------------------
    // strtok 함수를 사용하여 문장을 공백 기준으로 분리(tokenizing)하는 실습
    printf("\n--- Practice #6: ????????? ---\n");
    printf("\n--- strtok practice: split sentence by spaces ---\n");
    // strtok는 문자열을 직접 수정하여 구분 문자를 '\0'로 바꾸므로 원본 문장을 보존하기 위해 temp에 복사한 후 사용함
    strcpy(p_temp, psentence);
    char* token = strtok(p_temp, " ");
    int i = 1;
    while (token != NULL) {
        printf("Token %d:", i++);
        puts(token);
        token = strtok(NULL, " ");
    }
    //----------------------------------------------------------

    printf("\nProgram finished.\n");
    return 0;
}