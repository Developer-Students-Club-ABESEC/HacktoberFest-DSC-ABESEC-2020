#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};

getnode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;

}
InsBeg(struct node **list,int x)
{
    struct node *temp;
    temp=getnode();
    temp->info=x;
    temp->next=*list;
    *list =temp;

}

Traverse(struct node *list)
{
    struct node *t;
    t=list;
    while(t!=NULL)
    {
        printf("%d\t",t->info);

        t=t->next;
    }


}
count(struct node *list)
{
    int c=0;
    struct node *t;
    t=list;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    return c;
}

void main()
{
    struct node *START;
    START=NULL;
    int x;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    InsBeg(&START,400);
    InsBeg(&START,500);
    Traverse(START);
    x=count(START);
    printf("\nCount of nodes in linked list are %d",x);
}
