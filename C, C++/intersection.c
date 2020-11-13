#include <stdio.h>
int main()
{
int a[100], b[100], flag = 0, n,m, i, j;
printf("Enter size of set A : ");
scanf("%d",&n);
printf("\nEnter elements of set A : ");

for(i = 0;i < n;i++)
scanf("%d",&a[i]);

printf("\nEnter size of set B : ");
scanf("%d",&m);
printf("\nEnter elements of set B : ");

for(i = 0;i < m;i++)
scanf("%d",&b[i]);

printf("Intersection is: ");

for(i = 0;i < n;i++)
{
for(j = 0;j < m;j++)
{
if(b[i] == a[j])
{
flag = 1;
}
}
if(flag == 1)
{
printf("%d ", b[i]);
}
flag = 0;
}
return 0;
}
