#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head=NULL,*ptr=NULL;

// function to find out middle elemen
struct node* middle(struct node* ptr,struct node *last)
{
    if (ptr == NULL)
        return NULL;

    struct node* slow = ptr;
    struct node* fast = ptr ->link;

    while (fast != last)
    {
        fast = fast ->link;
        if (fast != last)
        {
            slow = slow ->link;
            fast = fast ->link;
        }
    }

    return slow;
}
main()
{
    printf("enter no of elements you want to insert\n");
    int n,i,e,m;
    scanf("%d",&n);
    int a[n];
    printf("enter elements of list\n");
    for(i=0;i<n;i++)
    {
        struct node *t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&m);
        t->data=m;
        t->link=NULL;
        if(head==NULL)
            {
                head=t;
                ptr=head;
            }
        else
            ptr->link=t;
            ptr=t;
    }


    printf("Enter element to be searched\n");
    scanf("%d",&e);
    ptr=head;
    struct node *last=NULL;
    //binary search
    while (last == NULL || last != ptr)
    {
        // Find middle
        struct node* mid = middle(ptr,last);

        // If middle is empty
        if (mid == NULL)
            return NULL;

        // If value is present at middle
        if (mid -> data == e){
            printf("found");
            exit(1);
            }

        // If value is more than mid
        else if (mid -> data <e)
            ptr = mid ->link;

        // If the value is less than mid.
        else
            last = mid;

    }
    printf("not found");
}
