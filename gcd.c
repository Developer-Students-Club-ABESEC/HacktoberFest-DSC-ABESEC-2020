#include<stdio.h>
int gcd(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    if (a>b)
    {
        gcd(a-b,b);
    }
}
void main()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c = gcd(a,b);
    printf("ans=%d",c);
}
