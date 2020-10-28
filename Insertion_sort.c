// Program for insertion sort of an array
#include<stdio.h>
void Insertion(int a[20],int N)
{
    int key,i,j;
    for(i=1;i<N;i++)
    {
         key=a[i];
         j=i-1;
        while(a[j]>key && j>=0)
        { 
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int a[20]={78,23,54,32,50};
    int N=5;
    Insertion(a,N);
}
