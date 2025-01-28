import java.util.Stack;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();  
        sc.nextLine();  //줄바꿈 처리

        for (int i = 0; i < num; i++) {
            String str = sc.nextLine();  //한 줄의 괄호 문자열 입력
            Stack<Character> stack = new Stack<>();

            boolean isValid = true;

            for (char ch : str.toCharArray()) {
                if (ch == '(') { //여는 괄호는 스택에 추가
                    stack.push(ch);
                } else if (ch == ')') {
                    if (stack.isEmpty()) {
                        isValid = false;  //닫는 괄호인데 스택이 비어 있으면 오류
                        break;
                    } else {
                        stack.pop(); //닫는 괄호면 스택에서 여는 괄호를 제거
                    }
                }
            }

            if (!stack.isEmpty()) {
                isValid = false;
            }

            if (isValid) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
