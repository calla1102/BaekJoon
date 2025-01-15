import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int []len = new int[3];
		for(int i =0 ; i<3; i++)
		{
			len[i] = sc.nextInt();
		}
		
		int max = Math.max(len[0], Math.max(len[1], len[2]));
        int sum = len[0] + len[1] + len[2];
        int result =0;
        
        //삼각형 조건 성립x
        if (max >= sum - max) { 
        	//결과 = (가장 큰 값이 아닌 두 변의 합)*2 -1
        	result = (sum-max)*2 -1;
        }
        //삼각형 조건 성립 -> 합이 결과
        else result = sum; 
        
        System.out.println(result);
	}
}
        
