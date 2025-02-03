import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Queue<Integer> que = new LinkedList<>();

        int N = sc.nextInt();
        int K = sc.nextInt();
        
        //queue에 값 추가
        for (int i = 1; i <= N; i++) {
        	que.add(i);
        }

        //출력 값 추가
        StringBuilder result = new StringBuilder();

        while (!que.isEmpty()) {

        	for (int i=1 ; i < K; i++)
        	{
        		que.add(que.poll());
        	}
            result.append(que.poll());
            if (!que.isEmpty()) {
                result.append(", ");
            }
        }

        System.out.println("<"+result.toString()+">");

        sc.close();
    }
}