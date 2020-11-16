#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void enQueue(int);
void deQueue();
void display();
int q[MAX], f = -1, r = -1;
void main()
{
int val, c;
printf("\n Apoorva Kumar \nIT \n");
while(1){
printf("\n~~~~~ Queue Functions~~~~~\n");
printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
printf("\nEnter your choice: ");
scanf("%d",&c);
switch(c){
case 1: printf("Enter the element to insert: ");
scanf("%d",&val);
enQueue(val);
break;
case 2: deQueue();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\n!!!!!! INVALID ATTEMPT !!!!!!!!");
}
}
}
void enQueue(int val){
if(r == MAX-1)
printf("\nXXXXXX Queue is Full XXXXXXXX");
else{
if(f == -1)
f = 0;
r++;
q[r] = val;
printf("\nXXXXX Element Inserted XXXXX");
}
}
void deQueue(){
if(f == r)
printf("\nXXXXX Queue is Empty XXXXX");
else{
printf("\nDeleted Element is : %d", q[f]);
f++;
if(f == r)
f = r = -1;
}
}
void display(){
if(r == -1)
printf("\nXXXXX Queue is Empty XXXXX");
else{
int i;
printf("\nQueue elements are:\n");
for(i=f; i<=r; i++)
printf("%d\t",q[i]);
}
}
