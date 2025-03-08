#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int x2 = x; 
    int sum = 0; 
    while (x2 > 0) { 
        sum += x2 % 10; 
        x2 /= 10; 
    }
    if(x%sum==0) answer = true;
    else answer = false;
    
    return answer;
}

int main()
{
    int num;
    printf("정수 입력 : ");
    scanf("%d",&num);
    
    bool result = solution(num);
    printf("결과: %s\n", result ? "true" : "false"); 
}