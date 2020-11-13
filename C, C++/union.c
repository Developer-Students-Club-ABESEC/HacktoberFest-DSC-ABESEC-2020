#include<stdio.h>
int main()
{
int a[10],b[10],m,n,i,j;
int c[20],k=0,flag=0;
printf("enter the number of elements of SET 1\n");
scanf("%d",&m);
printf("enter the elements of set 1\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the number of elements in SET 2:\n");
scanf("%d",&n);
printf("Enter the elements of set 2:\n");
for(i=0;i<n;i++)
{scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
c[k]=a[i];
k++;
}
for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<m;j++)
{
if(b[i]==c[j])
{
flag=1;
break;
}
}
if(flag==0)
{
c[k]=b[i];
k++;
}
}
printf("\nElement of set after union\n");for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
}
