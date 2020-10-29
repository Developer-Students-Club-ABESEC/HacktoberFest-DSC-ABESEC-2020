#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{ int info;
  struct node*link;
	
};
struct node*first;
int main()
{ char c;
int ch;
 void create();
    void trav();
    void insertbeg();
    void insertmid();
    void insertend();
    void deletebeg();
    void deletemid();
    void deleteend();
    void search();
    void sort();
    printf(" 1-> create list \n 2-> insert at start \n 3-> insert random \n 4-> insert at end \n 5-> delete at start \n 6-> delete random\n");
    printf(" 7-> delete end \n 8-> search \n 9-> sort");
    do{ ch=0;
 	printf("\n \n Insert your choice: ");
 	scanf("%d",&ch);
 	switch(ch)
 	{ case 1: {create(); trav();break;}
	case 2: { insertbeg(); trav(); break;}
	case 3: { insertmid(); trav(); break;}
	case 4: { insertend(); trav(); break;}
     case 5: { deletebeg(); trav(); break;}
	case 6: { deletemid(); trav(); break;}
	case 7: { deleteend(); trav();break;}
	case 8: { search(); break;}
	case 9: { sort(); trav(); break;}
	
	default : { printf("No match");}
	}
	printf("\n Want to do something more (y for yes) ?");
	scanf(" %c",&c);
	}while(c =='y');

	return 0;
}
void create()
{   
  
	struct node *ptr,*cpt;
	char ch;
	ptr = (struct node*)malloc(sizeof(struct node));
	
	printf("Enter first node ");
	scanf("%d",&ptr->info);
	first= ptr;
	do 
	{ cpt = (struct node*)malloc(sizeof(struct node));
	 printf("Enter next node ");
	 
	scanf("%d",&cpt->info);
	ptr->link=cpt;
	ptr= ptr->link;
	
	
	printf("Enter more ");
	scanf(" %c",&ch);
	
	}while(ch=='y'|| ch=='Y');
	ptr->link= NULL;
}

void trav()
{struct node *ptr;

 ptr = first;
 while(ptr!=NULL)
 {
 	printf("%d ",ptr->info);
 	ptr=ptr->link;
 }
 printf("\n");	
}

void insertbeg()
{
	struct node*ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter your node at begining: ");
	scanf("%d",&ptr->info);
	ptr->link= first;
	first=ptr;
}
void insertend()
{ struct node*ptr,*cpt;
  ptr=(struct node*)malloc(sizeof(struct node));
  cpt=(struct node*)malloc(sizeof(struct node));
  printf("Enter at End ");
   scanf("%d",&cpt->info);
   ptr = first;
   while(ptr->link!=NULL)
   { ptr=ptr->link;
   	
   	
   }
   
   ptr->link=cpt;
   cpt->link=NULL;
	
}

void insertmid()
{ int data,nod;
 struct node*ptr,*cpt;
 ptr=(struct node*)malloc(sizeof(struct node));
  cpt=(struct node*)malloc(sizeof(struct node));
printf("Enter node after which you want to enter ");
  scanf("%d",&data);
  printf("Enter your node ");
  scanf("%d",&nod);
  
  ptr->info=nod;
  cpt=first;
  while(cpt->info!=data)
  { cpt=cpt->link;
  	
  }
  ptr->link=cpt->link;
  cpt->link=ptr;
  	
}

void deletebeg()
{ printf("\n Deleting from begining \n"); 
struct node*ptr;
 ptr=(struct node*)malloc(sizeof(struct node));
  ptr=first;
  first=first->link;
  free(ptr);
	
	
}

void deleteend()
{ printf("\n Deleting from end \n");
struct node *ptr,*cpt;
ptr=(struct node*)malloc(sizeof(struct node));
  cpt=(struct node*)malloc(sizeof(struct node));
  ptr=first;
  while(ptr->link!=NULL)
  { cpt=ptr;
     ptr=ptr->link;
  	
  }
  cpt->link=NULL;
  free(ptr);
	
}

void deletemid()
{ struct node*ptr,*cpt;
int data;
  ptr=(struct node*)malloc(sizeof(struct node));
  cpt=(struct node*)malloc(sizeof(struct node));
	printf("Enter node you want to delete ");
	scanf("%d",&data);
	printf("\n Deleting node \n");
	cpt=first;
  while(cpt->info!=data)
  { ptr=cpt;
     cpt=cpt->link;
     if(cpt==NULL)
     {
     	return;
     	
	 }
}
  	ptr->link=cpt->link;
  	free(cpt);
	
	
	
}

void search()
{ struct node*cpt;
int data,c=0;
  cpt=(struct node*)malloc(sizeof(struct node));
	printf("Enter node you want to search ");
  scanf("%d",&data);
	cpt=first;
   	while(cpt!=NULL)
   	{ 
	   if(cpt->info==data)
   		 {
			c=1;
			break ;
		}
   	else 
		{ cpt=cpt->link;
		   
   	}
   	
}
if(c!=0)
 printf("Element found ");
else 
	printf("Element not found");   
}

void sort()
{struct node*ptr,*cpt,*ptr2; 
int data;
  ptr=(struct node*)malloc(sizeof(struct node));

	 ptr = first;
	 while(ptr!=NULL)
	{ cpt=(struct node*)malloc(sizeof(struct node));
	  ptr2=(struct node*)malloc(sizeof(struct node)); 
		cpt=ptr;
		ptr2=ptr->link;
		while(ptr2!=NULL)
		{ if (cpt->info > ptr2->info) 
                cpt= ptr2; 
  
            ptr2= ptr2->link; 
			
		}
		
		data = ptr->info; 
        ptr->info = cpt->info; 
        cpt->info = data; 
        ptr = ptr->link; 
	}
	
}
