int solution(int n)
{
    int answer = 0;
    int len = 0;
    int power=1;
    int num = n;
    
    while(num/3 > 0){
        num = num/3;
        len++;
    }
    
    while(n>0)
    {
        power = 1;
        for (int i = 0; i < len; i++)
        {
            power = power*3;
        }
        answer = answer + (n % 3)*power;
        n = n / 3;
        len--;
    }
    return answer;
}
int main() {
    int num;
    printf("정수 입력 : ");
    scanf("%d", &num);

    int result = solution(num);

    printf("결과 : %d\n", result);
    return 0;
}