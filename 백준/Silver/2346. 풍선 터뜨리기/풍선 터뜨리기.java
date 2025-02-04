import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int num = Integer.parseInt(br.readLine());
        String[] input = br.readLine().split(" ");

        Deque<Integer> dq = new ArrayDeque<>(); //풍선 번호 저장
        List<Integer> val = new ArrayList<>(); //종이 숫자 저장
        
        for(int i=0; i<num; i++) {
        	dq.add(i + 1); 
        	val.add(Integer.parseInt(input[i])); // 종이에 적힌 값 저장
        }
        
        StringBuilder result = new StringBuilder();
 
        while (!dq.isEmpty()) {
            int now = dq.pollFirst();
            int move = val.get(now - 1); // 종이에 적힌 값 가져오기
            result.append(now).append(" "); 
            if (dq.isEmpty()) break; 

            if (move > 0) {
                for (int i = 1; i < move; i++) dq.addLast(dq.pollFirst());
                }
            else {
                for (int i = 0; i < Math.abs(move); i++) dq.addFirst(dq.pollLast());
                    }
        }

        bw.write(result.toString().trim());
        bw.flush();
        bw.close();
        br.close();
    }
}
