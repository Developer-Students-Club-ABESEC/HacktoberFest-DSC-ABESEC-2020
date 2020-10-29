#include <stdio.h>
void main()
{
    int i, j, n, key;
    int a[20];
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key	= a[i];
        j = i-1;
        while(j>=0&&key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
