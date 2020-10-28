#include<stdio.h>
void merge(int a[],int b[],int n,int m)
{
    int i=0,j=0,k=0,c[n+m],g;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i=i+1;
            k=k+1;
        }
        else
        {
            c[k]=b[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        k=k+1;
        i=i+1;
    }
    while(j<m)
    {
        c[k]=b[j];
        k=k+1;
        j=j+1;
    }
    for(g=0;g<n+m;g++)
    {
       printf("%d ",c[g]);
    }

}
void main()
{
    int a[]={10,20,30,40,50},b[]={12,23,34,45,56,67,78},n,m,i,j;
    n=sizeof(a)/sizeof(a[0]);
    m=sizeof(b)/sizeof(b[0]);

    merge(a,b,n,m);
}
