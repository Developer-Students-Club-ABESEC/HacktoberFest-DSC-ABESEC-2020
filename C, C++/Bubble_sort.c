// Program for bubble sort of array
#include<stdio.h>
void BubbleSort(int a[20],int N)
{
     int i,j,k;
     for(i=0;i<N-1;i++)
     {
         for(j=0;j<N-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 k=a[j];
                 a[j]=a[j+1];
                 a[j+1]=k;
             }
         }
     }
     for(i=0;i<N;i++)
     {
            printf("%d\t",a[i]);
     }

}
void main()
{
    int a[20]={23,65,43,15,5,57};
    int N=6;
    BubbleSort(a,6);
}
