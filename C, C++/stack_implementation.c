
#include<stdio.h>
#include<stdlib.h>
struct node
{     int data;     struct node* link;
};
struct node *top=NULL;

void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
    printf("push element is %d\n",x);
}

void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("empty\n");
    }
    else
    {
        printf("display\n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("empty\n");
    }
    else
    {
        printf("top element is %d \n",top->data);
    }
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("underflow \n");
    }
    else
    {
        printf("pop items is %d \n",top->data);         top=top->link;         free(temp);
    }
}
int main()
{
    int a,d;

    while(1)
    {
        printf("enter\n1 to push\n2 to pop\n3 to display\n4 to view top element\n5 to exit\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:printf("enter element to insert\t\t");
            scanf("%d",&d);
            push(d);
            break;
            case 2:printf("enter element to pop\t\t");
            scanf("%d",&d);
            pop(d);
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            case 5:exit(1);
        }
    }
}
