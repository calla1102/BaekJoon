import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int angle1 = sc.nextInt();
		int angle2 = sc.nextInt();
		int angle3 = sc.nextInt();

		String result = ""; //문자열 초기화
		
		int sum = angle1+angle2+angle3;
		
		if (sum != 180) result = "Error";
		else {
			if (angle1==60 && angle2==60 && angle3==60) result = "Equilateral";
			else if(angle1!=angle2 && angle2 != angle3 &&angle1!=angle3) result = "Scalene";
			else result ="Isosceles"; //가장 복잡한 경우의 수 else처리
		}
		
		
		System.out.println(result);
	}

}