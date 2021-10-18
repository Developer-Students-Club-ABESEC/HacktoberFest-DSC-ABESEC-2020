mport java.util.*;
class pattern
{
	public static void main(String []args)
	{
		int i,j,k;
		int n;
		System.out.println("Enter the range");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				System.out.print(j);
			}
			for(k=j;k>=1;k--)
			{
				System.out.print(k);
			}
		System.out.println();
		}
    }
}
