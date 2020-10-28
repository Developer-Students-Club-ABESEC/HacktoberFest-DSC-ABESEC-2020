#include<stdio.h>
void create(int set[],int n);
void print(int set[],int n); 
void Intersection(int setA[],int setB[],int m,int n);
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
    Intersection(setA,setB,m,n);
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
void Intersection(int setA[],int setB[],int m,int n)
{
    int s = (m > n ? m : n);
    int setC[s];
   int i = 0, j = 0,c=0,p=0; 
   for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(setA[i]==setB[j])
            {   
                c=1;
            }
        }
        if(c==1)
        {
            setC[p]=setA[i];
            p++;
        }
    }
    printf("\n Set C \n");
    print(setC,p);
}
