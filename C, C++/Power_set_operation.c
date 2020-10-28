Write a program in C to perform Power set operation on set . 


#include<stdio.h>
#include<math.h>
void main()
{
    int m;
    int a[10];
    printf("\nEnter the elements in set A:-");
    scanf("%d",&m);
    printf("\n Enter elements of set A:- ");
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("\nPower of Set A:-%d",pow(2,m));
    printf("\n All Subsets are:-{ {}, ");
    for(int i=0;i<m;i++)
        printf("{%d} ,",a[i]);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(a[i]!=a[j])
            printf("{%d,%d} ,",a[i],a[j]);
        }
    }
    printf("{");
    for(int i=0;i<m;i++)
        printf("%d,",a[i]);
    printf("} }");
}
