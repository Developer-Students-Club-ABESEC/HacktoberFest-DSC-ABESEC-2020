//Write a program in C to implement Quick Sorting.



#include<stdio.h>
void quicksort(int arr[25], int f, int l)
{
    int i, j, p, t;
    if(f < l)
    {
        p = f;
        i = f;
        j = l;
        while(i < j)
        {
            while(arr[i] <= arr[p] && i < l)
                i++;
            while(arr[j] > arr[p])
                j--;
            if(i < j)
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
        t = arr[p];
        arr[p] = arr[j];
        arr[j]=t;
        quicksort(arr,f,j-1);
        quicksort(arr,j+1,l);
   }
}
int main()  
{
    int i, n, arr[25];
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    printf("Enter %d elements: \n", n);
    for(i=0;i < n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("Order of Sorted elements: \n");
    for(i=0;i<n;i++)
        printf(" %d\t",arr[i]);
    return 0;
}
