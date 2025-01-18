import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(); // 입력의 크기를 long으로 처리
        sc.close();

        // 수행 횟수 출력
        System.out.println(n * n);

        // 다항식의 최고차항 차수 출력
        System.out.println(2);
    }
}
