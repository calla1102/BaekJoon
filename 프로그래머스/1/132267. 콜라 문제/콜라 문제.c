#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int cola;
    while (n >= a) {
        cola = (n / a) * b;
        answer += cola;
        n = (n % a) + cola;
    }
    return answer;
}

int main() {
    int a, b, n;

    printf("필요한 빈 병의 수 : ");
    scanf("%d", &a);

    printf("받는 병의 수 : ");
    scanf("%d", &b);

    printf("빈 병의 개수 : ");
    scanf("%d", &n);


    int result = solution(a, b, n);
    printf("결과 : %d", result);

    return 0;
}