#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> 

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int len = strlen(s);

    if (len != 4 && len != 6) {
        return false;
    }

    for (int i = 0; i < len; i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) {
            return false;
        }
    }

    return true; 
}

int main() {
    char string[1000];

    printf("문자열 입력 : ");
    scanf("%s", string);

    bool result = solution(string);

    if (result) {
        printf("결과 : true\n");
    } else {
        printf("결과 : false\n");
    }

    return 0;
}
