#include<stdio.h>
#define size 10
#define TRUE 1
#define FALSE 0
struct stack
{
    int top;
    char Item[size];
};
struct stack s;
int Intialize(void)
{
    s.top=-1;
}
 int StackTop()
 {
     int x;
     x=s.Item[S.top];
     return x;


 }
int Empty()
{
    if(s.top==-1)
        return TRUE;
    else
        return FALSE;
}
void Push(int x)
{
    if(s.top==size-1)
        printf("Stack Overerflow");
    else
        s.top=s.top+1;
        s.Item[s.top]=x;
}
int Pop()
{
    int x;
    if(Empty(s))
        printf("Stack Underflow");
    else
        x=s.Item[s.top];
        s.top--;
        return x;
}
 void ParanthesisCheck(char str[10])
 {
      int valid=TRUE;
     Intialize();
     int i=0;
     while(str[i]!='\0')
     {
         if(str[i]=='(')
         {
         Push(str[i]);
         }
         else
         {
             if(str[i]==')')
             {
                 if(!Empty())
                    Pop();
             }
             else{
                valid=FALSE;
             break;
         }
         }
         i++;

     }
         if(valid==FALSE)
            printf("Invalid expression");
         else
         {
             if(Empty())
                printf("Valid expression");
             else
                printf("Invalid expression");
         }

     }



 void main()
 {
    char str[10]="(a+(b*c))";
     ParanthesisCheck(str);

 }


