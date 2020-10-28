#include<iostream.h>
#include<stdlib.h>
int stack[1000],n,top=-1,i,ch;
void push()
{ int x;
if(top>=n-1)
     { printf("Stack is over flow");
     	return ;
	 }
	else{
		printf("Enter the element to enter: ");
		scanf("%d",&x);
		top++;
		stack[top]=x;

	}	
}
void pop()
{ if(top<=-1)
   { printf("Stack is empty ");
     return;
   }
   else{ 
        top--;
   	     
   }
}
void display()
{if(top>=0)
    {printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("%d ",stack[i]);
    }
else
{printf("\n The STACK is empty");
    }
   
}
int main()
{ char c;

printf("Enter the number of elements (max 1000): ");
  scanf("%d",&n);
  printf("1-> push \n2-> pop \n3-> display ");
  do 
{ printf("\n Enter your choice: ");
  scanf("%d",&ch);
switch(ch)
{  case 1 : { push(); break;}
    case 2:{ pop(); break;}
case 3: {	display(); break;}
default: break;
} printf("\n Want to enter more ? ");
 scanf(" %c",&c);
}while(c=='y'||c=='Y');
return 0;
}
