#include <stdio.h>
#include <stdlib.h>


int* solution(long long n) {
    int* answer = (int*)malloc(sizeof(int)*12);
    for(int i=0; n!=0; i++){
        answer[i]=n%10;
        n/=10;
    }
    return answer;
}
int main() {
    long long n;
    printf("정수를 입력하세요: ");
    scanf("%lld", &n);

    // solution() 호출
    int* result = solution(n);

    // 숫자의 자릿수 계산
    long long temp = n;
    int count = 0;
    if (temp == 0) {
        count = 1; // 숫자가 0이면 자릿수는 1
    } else {
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }

    // 결과 출력
    printf("결과 배열: [");
    for (int i = 0; i < count; i++) {
        printf("%d", result[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(result);  // 동적 할당된 메모리 해제

    return 0;
}