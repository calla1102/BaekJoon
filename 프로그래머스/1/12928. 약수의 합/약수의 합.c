#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    
    int answer = 0;
    int count =0;
    int num[3000] = {0};
    
    for(int i =1; i<=n; i++)
    {
        if(n%i == 0) num[count++] =i;
    }
    for(int i=0; i<count; i++) answer += num[i];
    return answer;
}

int main()
{
    int n;
    printf("정수를 입력하세요 : ");
    scanf("%d",&n);
    
    int sum = solution(n);
    
    printf("약수의 합 : %d", sum);
}