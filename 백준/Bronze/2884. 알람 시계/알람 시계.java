import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
	      
		   Scanner scan = new Scanner(System.in);
		      
		      int H = scan.nextInt();
		      int M = scan.nextInt();
		      
		      if(M>=45&&M<=59) {
		         M=M-45;
		         System.out.println(H + " " + M);
		            
		      }
		      else if(M<45) {
		         if(H>0) {
		            H=H-1;
		            M=M-45+60;
		            System.out.println(H + " " + M);
		         }
		         else if(H==0) {
		            H=23;
		            M=M-45+60;
		            System.out.println(H + " " + M);
		         }
		            
		      }
	   }
}
