#include <stdio.h>
void main()
{
    int i,j,min,n,temp;
    int a[20];
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j <n;j++)
            {
                if(a[j] < a[min])
                    min = j;
            }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
