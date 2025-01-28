import java.util.Stack;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		Stack<Integer> stack = new Stack<Integer>();
		
		int num = sc.nextInt();
		int sum = 0;
		
		for(int i=0; i<num; i++)
		{
			int number = sc.nextInt();
			if(number==0) stack.pop(); //0이면 stack에서 지움
			else stack.add(number); //0이 아니면 stack에 추가함
		}
		
		//k가 stack안에 있을때 sum에 더함
		for(int k : stack) sum+=k;
		System.out.println(sum);
	}
}
