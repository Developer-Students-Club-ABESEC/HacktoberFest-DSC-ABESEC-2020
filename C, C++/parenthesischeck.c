#include<stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0
struct Stack
{
    char item [SIZE];
    int top;
};
struct Stack S;

void intialise(void)
{
    S.top= -1;
}

void push(int x)
{
    S.top++;
    S.item[S.top]=x;
}

void pop(void)
{
    char x;
    x=S.item[S.top];
    S.top--;
}

int empty(void)
{
    if(S.top==-1)
        return TRUE;
    else
        return FALSE;
}

char Stacktop()
{
    char x;
    x=S.item[S.top];
    return x;
}
void parenthesized(char exp[])
{
    int i=0;
    intialise();
     int FLAG=1;
    while(exp[i]!='\0')
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            {
              push(exp[i]);
            }
        else if(exp[i]==']'||exp[i]=='}'||exp[i]==')')
            {
                if(!empty())
                   {
                      if(exp[i]==']'&&Stacktop()=='['||exp[i]=='}'&&Stacktop()=='{'|| exp[i]==')'&&Stacktop()=='(')
                           pop();
                     else
                     {
                         FLAG=0;
                         break;
                     }
                   }
                else
                    {
                        FLAG=0;
                        break;
                    }
            }
                            i++;
   }
    if(empty())
    {
        if(FLAG==0)
            printf(" NOT BALANCED\n");
        else
            printf(" IS BALANCED\n");
    }
    else
        printf(" NOT BALANCED\n");
}

int main()
{
    printf("{([ ])}");
    parenthesized("{([ ])}");
    printf("{([ ][ ][ ])}");
    parenthesized("{([ ][ ][ ])}");
    printf("(){}[]]]");
    parenthesized("(){}[]]]");
}
