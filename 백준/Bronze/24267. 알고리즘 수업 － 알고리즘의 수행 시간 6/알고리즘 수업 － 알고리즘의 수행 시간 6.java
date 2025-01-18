import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
    	long n = sc.nextLong();
		
    	long sum =0;
				
		for(int i=1; i<=n-2; i++)
		{
			sum = sum+ i*(n-1-i);
		}
		System.out.println(sum);
        
        //최고차항 차수 출력
		System.out.println(3);
	}

}
