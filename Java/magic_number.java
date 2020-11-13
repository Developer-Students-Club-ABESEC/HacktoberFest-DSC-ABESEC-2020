import java.util.*;
public class magic_number
{
    int sod(int n)
    {
        int s=0,d=n;
        while(d!=0)
        {
            s=s+d%10;
            d=d/10;
        }
        return s;
    }
    int length(int n)
    {
        int d=n,c=0;
        while(d!=0)
        {
            c++;
            d=d/10;
        }
        return c;
    }
    public static void main()
    {
        int n,q=0;
        Scanner sc=new Scanner(System.in);
        magic_number ob=new magic_number();
        System.out.println("Enter a number");
        n=sc.nextInt();
        while(ob.length(n)!=1)
        {
            q=ob.sod(n);
            n=q;
        }
        if(q==1)
           System.out.println("It is a magic number");
        else
           System.out.println("It is not a magic number");
        }
    }
