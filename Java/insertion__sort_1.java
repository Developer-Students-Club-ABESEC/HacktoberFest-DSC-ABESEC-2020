import java.util.*;
public class insertion_sort 
{
    void func()
    {
        Scanner sc=new Scanner(System.in);

	System.out.println("enter the length of the array");
	int n=sc.nextInt();
        int ar[]=new int[n];
        System.out.println();
        System.out.println("enter elements");
        for(int i=0;i<n;i++)
        {
            ar[i]=sc.nextInt();
        }
	

	System.out.println("\nUnsorted array");
        for(int i=0;i<n;i++)
        {
            System.out.print(ar[i]+" ");
	}
	System.out.println();
        
	int temp;
        for(int r=1;r<n;r++)
        {
            for(int c=0;c<r;c++)
            {
                if(ar[c]>ar[r])
                {
                    temp=ar[c];
                    ar[c]=ar[r];
                    ar[r]=temp;
                }
            }
        }
        
       System.out.println("\nSorted array");
        for(int i=0;i<n;i++)
        {
            System.out.print(ar[i]+" ");
        }
            
    }
    public static void main(String args[])
    {
        insertion_sort obj=new insertion_sort();
        obj.func();
    }
    
}
