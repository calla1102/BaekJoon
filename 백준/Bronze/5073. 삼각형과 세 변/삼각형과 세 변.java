import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> result = new ArrayList<>();

        while (true) {
            int[] len = new int[3];
            len[0] = sc.nextInt();
            len[1] = sc.nextInt();
            len[2] = sc.nextInt();

            // 종료 조건
            if (len[0] == 0 && len[1] == 0 && len[2] == 0) {
                break;
            }

            int max = Math.max(len[0], Math.max(len[1], len[2]));
            int sum = len[0] + len[1] + len[2];

            // 삼각형 조건 확인
            if (max >= sum - max) {
                result.add("Invalid");
            } else if (len[0] == len[1] && len[1] == len[2]) {
                result.add("Equilateral");
            } else if (len[0] == len[1] || len[1] == len[2] || len[0] == len[2]) {
                result.add("Isosceles");
            } else {
                result.add("Scalene");
            }
        }

        for (String res : result) {
            System.out.println(res);
        }
    }
}
