
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int i,j,a,b;
        for(a=1;a<=x;a++)
        {
            System.out.print("1");
        }
        System.out.println("");
        for(i=3;i<=y;i++)
        {
            for(j=1;j<=y;j++)
            {
                if(j==1||j==y)
                {
                    System.out.print("1");
                }
                else
                {
                   System.out.print(" "); 
                }
            }
            System.out.println();
        }
        for(b=1;b<=x;b++)
        {
            System.out.print("1");
        }
        
    }
}
