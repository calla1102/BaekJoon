#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    int length = 0; 
    for (int i = 1; i < food_len; i++) {
        if (food[i] % 2 != 0) food[i]--;
        length += food[i];
    }
    length *= 2;  
    length += 1; 

    char* answer = (char*)malloc((length + 1) * sizeof(char)); 

    int index = 0;

    for (int i = 1; i < food_len; i++) {
        for (int j = 0; j < food[i] / 2; j++) {
            answer[index++] = '0' + i;  //문자열로 반환
        }
    }

    answer[index++] = '0'; 

    for (int i = food_len - 1; i > 0; i--) {
        for (int j = 0; j < food[i] / 2; j++) {
            answer[index++] = '0' + i;  
        }
    }

    answer[index] = '\0';

    return answer;
}

int main() {

    int food[1000] = { 0 };
    int len;

    printf("배열 길이 입력 : ");
    scanf("%d", &len);

    printf("배열 입력 : ");
    for (int i = 0; i < len; i++) scanf("%d", &food[i]);

    char* result = solution(food, len);

    printf("결과 : %s", result);
}