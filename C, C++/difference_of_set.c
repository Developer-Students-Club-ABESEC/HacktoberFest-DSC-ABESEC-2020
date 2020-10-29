#include<iostream>
#include<stdlib.h>
 int main()
{ int *a,*b,n,m,i,j,*c,f,g=0;
   printf("Sarvjeet Singh \t 1900320120045 \t Computer Science \t Difference of two sets \t Internal Practical\n");
   printf("Enter number of elements of A set: ");
   scanf("%d",&n);
   a=(int*)calloc(n,sizeof(int));
   c=(int*)calloc(n,sizeof(int));
   printf("Enter A set elements: ");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("Enter number of elements of B set: ");
     scanf("%d",&m);
    b=(int*)calloc(m,sizeof(int));
     printf("Enter B set elements: "); 
     for(i=0;i<m;i++)
       scanf("%d",&b[i]);
 	for(i=0;i<n;i++)
 	{ f=0; 
	 for(j=0;j<m;j++)
 	    { if(a[i]==b[j])
 	        { f=1; break;
 	        }
 	    } if(f==0)
 	       { c[g]=a[i];g++;
			}
 } printf("A-B = ");
for(i=0;i<g;i++)printf("%d ",c[i]);
 return 0;
 }
