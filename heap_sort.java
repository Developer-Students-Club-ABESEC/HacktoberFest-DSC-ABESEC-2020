import java.util.*;
public class heap_sort
{ 
    void heapify(int ar[], int n, int i) 
    { 
        int largest = i;  // Initialize  
        int l = 2*i;      // left 
        int r = 2*i + 1;  //right
  
         
        if (l < n && ar[l] > ar[largest]) 
            largest = l; 
  
       
        if (r < n && ar[r] > ar[largest]) 
            largest = r; 
  
        if (largest != i) 
        { 
            int swap = ar[i]; 
            ar[i] = ar[largest]; 
            ar[largest] = swap; 
  
            
            heapify(ar, n, largest); 
        } 
    } 
    public void build_max_heap(int ar[]) 
    { 
        int n = ar.length; 
        for (int i = n / 2 - 1; i >= 0; i--) 
            heapify(ar, n, i); 
        for (int i=n-1; i>=0; i--) 
        { 
            int temp = ar[0]; 
            ar[0] = ar[i]; 
            ar[i] = temp; 
            heapify(ar, i, 0); 
        } 
    }
    public static void main(String args[]) 
    { 
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int m = sc.nextInt();
        int ar[] = new int[m];
        System.out.println("Enter elements : ");
        for(int i=0;i<m;i++)
        {
            ar[i]=sc.nextInt();
        }
	System.out.println("\nUnsorted Array: ");
        int n = ar.length;
        for(int i=0;i<n;i++)
        {
            System.out.print(ar[i]+" ");
        }
        heap_sort ob = new heap_sort(); 
        ob.build_max_heap(ar); 
  	System.out.println("\n");
        System.out.println("Sorted array: "); 
        n=ar.length;
        for(int i=0;i<n;i++)
        {
            System.out.print(ar[i]+" ");
        }
    } 
}
