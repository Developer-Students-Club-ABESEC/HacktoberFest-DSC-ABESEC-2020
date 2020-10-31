
import java.io.*;
import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int p=sc.nextInt();
        int c=a[0];
        for(int j=0;j<n;j++)
        {
            if(a[j]>c)
            {
                c=a[j];
            }
        }
        int t=c*p;
        System.out.print(t);
        
    }
}
