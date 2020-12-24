import java.io.*;
import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
       Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        int i,j,k;
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int k1=0;
        for(j=0;j<n;j++)
        {
            if(a[j]!=0)
            {
                b[k1++]=a[j];
            }
        }
        for(k=0;k<n;k++)
        {
            System.out.print(b[k]+" ");
        }
    }
}
