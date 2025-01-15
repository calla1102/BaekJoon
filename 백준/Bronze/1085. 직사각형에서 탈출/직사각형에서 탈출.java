import java.util.Scanner;

public class Main {	
	public static void main(String[] args) {
	
	Scanner sc = new Scanner(System.in);
	int x = sc.nextInt();
	int y = sc.nextInt();
	int w = sc.nextInt();
	int h = sc.nextInt();

	int minx = Math.min(w-x, x);
	int miny = Math.min(h-y, y);
	
	System.out.println(Math.min(minx, miny));
	
	}

}