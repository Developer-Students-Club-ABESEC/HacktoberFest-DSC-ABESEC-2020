#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20
#define TRUE 1
#define FALSE 0
struct stack
{
    char item[SIZE];
    int TOP;
};
struct stack s;
/*************/
void Initialize()
{
    s.TOP =-1;
}
/*************/
char Push(char ch)
{
    s.TOP++;
    s.item[s.TOP] = ch;
}
/*************/
char Pop(void)
{
    char x;
    x = s.item[s.TOP];
    s.TOP--;
    return x;
}
/*************/
char StackTop(void)
{
    char x;
    x = s.item[s.TOP];
    return x;
}
/*************/
int Empty(void)
{
    if(s.TOP==-1)
        return TRUE;
    else
        return FALSE;
}
/*************/
int Prec(char op1, char op2)
{
    if(op1=='(' || op2=='(')
        return FALSE;
    else
    {
        if(op2==')')
            return TRUE;
        else
        {
            if(op1=='^'||op1=='*'||op1=='/'||op1=='%')
            {
                if(op2=='^')
                    return FALSE;
                else
                    return TRUE;
            }
            else if(op1=='+'||op1=='-')
            {
                if(op2=='+'||op2=='-')
                    return TRUE;
                else
                    return FALSE;
            }
        }
    }

}
/**************/
void InfixToPostfix(char exp[])
{
    int i=0;
    char ch, x;
    Initialize();
    while(exp[i]!='\0')
    {
        ch = exp[i];
        if(ch>='a'&&ch<='z'|| ch>='A' && ch<='Z'|| ch>='0' && ch<='9')
            printf("%c", ch);
        else
        {
            while(!Empty()&&Prec(StackTop(),ch))
            {
                x = Pop();
                printf("%c", x);
            }
            if(ch==')')
                Pop();
            else
                Push(ch);
        }
        i++;
    }
    while(!Empty())
    {
        x = Pop();
        printf("%c",x);
    }

}
/*****************/
void main()
{
    char exp[SIZE];
    printf("Infix Expression = ");
    scanf("%s", &exp);
    printf("Postfix Expression = ");
    InfixToPostfix(exp);
}
