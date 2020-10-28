#include <stdio.h>   
int arr[15],i,j,choice=0,n,top=-1;  
void push ()  
{  
    int val;      
    if (top == n-1 )   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        arr[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",arr[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}
void main ()  
{  
    printf("Enter the size of stack ");   
    scanf("%d",&n);  
    while(choice != 4)  
    {
        printf("\n1.Insert\n2.Delete\n3.Print\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }  
    }  
}
