#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;

void insert(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void delqueue()
{
    struct node *temp;
    temp=front;
    if(front==0)
    {
        printf("\nCircular Queue is empty\n");
    }
    else if(front==rear)
    {
        front=rear=0;
        printf("\n%d is deleted from Circular queue\n",temp->data);
        free(temp);
    }
    else
    {
        front=front->next;
        rear->next=front;
        printf("\n%d is deleted from Circular queue\n",temp->data);
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp=front;
    if(front==0)
    {
        printf("\nCircular Queue is empty\n");
    }
    else
    {
        printf("\nElements of the circular queue are: ");
        while(temp->next!=front)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
void main()
{
    int choice=0,data;
    while(choice!=4)
    {
    printf("\nEnter 1 to insert an element in Circular Queue");
    printf("\nEnter 2 to delete an element from Circular Queue");
    printf("\nEnter 3 to display the Circular Queue");
    printf("\nEnter 4 to exit the program\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:{printf("\nEnter the element to be inserted in Queue: ");
        scanf("%d",&data);
        insert(data);
        }
        break;
        case 2:delqueue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
        default:printf("\nPlease enter a valid choice\n");
    }
    }
}
