#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(const char* s) {
    
    const char* number[] = {"zero", "one", "two", "three", "four", 
                           "five", "six", "seven", "eight", "nine"};
    int answer = 0;
    int len = strlen(s);
    char temp[10];  
    int index = 0; 

    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            answer = answer * 10 + (s[i] - '0');
        } else { 
            temp[index++] = s[i]; 
            temp[index] = '\0'; 

            for (int j = 0; j < 10; j++) {
                if (strcmp(temp, number[j]) == 0) {
                    answer = answer * 10 + j;
                    index = 0;
                    break;
                }
            }
        }
    }

    return answer;
}

int main(){
    char number[50];
    printf("문자열 입력 : ");
    scanf("%s",&number);
    
    int result = solution(number);
    
    printf("결과 : %d", result);
}