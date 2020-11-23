#include<stdio.h>
#include<math.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    int TOP;
    int Item[SIZE];
};
struct stack operandS;
int Intialize(void)
{
   operandS.TOP=-1;
}
int StackTop()
 {
     int x;
     x=operandS.Item[operandS.TOP];
     return x;


 }
int Empty()
{
    if(operandS.TOP==-1)
        return TRUE;
    else
        return FALSE;
}
void Push(char x)
{
    if(operandS.TOP==SIZE-1)
        printf("Stack Overflow");
    else
        operandS.TOP=operandS.TOP+1;
        operandS.Item[operandS.TOP]=x;
}
char Pop()
{
    char x;
    if(Empty())
        printf("Stack Underflow");
    else
        x=operandS.Item[operandS.TOP];
        operandS.TOP--;
        return x;
}
/*int Postfix(char s[100])
{
    int i=0,a;char operand1,operand2;int value;
  Intialize();
  while(s[i]!='\0')
  {
      if(s[i]>=48 && s[i]<=57)
      {
        Push(s[i]-48);

      }
      else{
        operand1=Pop();
        operand2=Pop();
       switch(s[i])
        {
            case'+':
                {
                value=operand1+operand2;
                //return value;
                break;}
            case'-':
                {
                    value=operand2-operand1;
                    //return value;
                    break;
                }
            case '*':
                {
                    value=(operand2*operand1);
                    //return value;
                    break;
                }
            case '/':
                {
                    value=operand2/operand1;
                    //return value;
                    break;
                }
            case '%':
                {
                    value=operand2%operand1;
                    //return value;
                    break;
                }
            case '^':
                {
                    value=pow(operand2,operand1);
                    //return value;
                    break;
                }

            }Push(value);
        }
      i++;}
      a=Pop();
      return a;
  }*/
int Precd(char x,char y)

{
    if(x=='^'||x=='*'||x=='/'||x=='%')
    {
        if(y=='^')
            return FALSE;
        else
            return TRUE;
    }
    else
    {
        if(x=='+'||x=='-')
        {
            if(y=='+'||y=='-')
                return TRUE;
            else
                return FALSE;
        }
    }

}
void InfixToPostfix(char s[])
{
    int i=0,j=0,a;
    char b[10];
    Intialize();
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z')
        {
         b[j]=s[i];
            j++;
        }
        else{
            while(!Empty() && Precd(StackTop(),s[i]))
                  {
                      a=Pop();
                      b[j]=a;
                      j++;
                  }
                  Push(s[i]);


        }
        i++;

    }
    while(!Empty())
    {
        a=Pop();
        b[j]=a;
        j++;

    }
    for(i=0;i<j;i++)
        printf("%c",b[i]);

    /*while(s[i]!='\0')
   {
     printf("%c",s[i]);
     i++;
   }*/
}
void main()
{
    char str;
    char s[100]="a^b+c";
    InfixToPostfix(s);


}
