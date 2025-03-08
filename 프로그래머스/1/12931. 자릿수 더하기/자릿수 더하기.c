#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    while (n > 0) { 
        answer += n % 10; 
        n /= 10; 
    }
    return answer;
}

int main()
{
    int n;
    printf("정수를 입력하세요 : ");
    scanf("%d",&n);
    
    int sum = solution(n);
    
    printf("합계 : %d",sum);
}