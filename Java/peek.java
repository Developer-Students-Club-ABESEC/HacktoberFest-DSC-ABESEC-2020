
import java.io.*;
import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int s=sc.nextInt();
        int a[]=new int[s];
        int i,j;
        for(i=0;i<s;i++)
        {
            a[i]=sc.nextInt();
        }
        for(j=1;j<s-1;j++)
        {
            if(a[j]>a[j+1]&&a[j]>a[j-1])
            {
                System.out.print(a[j]);
                break;
            }
        }
    }
}
