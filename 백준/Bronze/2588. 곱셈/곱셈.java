import java.util.Scanner;
public class Main {
	public static void main(String[] args) {	
	Scanner scan = new Scanner(System.in);
	int a,b;
	a = scan.nextInt();
	b = scan.nextInt();
	int mul1 = (a*(b%10));
	int mul2 = (a*((b%100)/10));
	int mul3 = (a*(b/100));
    System.out.println(mul1);
    System.out.println(mul2);
    System.out.println(mul3);
	System.out.println(mul1+(mul2*10)+(mul3*100));
	}
}