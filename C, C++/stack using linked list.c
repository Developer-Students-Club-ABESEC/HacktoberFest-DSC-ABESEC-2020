#include<stdio.h>
#define MAXSIZE 7
#define TRUE 1
#define FALSE 0


struct node {
int info[MAXSIZE];
int top;
};


struct node s;



initialize(){

s.top=-1;
}

isempty(){

if(s.top==-1){
    return TRUE;
}
else{
    return FALSE;
}
}


push(int x){
if(s.top==MAXSIZE){
    printf("overflow");
    return;
}
s.top++;
s.info[s.top]=x;
}
pop(){
if(isempty()){
    printf("underflow");
    return NULL;

}
int x=s.info[s.top];
s.top--;
return x;

}
stacktop(){
int x;
x=s.info[s.top];
return x;
}

void main(){
initialize();
push(1);
push(1);
push(1);
push(1);
push(1);
push(1);
int x=pop();
printf("%d ",x);
 x=pop();
printf("%d ",x);
x=pop();
printf("%d ",x);
 x=pop();
printf("%d ",x);
 x=pop();
printf("%d ",x);
 x=pop();
printf("%d ",x);
 x=pop();
printf("%d ",x);

}
