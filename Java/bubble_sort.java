import java.util.*;
public class bubble_sort 
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
        for(int r=0;r<(n-1);r++)//pass
        {
            for(int c=0;c<(n-1)-r;c++)
            {
                if(ar[c]>ar[c+1])
                {
                    temp=ar[c];
                    ar[c]=ar[c+1];
                    ar[c+1]=temp;
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
        bubble_sort obj=new bubble_sort();
        obj.func();
    }
    
}

