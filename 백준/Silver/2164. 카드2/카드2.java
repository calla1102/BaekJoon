import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Queue<Integer> que = new LinkedList<>();

        int N = sc.nextInt();
        
        //queue에 값 추가
        for (int i = 1; i <= N; i++) {
        	que.add(i);
        }

        //문제 조건
        while (que.size() > 1) {
        	que.remove();
        	que.add(que.poll()); 	
        }

        System.out.println(que.peek());

        sc.close();
    }
}