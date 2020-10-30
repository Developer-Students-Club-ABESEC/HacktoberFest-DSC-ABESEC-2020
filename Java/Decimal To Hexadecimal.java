import java.util.*;
public class DecimalToHexadecimal
{void main()
    {Scanner sc=new Scanner(System.in);
    System.out.println("Enter a decimal number");
    int n=sc.nextInt();
    int rem;
    String c="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(n>0)
    {rem=n%16;
        c=hex[rem]+c;
        n=n/16;}
        System.out.println("It's Hexadecimal Value is "+c);
    }
}
