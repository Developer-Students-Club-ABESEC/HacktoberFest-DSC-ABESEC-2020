include<stdio.h>
#include<Math.h>
void QuickSort(int [],int [],int [],int ,int);
int Partition(int [],int,int);
void main()
{
    int a[5]={3,6,9,5,0};
    int b[5]={1,0,4,2,1};
    int c[5];int low=0;int high=4;int m;
    for(m=0;m<=4;m++)
        c[m]=sqrt((a[m]*a[m])+(b[m]*b[m]));
    QuickSort(a,b,c,0,5);
    for(m=0;m<=4;m++)
            printf("%d+i%d ",a[m],b[m]);


}
void QuickSort(int a[],int b[],int c[],int low,int high)
{
    int k;
    if(low<high)
    {
        k=Partition(a,low,high);
        QuickSort(a,b,c,low,k-1);
        QuickSort(a,b,c,k+1,high);




    }
}
int Partition(int a[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=a[low];int t,t1;
    do
    {
        do
        {
           i++;
        }while(a[i]<pivot);
        do
        {
            j--;

        }while(a[j]>pivot);
        if(i<j)
        {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
        }
    }while(i<j);

    t1=a[low];
    a[low]=a[j];
    a[j]=t1;
    return j;
}
