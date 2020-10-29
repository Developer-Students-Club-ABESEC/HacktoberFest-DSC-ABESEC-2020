#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter String:");
    gets(str);
    strrev(str);
    puts(str);
}
