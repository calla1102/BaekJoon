import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong(); // 입력값을 long으로 받음
        sc.close();

        long sum = 0;
        for (long i = 1; i < n; i++) {
            sum += i; // 합 계산
        }

        // 코드1 수행 횟수 출력
        System.out.println(sum);

        // 최고차항 출력
        System.out.println(2);
    }
}
