import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int year = sc.nextInt();
        boolean b = false;
        if(year % 4 == 0 && year >= 1 && year <= 4000){
            if(year % 100 != 0 || year % 400 == 0){
                b = true;
            }else{
                b = false;
            }
        }
        if(b == true){
            System.out.println("1");
        }else if(b == false){
            System.out.println("0");
        }
    }
}