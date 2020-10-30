#define MAX 30
#include<stdio.h>
#include<conio.h>
void create(int set[]);
void print(int set[]);
void difference(int set1[],int set2[],int set3[]);
void Union(int set1[], int set2[], int set3[]);
int member(int set[],int x);

int main()
{ int set1[MAX],set2[MAX],set3[MAX],set4[MAX],set5[MAX];
  int x,op;
      set1[0]=set2[0]=set3[0]=0;
        create(set1);
        create(set2);
  printf("\nElements of first Set are: ");
        print(set1);
   printf("\nElements of second Set are: ");
        print(set2);
        difference(set1,set2,set3);
        difference(set2,set1,set4);
    printf("\nElements after subtracting second set from first set: ");
        print(set3);
    printf("\nElements after subtracting first set from second set: ");
        print(set4);
        Union(set3,set4,set5);
        printf("\nSymmetric difference of first and second set is: ");
        print(set5);
        printf("\n");
  return 0;

}
 void create(int set[])
   {   int n,i,x;
       set[0]=0;
       printf("\nEnter number of elements in the set: ");
       scanf("%d",&n);
       printf("\nEnter the set elements: ");
       for(i=1;i<=n;i++)
       scanf("%d",&set[i]);
       set[0]=n;
   }
 void  print(int set[])
  { int i,n;
    n=set[0];
    for(i=1;i<=n;i++)
       printf("%d  ",set[i]);
  }

 int member(int set[],int x)
  { int i,n;
    n=set[0];
    for(i=1;i<=n;i++)
      if(x==set[i])
     return(1);
     return(0);
  }

void difference(int set1[],int set2[],int set3[])
      { int i,n;
    n=set1[0];
    set3[0]=0;
    for(i=1;i<=n;i++)
       if(!member(set2,set1[i]))
         set3[++set3[0]]=set1[i];
      }

void Union(int set1[], int set2[], int set3[])
       {
int i, n;
set3[0] = 0;
n = set1[0];
for (i = 0; i <= n; i++)
set3[i] = set1[i];
n = set2[0];
for (i = 1; i <= n; i++)
if (!member(set3, set2[i]))
set3[++set3[0]] = set2[i];
}
