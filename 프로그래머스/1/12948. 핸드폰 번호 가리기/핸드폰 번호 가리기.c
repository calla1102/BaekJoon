#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* phone_number) {

    int count = strlen(phone_number);

    char* answer = (char*)malloc((count+1) * sizeof(char));

    for (int i = 0; i < count - 4; i++) {
        answer[i] = '*';
    }
    strcpy(answer + count - 4, phone_number + count - 4);
    answer[count] = '\0';

    return answer;
}

int main()
{

    char number[20];
    printf("번호 입력 : ");
    scanf("%s", &number);

    char* result = solution(number);

    if (result != NULL) {
        printf("결과 : %s\n", result);
    }
}