#include<stdio.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    int TOP;
    int Item[SIZE];
};
struct stack S;
int Intialize(void)
{
    S.TOP=-1;
}
int Empty()
{
    if(S.TOP==-1)
        return TRUE;
    else
        return FALSE;
}
void Push(int x)
{
    if(S.TOP==SIZE-1)
        printf("Stack Overerflow");
    else
        S.TOP=S.TOP+1;
        S.Item[S.TOP]=x;
}
int Pop()
{
    int x;
    if(Empty(S))
        printf("Stack Underflow");
    else
        x=S.Item[S.TOP];
        S.TOP--;
        return x;
}
 int DecimalToBinary(int x)
{
    int r;
    Intialize();
    while(x!=0)
    {
        r=x%2;
        Push(r);
        x=x/2;
    }
    while(!Empty(S))
    {
        x=Pop();
        printf("%d",x);
}
    }

void main()
{
    int x;
    DecimalToBinary(19);

}
