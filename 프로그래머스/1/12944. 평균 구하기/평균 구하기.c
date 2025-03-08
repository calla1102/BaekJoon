#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double solution(int arr[], size_t arr_len) {
    double answer = 0;
    
    int sum = 0; 
    for (int i=0; i< arr_len; i++) sum += arr[i];
    answer = (double)sum /arr_len;
    return answer;
}

int main() {
    int arr[100]; 
    int len;

    printf("배열 크기 입력 : ");
    scanf("%d", &len);


    printf("배열 원소 입력 : ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    double avg = solution(arr, len);
    printf("평균값: %.2f\n", avg);

    return 0;
}