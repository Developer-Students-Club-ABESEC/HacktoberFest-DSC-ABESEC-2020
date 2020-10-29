#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{ int info;
  struct node*link;
	
};
struct node*first=NULL;
void push()
{ struct node*ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter your node: ");
	scanf("%d",&ptr->info);
	ptr->link= first;
	first=ptr;
	
}
void pop()
{ printf("\n Deleting..... \n"); 
struct node*ptr;
 ptr=(struct node*)malloc(sizeof(struct node));
  ptr=first;
  if(ptr!=NULL)
  {
  
  first=first->link;
  free(ptr);}
  else { printf("Stack is empty");
  }
	
}
void display()
{ if(first==NULL)
  { printf("Stack is Empty");
  	
  }
else{ struct node*ptr;
      ptr=first;
      while(ptr!=NULL)
      { printf("%d ",ptr->info);
      	ptr=ptr->link;
	  }
}
}
int main()
{ char c; int ch;
  printf("1-> Push \n2-> Pop \n3-> Display ");
  do 
{ printf("\n Enter your choice: ");
  scanf("%d",&ch);
switch(ch)
{  case 1 : { push(); break;}
    case 2:{ pop(); break;}
case 3: {	display(); break;}
default: break;
} printf("\n Want to enter more (y for yes)? ");
 scanf(" %c",&c);
}while(c=='y'||c=='Y');
return 0;
}
