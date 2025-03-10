#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;

    for (int i = 0; i < b_len; i++)
    {
        answer += a[i] * b[i];
    }
    return answer;
}

int main()
{
    int len;
    printf("a와 b의 길이 입력 : ");
    scanf("%d", &len);

    int* a = (int*)malloc(len * sizeof(int));
    int* b = (int*)malloc(len * sizeof(int));

    printf("a 배열 입력 : ");
    for (int i = 0; i < len; i++) scanf("%d", &a[i]);

    printf("b 배열 입력 : ");
    for (int i = 0; i < len; i++) scanf("%d", &b[i]);

    int result = solution(a, len, b, len);

    printf("결과 : %d",result);
}