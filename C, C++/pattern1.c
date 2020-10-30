//pattern 12345654321
//12345 4321..
#include<stdio.h>
main()
{
 int n,i,j,k;
 printf("enter a no.");
 scanf("%d",&n);
 k=n+1;

 for(i=0;i<n;i++,k--)
 {
     for(j=1;j<n;j++)
     {
         if(j<=k)
            printf("%d",j);
         else
            printf(" ");
     }
     for(;j>0;j--)
       {
        if(j<=k)
        printf("%d",j);
        else
            printf(" ");
       }

    printf("\n");
 }

 for(i=0;i<n;i++)
 {
     for(j=1;j<n;j++)
     {
         if(j<=k)
            printf("%d",j);
         else
            printf(" ");
     }
     for(;j>0;j--)
       {
        if(j<=k)
        printf("%d",j);
        else
            printf(" ");
       }
       k++;
       printf("\n");
 }
}


