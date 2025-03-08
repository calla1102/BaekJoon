#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    
    for (int i=0; i<absolutes_len; i++)
    {
        if(signs[i]==true) absolutes[i]==absolutes[i];
        else absolutes[i] *=-1;
    }
    
    for (int i=0; i<absolutes_len; i++) answer +=absolutes[i];
    return answer;
}


int main() {
    int size;
    
    printf("배열 크기 입력: ");
    scanf("%d", &size);

    int* absolutes = (int*)malloc(size * sizeof(int));
    bool* signs = (bool*)malloc(size * sizeof(bool));

    printf("정수 입력 ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &absolutes[i]);
    }

    printf("부호 입력");
    for (int i = 0; i < size; i++) {
        int temp;
        scanf("%d", &temp);
        signs[i] = (temp != 0); 
    }

    int result = solution(absolutes, size, signs, size);
    printf("결과: %d\n", result);

    return 0;
}