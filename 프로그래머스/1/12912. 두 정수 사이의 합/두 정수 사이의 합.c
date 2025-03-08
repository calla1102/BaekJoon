#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a < b)
    {
        for (int i = a; i<=b; i++) answer += i;
    }
    else if (a > b)
    {
        for (int i = a; i>=b; i--) answer += i;
    }
    else answer = a;
    
    return answer;
}

int main()
{
    long long a, b;
    printf("두 정수 입력 : ");
    scanf("%lld %lld", &a, &b);
    
    long long result = solution(a,b);
    
    printf("결과 : %lld", result);
}