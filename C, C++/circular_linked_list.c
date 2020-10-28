#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	struct node*prev;
	struct node*next;
	int info;
};
struct node*first,*last;
int main()
{ char c;
int ch;
 void create();
    void trav();
    void rtrav();
    void insert1();
    void insert3();
    void insert2();
    void delete1();
    void delete2();
    void delete3();
  
    printf(" 1-> Create list \n 2-> Insert at start \n 3-> Insert at random \n 4-> Insert at end \n 5-> Delete at start \n 6-> Delete random\n");
    printf(" 7-> Delete from last \n 8-> Reverse Traverse\n");
    do{ ch=0;
 	printf("\n \n Insert your choice: ");
 	scanf("%d",&ch);
 	switch(ch)
 	{ case 1: {create(); trav();break;}
	case 2: { insert1(); trav(); break;}
	case 3: { insert3(); trav(); break;}
	case 4: { insert2(); trav(); break;}
     case 5: { delete1(); trav(); break;}
	case 6: { delete3(); trav(); break;}
	case 7: { delete2(); trav();break;}
     case 8: {	rtrav(); break;  }
	
	default : { printf("No match");}
	}
	printf("\n Want to do something more ");
	scanf(" %c",&c);
	}while(c =='y');

	return 0;
}
void create()
{ struct node*ptr,*cpt;
 char ch;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("Enter first node ");
  scanf("%d",&ptr->info);
  first=ptr;
  ptr->prev=NULL;

  do
  { cpt = (struct node*)malloc(sizeof(struct node));
     printf("Enter next node ");
     scanf("%d",&cpt->info);
     cpt->prev=ptr;
     ptr->next=cpt;
     ptr=cpt;
      printf("Want to enter more (y for yes) ?");
     scanf(" %c",&ch);
  	
  }while(ch=='y');
    last=ptr;
    ptr->next=first;	
    first->prev=ptr;
}

void trav()
{ struct node*ptr;
  ptr = (struct node*)malloc(sizeof(struct node));
  ptr= first;
  do
  {
  	printf("%d ",ptr->info);
  	ptr=ptr->next;
  }while(ptr!=first);
  
  
	
}

void rtrav()
{  struct node*ptr,*cpt;

   ptr=last;
   do
   { 
     printf("%d ",ptr->info);
   	  ptr=ptr->prev;
   	  
   	  
   	
   }while(ptr!=last);
   	
	
}
	
void insert1()
{ struct node*ptr;
ptr = (struct node*)malloc(sizeof(struct node));
printf("Enter at first ");
scanf("%d",&ptr->info);
ptr->next = first;
ptr->prev=last;
first=ptr;
last->next=ptr;	
	
	
}
void insert2()
{ struct node*ptr;
ptr = (struct node*)malloc(sizeof(struct node));
printf("Enter at last ");
scanf("%d",&ptr->info);
last->next=ptr;
ptr->prev=last;
last=ptr;
first->prev=ptr;
ptr->next=first;	
}

void insert3()
{ int data;
  struct node*ptr,*cpt;
ptr = (struct node*)malloc(sizeof(struct node));
cpt = (struct node*)malloc(sizeof(struct node));

printf("Enter node after you wish to add ");
scanf("%d",&data);
printf("Enter your node ");
scanf("%d",&ptr->info);
cpt=first;
while(cpt->info!=data)
{ cpt=cpt->next;

}
ptr->next=cpt->next; 
 cpt->next=ptr;
 ptr->prev=cpt;	
	
}

void delete1()
 { struct node*ptr;

printf("Deleting from strat \n");
 ptr = first->next;
 last->next=ptr;
 ptr->prev=last;
  first=ptr;
	
}
void delete2()
{ struct node*ptr;

printf("Deleting from end \n");
ptr=last->prev;
ptr->next=first;
first->prev=ptr;	
last=first->prev;
}
void delete3()
{ int data;
struct node*ptr,*cpt,*temp;

printf("Enter node you want to delete: ");
scanf("%d",&data);

ptr=first;
printf("Deleting ");
while(ptr->info!=data)
{ cpt=ptr;
  ptr=ptr->next;
}
temp=ptr->next;
cpt->next = temp;
temp->prev = cpt;	
free(ptr);
}










