#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;
    
 while (num != 1) { // 1이 될 때까지 반복
        if (num % 2 == 0) {
            num /= 2; // 짝수라면 2로 나눔
        } else {
            num = num * 3 + 1; // 홀수라면 3을 곱하고 1을 더함
        }
        answer++; // 연산 횟수 증가

        if (answer >= 500) return -1; // 500번 초과 시 -1 반환
    }
    
    return answer; // 최종 연산 횟수 반환
    
    if (num==1) answer = 0;
    if (answer >=500) answer = -1;
    return answer;
}

int main()
{
    long long num;
    printf("정수 입력 : ");
    scanf("%d",&num);
    
    int result = solution(num);
    
    printf("결과 : ", result);
}