import java.util.*;
    public class hcf_lcm
    {
        int x,y;
        int lcm(int x,int y)
        {
            return x*y/hcf(x,y);
        }
        int hcf(int x,int y)
        {
            int h=0;
            int min=x<y?x:y;
            for(int i=1;i<=min;i++)
            if(x%i==0&&y%i==0)
            h=i;
            return h;
        }
        public static void main()
        {
            Scanner sc=new Scanner(System.in);
            hcf_lcm ob=new hcf_lcm();
            System.out.println("Enter two values to find their hcf and lcm");
            int x=sc.nextInt();
            int y=sc.nextInt();
            System.out.println("HCF of "+x+" and "+y+" is\t"+ob.hcf(x,y));
            System.out.println("LCM of "+x+" and "+y+" is\t"+ob.lcm(x,y));
        }
    }
            
