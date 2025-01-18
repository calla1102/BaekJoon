import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int a1 = sc.nextInt();		
		int a0 = sc.nextInt();
		int c = sc.nextInt();
		int n0 = sc.nextInt();
		sc.close();
		
		//a1*n + a0 <= c*n && n0>=c
		//a0 <= (c-a1)*n && n0>=c
		
		//조건; a0/(c-a1)<=c && c-a1>0
        if((a1*n0+a0)<= c*n0 && a1 <= c){
        System.out.println(1);
        }else{
        System.out.println(0);
        }
    }
}
