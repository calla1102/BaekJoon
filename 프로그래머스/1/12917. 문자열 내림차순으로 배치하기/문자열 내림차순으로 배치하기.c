#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {

    int len = strlen(s);
    char* answer = (char*)malloc((len + 1)*sizeof(char));

    strcpy(answer, s);

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (answer[i] < answer[j]) {
                char temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    answer[len] = '\0';
    return answer;
}

int main() {

    printf("문자열 입력 : ");
    
    char word[100];

    scanf("%s", &word);

    char* result = solution(word);

    if (result != NULL) {
        printf("결과 : %s\n", result);
    }

}