#include <stdio.h>
int largest(int a[]);
void radix__sort2(int a[]);
void main()
{
    int i;
    int a[10]={90,23,101,45,65,23,67,89,34,23};
    printf("\n The sorted array is: \n");
    radix__sort2(a);
    for(i=0;i<10;i++)
        printf(" %d\t", a[i]);
}

int largest(int a[])
{
    int larger=a[0], i;
    for(i=1;i<10;i++)
    {
        if(a[i]>larger)
        larger = a[i];
    }
    return larger;
}
void radix__sort2(int a[])
{
    int table[10][10], table_count[10];
    int i, j, k, remainder, NOP=0, divisor=1, larger, pass;
    larger = largest(a);
    while(larger>0)
    {
        NOP++;
        larger/=10;
    }
    for(pass=0;pass<NOP;pass++)
    {
        for(i=0;i<10;i++)
        table_count[i]=0;
        for(i=0;i<10;i++)
        {

            remainder = (a[i]/divisor)%10;
            table[remainder][table_count[remainder]] = a[i];
            table_count[remainder] += 1;
        }

        i=0;
        for(k=0;k<10;k++)
        {
            for(j=0;j<table_count[k];j++)
            {
                a[i] = table[k][j];
                i++;
            }
        }
        divisor *= 10;

}
}
