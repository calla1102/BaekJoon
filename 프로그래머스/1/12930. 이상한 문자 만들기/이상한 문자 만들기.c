#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(s);
    int count = 1;
    char* answer = (char*)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ') {
            answer[i] = ' ';
            count = 1;
        }
        else {
            if (count % 2 != 0) {
                answer[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] - 32 : s[i];
            }
            else {
                answer[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];
            }
            count++;
        }
    }
    answer[len] = '\0'; // 문자열 종료 문자 추가
    return answer;
}

int main()
{
    char string[1000];

    printf("문자열 입력 : ");
    scanf("%999[^\n]", string);

    char* result = solution(string);

    printf("결과 : %s\n", result);

    free(result);
    return 0;
}