import java.util.Scanner;
import java.util.Stack;
import java.util.Queue;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
 
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder result = new StringBuilder();  // 출력 결과 저장
       
        Queue<Integer> que = new LinkedList<>();
        int num = Integer.parseInt(br.readLine());  
        
        for(int i=0; i<num; i++)
        {
        	String[] what = br.readLine().split(" ");
        	String x = what[0];
        	
        	if(x.equals("push")) {
        		int a = Integer.parseInt(what[1]);
        		que.add(a);
        	}
        	else if(x.equals("pop")) {
        		if(que.isEmpty()) result.append("-1\n");
        		else result.append(que.remove()).append("\n");
        	}
        	else if(x.equals("size")) {
        		result.append(que.size()).append("\n");
        	}
        	else if(x.equals("empty")) {
        		if(que.isEmpty()) result.append("1\n");
        		else result.append("0\n");
        	}
        	else if(x.equals("front")) {
        		if(que.isEmpty()) result.append("-1\n");
        		else result.append(que.peek()).append("\n");;
        	}
        	else if(x.equals("back")) {
        		if(que.isEmpty()) result.append("-1\n");
        	    else result.append(((LinkedList<Integer>) que).getLast()).append("\n");
        	}
        }
    	bw.write(result.toString());  // 결과 출력
        bw.flush();
        bw.close();
        br.close();
    }
}



