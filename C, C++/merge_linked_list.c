#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
void Create1();
void print();
void merge();
typedef struct node
{
	int data;
	struct node *next;
}node1;

node1 *Head1 = NULL;
node1 *Tail1 = NULL;
node1 *Head2 = NULL;
node1 *Tail2 = NULL;

void Create(node1 **h,node1 **t)
{   node1 *temp3= *t;
	node1 *temp;
	char ch;
do
{ temp = (node1 *) malloc(sizeof(node1));
    printf("Enter Node Data ");
	scanf("%d", &temp->data);
	if(*h == NULL)
	{
		*h = temp;
		temp3 = temp;
		temp3->next = NULL;
    }
	else
	{
		temp3->next = temp;
		temp3=temp;
		temp3->next=NULL;
	}
	printf("Enter 'y' or 'n' for next node: ");
    scanf(" %c", &ch);

}while(ch =='y');
}
void print(node1 **a)
 {
 	node1 *ptr;
 	for(ptr=*a; ptr!=NULL; ptr = ptr->next)
 	{
 		printf("%d\t", ptr -> data );
 	}
 }
void merge(node1 **h1,node1 **h2)
{
    node1*ptr=NULL;
    ptr= *h1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next= *h2;
    printf("The Merged list is :");
    }
int main()
{	printf("Create first Linked list\n");
Create(&Head1,&Tail1);
	     printf("LinkList is: \t ");
	     print(&Head1);
         printf("\n");
         printf("Create second linked list.\n");
         Create(&Head2,&Tail2);
         printf("LinkList is: \t ");
	     print(&Head2);
	     printf("\n");
         merge(&Head1,&Head2);
         print(&Head1);
return 0;
}
