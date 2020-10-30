#include<stdio.h>
int partition(int a[],int low, int high)
{
    int i=low;
    int j=high+1;
    int c,pivot;
    pivot=a[low];

 while(j>i){
        do{
            i++;
        }while(a[i]<pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i<j)
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }



}   if (i>j){
    c=a[low];
    a[low]=a[j];
    a[j]=c;}

    return j;
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }

}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}



void main()
{

    int a[]={8,7,28,1,0,6,9,10,3};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    printarray(a,n);



}
