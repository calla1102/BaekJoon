#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    return atoi(s);  // 문자열을 정수로 변환하는 함수
}

int main() {
    char s[6]; 
    printf("문자열을 입력하세요: ");
    scanf("%5s", s);  // 최대 5자리까지 입력받기

    int result = solution(s);  // 변환 함수 호출
    printf("변환된 숫자: %d\n", result);

    return 0;
}
