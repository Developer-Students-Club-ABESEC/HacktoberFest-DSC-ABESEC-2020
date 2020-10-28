/**********Program of Linear Search**********/
/*********Author : Abhishek Kumar ***********/
/********************************************/
#include<stdio.h>
int list(int a[10], int n,int key)
{
    int i =0;
    int c =0;
    for (i=0;i<=n-1;i++)
    {
        if (a[i]==key)
        {
            printf("Element found at index %d.\n",i);
            c=1;
            break;
        }
    }
    if (c==0)
    {
     printf("Element not found.\n");
    }
    return 0;
}
/*********************************************/
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int n = 10;
    list(a,n,20); /**1**/
    list(a,n,35); /**2**/
    list(a,n,60); /**3**/
}
/**********************************************/
/**********************************************
algorithm:
ALGORITHM LinearSearch( a[] ,n, key)
BEGIN: FOR i=0 TO n-1 DO
         IF a[i]==key THEN
         RETURN i
       RETURN -1
END;
***********************************************/
/**********************************************
Output:
1: Element found at index 1.
2: Element not found.
3: Element found at index 5.
***********************************************/
