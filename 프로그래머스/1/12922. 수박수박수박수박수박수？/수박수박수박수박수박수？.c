#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc((n *3) * sizeof(char));

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) strcpy(answer + (i * 3), "수");
        else strcpy(answer + (i * 3), "박");
    }

    answer[n * 3] = '\0';
    return answer;

}

int main() {

    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);

    char* result = solution(n);

    if (result != NULL) {
        printf("결과 : %s\n", result);
    }
}