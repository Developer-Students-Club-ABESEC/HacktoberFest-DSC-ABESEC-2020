Write a program in C to create two sets and perform the Difference operation on sets.

#define MAX 30
#include<stdio.h>
#include<conio.h>
void create(int set[])
{   
    int n,i,x;
    set[0]=0;
    printf("\n No. of elements in the set:");
    scanf("%d",&n);
    printf("\n enter set elements :");
    for(i=1;i<=n;i++)
        scanf("%d",&set[i]);
    set[0]=n; 
}
void print(int set[])
{ 
    int i;
    printf("\nMembers of the set :-->");
    for(i=1;i<=set[0];i++)
        printf("%d  ",set[i]);
}
int member(int set[],int x)
{
    int i;
    for(i=1;i<=set[0];i++)
        if(x==set[i])
    return(1);
    return(0);
}
void difference(int setA[],int setB[],int setC[])
{
    int i;
    setC[0]=0;
    for(i=1;i<=setA[0];i++)
        if(!member(setB,setA[i]))
            setC[++setC[0]]=setA[i];     
}
int main()
{
    int setA[MAX],setB[MAX],setC[MAX];
    setA[0]=setB[0]=setC[0]=0;
    printf("\nFirst Set");
    create(setA);
    printf("\nSecond Set");
    create(setB);
    printf("\nFirst Set is:\n");
    print(setA);
    printf("\n\nSecond Set is:\n");
    print(setB);
    printf("\n\nThird Set is:\n");
    difference(setA,setB,setC);
    print(setC);
    return 0;
}
