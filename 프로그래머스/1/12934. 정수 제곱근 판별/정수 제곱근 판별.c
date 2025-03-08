#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    
    double num = sqrt(n);
    if(num == (int)num) return (num+1)*(num+1);
    else return -1;
}
int main ()
{
    long long num;
    printf("정수 입력 : ");
    scanf("%lld",&num);
    
    long long result = solution(num);
    
    printf("결과 : %lld", result);
}

