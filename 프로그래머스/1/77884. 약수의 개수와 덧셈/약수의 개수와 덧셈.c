#include <stdio.h>
#include <math.h>

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++) {
        if ((int)sqrt(i) * (int)sqrt(i) == i) {
            answer -= i; 
        } else {
            answer += i; 
        }
    }

    return answer;
}

int main() {
    int left, right;
    printf("left와 right 입력: ");
    scanf("%d %d", &left, &right);

    int result = solution(left, right);
    printf("결과: %d\n", result);

    return 0;
}
