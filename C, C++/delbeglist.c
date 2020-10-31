#include <stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;

};
struct node *START;
struct node *GetNode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}

 int InsBeg(int x)
		{
			struct node *temp;
			temp=GetNode();
			temp->info=x;
			temp->next=START;
			START=temp;
			}

 int Traverse()
 {
     struct node *t;
     t=START;
     while(t->next!=NULL){
         printf(" \t%d",t->info);
         t=t->next;
     }

 }

 int InsAfter(int y,int x)
 {
     struct node *temp,*p;
     temp=START;
     while(temp!=NULL)
     {
         if(temp->info==y)
             break;
         else
         temp=temp->next;
     }
     p=GetNode();
     p->info=x;
     p->next=temp->next;
     temp->next=p;
 }

       int DelBeg()
       {
           if(START!=NULL){
               int x;
               struct node *temp;
               temp=START;
               START=START->next;
               x=temp->info;
               free(temp);
               return x;}
            else
                printf("deletion not possible");
       }



              void main()
              {
                START=NULL;
				InsBeg(100);
				InsBeg(200);
				InsBeg(300);
				InsBeg(400);
				InsBeg(500);
				InsBeg(600);
				InsBeg(700);

				Traverse();
				printf("\n");
				InsAfter(400,350);
				Traverse();
				printf("\n");
				DelBeg(START);
				Traverse();
              }
