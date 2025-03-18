#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int len1 = strlen(t);
    int len2 = strlen(p);

    for (int i = 0; i <= len1 - len2; i++) {
        char sub[len2 + 1]; 
        strncpy(sub, t + i, len2); 
        sub[len2] = '\0';

        if (strcmp(sub, p) <= 0) { 
            answer++;
        }
    }
    return answer;
}

int main(){
    
    char first[10000];
    char second[10000];
    printf("첫 번째 문자열 입력 : ");
    scanf("%c", &first);
    printf("두 번째 문자열 입력 : ");
    scanf("%c",&second);
    
    int result = solution(first, second);
    
    printf("결과 : %d", result);
}