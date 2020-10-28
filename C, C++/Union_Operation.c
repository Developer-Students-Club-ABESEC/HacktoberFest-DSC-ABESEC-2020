//Write a program in C to create two sets and perform the Union operation on sets .

#include<stdio.h>
void create(int set[],int n);
void print(int set[],int n); 
void Union(int setA[],int setB[],int m,int n);
void main()
{
    int m,n;
    printf("Enter the size of set A\t");
    scanf("%d",&m);
    printf("Enter the size of set B\t");
    scanf("%d",&n);
    
    int setA[m],setB[n],setC[m+n];
    create(setA,m);
    create(setB,n);
    printf("\nSet A\n");
    print(setA,m);
    printf("\n\nSet B\n");
    print(setB,n);
    Union(setA,setB,m,n);
}
void create(int set[],int n)
{   int i,x;
    printf("\n Enter set elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&set[i]);
}
void  print(int set[],int n)
{
    int i;
    printf("\nMembers of the set :-\t");
    for(i=0;i<n;i++)
       printf("%d  ",set[i]);
}
void Union(int setA[],int setB[],int m,int n)
{
    int setC[m+n];
   int i = 0, j = 0,c=0,p=0; 
   for(i=0;i<m;i++)
   {
        setC[i]=setA[i];
        p++;
   }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(setB[i]==setC[j])
            {   
                c=1;
            }
        }
        if(c==0)
        {
            p++;
            setC[m++]=setB[i];
        }
    }
    printf("\n Set C \n");
    print(setC,p);
}

