#include<stdio.h>
void insertion_sort(int a[],int n)
{ int i,key,d,j;
for(i=1;i<n;i++)
{ key=a[i];
d=i-1;
	while(d>=0 && a[d]>key)
	 { a[d+1]=a[d];
	    d--;	
	 }
	  a[d+1]=key;
}
 printf("Sorted Array: ");
  for(j=0;j<n;j++)
  printf("%d ",a[j]);		
}

int main()
{ int a[1000],n,i;
 printf("Enter number of elements in array: ");
 scanf("%d",&n);
 printf("\n Enter elements: ");
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
insertion_sort(a,n);
}
