#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    
    for(int i=1 ; i<= count; i++) 
        answer = answer +price*i;
    if(answer>money) return answer - money;
    else return 0;
}

int main()
{
    int price, money, count; 
    
    printf("금액 입력 : ");
    scanf("%d",&price);
    printf("가진 돈 입력 : ");
    scanf("%d",&money);
    printf("횟수 입력 : ");
    scanf("%d",&count);
    
    int result = solution(price,money, count);
    
    printf("거스름돈 : %d", result);
}