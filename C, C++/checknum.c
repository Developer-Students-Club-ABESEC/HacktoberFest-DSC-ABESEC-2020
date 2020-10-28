// Program to check wether a number is Prime , Palindrome , Armstrong , Perfect , Magic , Strong number

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a,b,fact,n1=0,n2,count=0,rn=0,sum=0,ch;
    printf("Program to check number \nPress \n");
    printf("1 for Prime number. Eg. - 7,17,37 \n");
    printf("2 for Palindrome number. Eg. - 181,454,666 \n");
    printf("3 for Armstrong number Eg. - 153,370,371 \n");
    printf("4 for Perfect number. Eg. - 6,28 \n");
    printf("5 for Magic number. Eg, - 1729 \n");
    printf("6 for Strong number. Eg. - 145 \n");
    printf("\nChoose Your operation: \t");
    scanf("%d",&ch);
    printf("Enter a number: \t");
    scanf("%d",&n);
    a=n;

    switch (ch)
    {
    case 1:  i=1;
             while(i<=n){
                 if(n%i==0){
                     count += 1;
                 }
                 i++ ;
             }
             (count==2) ? printf("Prime number") : printf("Not Prime number");
            break;

    case 2:  b=0;
             while(a>0){
                 b=(b+(a%10))*10;
                 a=a/10;
             }
             b=b/10;
             (b==n) ? printf("Palindrome Number") : printf("Not Palindrome number");
            break;

    case 3:  while(a>0){
                 a=a/10;
                 count+=1;
             }
             a=n;
             while(a>0){
                 b=a%10;
                 a=a/10;
                 rn=rn+pow(b,count);
             }
             (rn==n) ? printf("Armstrong number") : printf("Not armstrong number");
            break;

    case 4: for(i=1;i<n;i++){
                if(n%i==0)
                {
                sum += i;
                }
            }
            (n==sum) ? printf("perfect number") : printf("Not perfect number");
            break;


    case 5:  while(a>0){
                 n1=n1+(a%10);
                 a=a/10;
             }
             a=n1;
             while(a>0){
                 n2=(n2*10)+(a%10);
                 a=a/10;
             }
             (n==(n1*n2)) ? printf("Magic number") : printf("Not a magic number");
            break;

    case 6:  for(i=1;a>0;i++){
                 b=a%10;
                 a=a/10;
                 fact=1;
                 for(j=1;j<=b;j++){
                     fact = fact*j;
                 }
                 n1=n1 + fact;
             }
             (n1==n) ? printf("strong number") : printf("Not Strong number");
            break;

    default: printf("Default Choice");
             break;

    }        
    return 0;
}
