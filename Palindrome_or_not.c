#include<stdio.h>
int main()
{
    int n,temp,a,res=0;
    printf("Enter Number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        res=res*10+a;
        n=n/10;
    }
    if(temp==res)
    {
        printf("Palendrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}
