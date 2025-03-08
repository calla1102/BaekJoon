#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    
    while(true){
        if(n%answer ==1){
            break;
        }
        else answer ++;
    }
    return answer;
}

int main()
{
    int num;
    printf("정수 입력");
    scanf("%d",&num);
    
    int result = solution(num);
    printf("x : %d", result);
}