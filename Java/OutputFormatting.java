import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            int c=0;
            while(c<3)
            {  
            for(int i=0;i<3;i++)
            {
                String s1=sc.next();
                int x=sc.nextInt();
                System.out.print(s1);
                for(int j=0;j<(15- s1.length());j++)
                {
                    System.out.print(" ");
                }
                if(x%100!=0)
                {
                    System.out.println("0"+x);
                }
                /*else if(x%10!=0)
                {
                    System.out.println("00"+x);
                }*/
                else if(x<9)
                {
                    System.out.println("00"+x);
                }
                else
                {
                    System.out.println(x);
                } c++;
            }
            }
            System.out.println("================================");

    }
}



