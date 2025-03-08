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
    printf("정수 입력: ");
    scanf("%lld", &n);

    int* result = solution(n);

    long long temp = n;
    int count = 0;
    if (temp == 0) {
        count = 1; 
    } else {
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }

    printf("결과 배열: [");
    for (int i = 0; i < count; i++) {
        printf("%d", result[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(result); 

    return 0;
}
