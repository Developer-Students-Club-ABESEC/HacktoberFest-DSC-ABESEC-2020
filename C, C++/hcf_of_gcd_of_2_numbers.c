#include<stdio.h>
int hcf(int,int)
main()
{
int a,b;
printf("Enter a number");
scanf("%d%d",&a,&b);
z=hcf(a,b);
printf("%d",z);


}
int hcf(int a , int b)
{
    if(a%b==0)
    {
        return(b);
    }
    else
    {
        return(hcf b ,a%b);
    }
}
