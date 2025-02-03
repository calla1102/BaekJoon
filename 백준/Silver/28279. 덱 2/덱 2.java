import java.util.ArrayDeque;
import java.util.Deque;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        Deque<Integer> dq = new ArrayDeque<>();
        int num = Integer.parseInt(br.readLine());  // 명령의 개수 입력
        StringBuilder result = new StringBuilder();
        
        for (int i = 0; i < num; i++) {
            String[] input = br.readLine().split(" ");  // 명령 입력 분리
            int x = Integer.parseInt(input[0]); 
            
            if (x == 1) {  
                int value = Integer.parseInt(input[1]);  
                dq.addFirst(value);
            } 
            else if (x == 2) {  
                int value = Integer.parseInt(input[1]);  
                dq.addLast(value);
            }
            else if (x == 3) { 
                if (dq.isEmpty()) result.append("-1\n");
                else result.append(dq.pollFirst()).append("\n");
            }
            else if (x == 4) { 
                if (dq.isEmpty()) result.append("-1\n");
                else result.append(dq.pollLast()).append("\n");
            }
            
            else if (x == 5) {  
                result.append(dq.size()).append("\n");
            }      
            else if (x == 6){  
                if (dq.isEmpty()) result.append("1\n");
                else result.append("0\n");
            }
        	else if (x == 7) {
        		if(dq.isEmpty()) result.append("-1\n");
        		else result.append(dq.peekFirst()).append("\n");;
        	}
        	else if (x == 8) {
        		if(dq.isEmpty()) result.append("-1\n");
        	    else result.append(dq.peekLast()).append("\n"); 
        	}
        }
        bw.write(result.toString());  // 결과 출력
        bw.flush();
        bw.close();
        br.close();
    }
}
