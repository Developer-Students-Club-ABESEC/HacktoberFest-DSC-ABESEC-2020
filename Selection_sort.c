// Program for selection sort
#include<stdio.h>
void Selection(int a[20],int N)
{
         int i,j,min,temp;
         for(i=0;i<N-1;i++)
         {
             min=i;
             for(j=i+1;j<N;j++)
            { 
               if(a[j]<a[min])
               {
                  min=j;
               }
            }
          temp=a[min];
          a[min]=a[i];
          a[i]=temp;
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
    Selection(a,N);
}
