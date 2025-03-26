#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int* solution(int k, int score[], size_t score_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * score_len);
    int sc[k]; //명예의 전당 배열
    int num = 0;

    for (int i = 0; i < score_len; i++) {
        if (num < k) {
            sc[num++] = score[i];
            for (int p = 0; p < num - 1; p++) {
                for (int q = 0; q < num - p - 1; q++) {
                    if (sc[q] > sc[q + 1]) {
                        int temp = sc[q];
                        sc[q] = sc[q + 1];
                        sc[q + 1] = temp;
                    }
                }
            }
            answer[i] = sc[0];
        }
        else {
            if (score[i] > sc[0]) {
                sc[0] = score[i];
                for (int p = 0; p < k - 1; p++) {
                    for (int q = 0; q < k - p - 1; q++) {
                        if (sc[q] > sc[q + 1]) {
                            int temp = sc[q];
                            sc[q] = sc[q + 1];
                            sc[q + 1] = temp;
                        }
                    }
                }
            }
            answer[i] = sc[0];
        }
    }

    return answer;
}

int main() {
    int k;
    int score_len;

    printf("크기 입력: ");
    scanf("%d", &k);

    printf("길이 입력: ");
    scanf("%d", &score_len);

    int* score = (int*)malloc(score_len * sizeof(int));
    printf("배열 입력 : ");
    for (int i = 0; i < score_len; i++) {
        scanf("%d", &score[i]);
    }

    char* result = solution(k, score, score_len);

    printf("결과 : %s", result);
    return 0;
}

