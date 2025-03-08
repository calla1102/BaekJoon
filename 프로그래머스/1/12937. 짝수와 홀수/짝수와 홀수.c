#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(5 * sizeof(char)); 

    if (num % 2 == 0) 
        strcpy(answer, "Even");
    else 
        strcpy(answer, "Odd");

    return answer;
}

int main()
{
    int num ;
    printf("정수 입력 : ");
    scanf("%d", &num);
    
    char result = solution(num);
    printf("결과 %s",result);
}