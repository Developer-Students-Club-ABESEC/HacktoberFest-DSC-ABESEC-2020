#include<stdio.h>
void rev_str(char a[100])
{
    int i,j,k,l=0,c=0;
    char rev[100];
    for(i=0; a[i] != '\0'; i++)
    {
      l=l+1;
    }
    for(i=0; a[i] != '\0'; i++)
    {
        if (a[i]!= a[l-i-1])
        {
            c=1;
            break;
        }

    }
    if (c==0)
    {
        printf("Pallindrome.\n");
    }
    else
    {
        printf("Not pallindrome.\n");
    }
}
int main()
{
    char x[100] = "Codechef";      /**1**/
    char y[100] = "aabbbbaa";      /**2**/
    char z[100] = "hackerearth";   /**3**/
    rev_str(x);
    rev_str(y);
    rev_str(z);
}

