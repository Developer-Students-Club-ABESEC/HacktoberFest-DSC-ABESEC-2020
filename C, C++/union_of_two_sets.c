#include<iostream.h>
int main()
{ int a[100],b[100],c[100],i,n,m,k,j,f; 

  printf("Enter number of elements of first set: ");
  scanf("%d",&n);
  printf("\nEnter elements: ");
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  printf("Enter number of elements of second set:");
  scanf("%d",&m);
  printf("\n Enter elemets of second set: ");
   for(i=0;i<m;i++)
  	scanf("%d",&b[i]);
  	for(i=0;i<n;i++)
  	c[i]=a[i];
  	k=n;i=0; 
  	while(i<m)
  	{ f=0;
	  for(j=0; j<n;j++){
	  	if(c[j]==b[i])
		 { f=1;
		  break;}
}if(f==0){
	  	c[k]=b[i];k++;}
  	i++;} printf("\n A U B = : ");
for(i=0;i<k;i++)
  printf("%d ",c[i]); 
  return 0;	
}
