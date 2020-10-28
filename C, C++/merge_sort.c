/ Program to merge sort an array
#include<stdio.h>
int merge(int a[20],int low,int mid,int high)
{
     int i=low,j=mid+1,k=low;
     int c[20];
     while(i<=mid && j<=high)
     {
         if(a[i]<a[j])
         {
             c[k]=a[i];
             i++;
             k++;
         }
         else
         {
             c[k]=a[j];
             j++;
             k++;
         }
     }
     while(j<=high)
     {
            c[k]=a[j];
            j++;
            k++;
     }
     while(i<=mid)
     {
            c[k]=a[i];
            i++;
            k++;
     }
     for(i=low;i<=high;i++)
     {
         a[i]=c[i];
     }
}
int mergesort(int a[20] , int low, int high)
{
    int mid;
    if(low<high)
    {
         mid=(low+high)/2;
         mergesort(a,low,mid);
         mergesort(a,mid+1,high);
         merge(a,low,mid,high);
    }
}
int main()
{
    int a[20]={20,45,6,67,54,90};
    int low=0;
    int high=5;
    mergesort(a,low,high);
    for(int i=low;i<=high;i++)
     {
         printf("%d\n",a[i]);
     }
}
