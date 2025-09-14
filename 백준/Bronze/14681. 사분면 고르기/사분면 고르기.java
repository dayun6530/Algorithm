import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        if(-1000 <= x && x < 0){
            x = -1;
        }
        else if(0 < x && x <= 1000){
            x = 1;
        }
        if(-1000 <= y && y < 0){
            y = -1;
        }else if(0 < y && y <= 1000){
            y = 1;
        }
        if(x == 1 && y == 1){
            System.out.println("1");
        }else if(x == -1 && y == 1){
            System.out.println("2");
        }else if(x == -1 && y == -1){
            System.out.println("3");
        }else if(x == 1 && y == -1){
            System.out.println("4");
        }
    }
}