import java.util.*;
public class fibonacci_series
{
    int n;
    void fibonacci(int n)
    {
        int v=1,a=0,b=1,c=0;
        while(v!=n)
        {
            if(v==1)
            System.out.println(a);
            else if(v==2)
            System.out.println(b);
            else
            {
                c=a+b;
                a=b;
                b=c;
                System.out.println(c);
            }
            v++;
        }
    }
    public static void main()
    {
        fibonacci_series ob=new fibonacci_series();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how many fibonacci terms you want to print");
        int n=sc.nextInt();
        ob.fibonacci(n);
    }
}
        
        
