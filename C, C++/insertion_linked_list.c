#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *START;
Getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
InsBeg(int x)
{
    struct node *temp;
    temp=Getnode();
    temp->info=x;
    temp->next=START;
    START=temp;
}
InsEnd(int x)
{
    struct node *temp ,*p;
    temp=START;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    p=Getnode();
    p->info=x;
    p->next=NULL;
    temp->next =p;
}
Traverse()
{
    struct node *t;
    t=START;
    while(t!=NULL)
    {
        printf("%d\t",t->info);
        t=t->next;
    }
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
    Traverse();
    printf("\n");
    InsEnd(900);
    InsEnd(700);
    InsEnd(800);
    Traverse();
    }

