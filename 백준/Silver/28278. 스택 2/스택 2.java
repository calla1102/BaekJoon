import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        Stack<Integer> stack = new Stack<>();

        int num = Integer.parseInt(br.readLine()); 
        StringBuilder result = new StringBuilder(); 

        for (int i = 0; i < num; i++) {
            String[] command = br.readLine().split(" "); 

            if (command[0].equals("1")) {
                int value = Integer.parseInt(command[1]);
                stack.push(value);
            } else if (command[0].equals("2")) {  
                if (stack.isEmpty()) {
                    result.append("-1\n");
                } else {
                    result.append(stack.pop()).append("\n");
                }
            } else if (command[0].equals("3")) {  
                result.append(stack.size()).append("\n");
            } else if (command[0].equals("4")) {  
                result.append(stack.isEmpty() ? "1\n" : "0\n");
            } else if (command[0].equals("5")) { 
                if (stack.isEmpty()) {
                    result.append("-1\n");
                } else {
                    result.append(stack.peek()).append("\n");
                }
            }
        }

        bw.write(result.toString());
        bw.flush();
        bw.close();
        br.close();
    }
}
