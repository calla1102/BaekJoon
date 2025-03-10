#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;

    for (int i = 0; i < numbers_len; i++)
        answer += numbers[i];

    answer = 45 - answer;

    return answer;
}

int main() {
    int len;
    printf("배열 길이 입력 : ");
    scanf("%d", &len);

    int* numbers = (int*)malloc(len * sizeof(int));

    printf("배열 입력 : ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = solution(numbers, len);
    printf("결과 : %d\n", result);

    return 0;
}