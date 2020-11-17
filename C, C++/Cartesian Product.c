Write a C Program to find Cartesian Product of two sets.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],b[20],c[20],i,s1,s2,j,k,n=0;
    printf("Enter how many elements in set A\n");
    scanf("%d",&s1);
    printf("Enter how many elements in set B\n");
    scanf("%d",&s2);
    printf("Enter elements of set A\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of set B\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("cartessian product=");
    printf("{");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            n++;
            printf("(%d,%d)",a[i],b[j]);
            printf(",");
        }
    }
    printf("}");
    printf("\nThe no of cartessian product is %d",n);
}
