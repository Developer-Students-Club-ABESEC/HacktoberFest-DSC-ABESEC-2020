//Program which creates a contact list and allows user to access it.

#include<stdio.h>
struct contactlist
{
    int id;
    long number;
    char name[30];
} cl[50];

int main(){
    printf("\t\tCreate Contact List\n");
    printf("\nEnter ID , Name , phone number of each contact\n");
    printf("\nPlease use this example as format\n\nID\tName\tNumber");
    printf("\n1\tAvi\t9810853495\n2\tRohan\t1942047595\n");
    printf("\nTo stop insertion of contacts give ID = -1\n/******************************************/\n");
    int i,j;
    char ch;
    for(i=0;i<50;i++){
        printf("\nEnter ID:\t");
        scanf("%d",&cl[i].id);
        if(cl[i].id==-1){
            j=i;
            break;
        }
        else{
            printf("Enter Name:\t");
            scanf("%s",&cl[i].name);
            printf("Enter Phone Number:\t");
            scanf("%ld",&cl[i].number);

        }
    }
    printf("\n(Enter \'Y\' or \'y\' for \"YES\" and \'Any other charcter\' for \"NO\")");
    printf("\nDo you want to access your contacts:\t");
    scanf(" %c",&ch);

    if((ch=='Y')||(ch=='y')){
        printf("\nId\tName\tPhone Number\n");
        for(i=0;i<j;i++){  
            printf("%d\t%s\t%ld\n",cl[i].id,cl[i].name,cl[i].number);
        }
    }
    printf("/*********************************/");
    return 0;

}
