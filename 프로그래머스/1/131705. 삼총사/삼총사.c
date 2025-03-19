#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;

    for (size_t i = 0; i < number_len - 2; i++) {
        for (size_t j = i + 1; j < number_len - 1; j++) {
            for (size_t k = j + 1; k < number_len; k++) {
                if (number[i] + number[j] + number[k] == 0) {
                    answer++;
                }
            }
        }
    }

    return answer;
}

int main() {

    int num;
    int numbers[13];

    printf("개수 입력 : ");
    scanf("%d", &num);

    printf("배열 입력 : ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int result = solution(numbers, num);

    printf("결과 : %d", result);
}