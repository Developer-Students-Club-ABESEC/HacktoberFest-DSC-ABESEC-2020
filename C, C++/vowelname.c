// Program which counts the vowel in your name

#include<stdio.h>
#include<string.h>
int main(){
    int i,count1=0,count2=0,l1,l2,total;
    char fname[30],sname[30];
    printf("Enter your First Name\t");
    gets(fname);
    printf("Enter your Sir Name\t");
    gets(sname);
    l1=strlen(fname);
    l2=strlen(sname);

    for(i=0;i<l1;i++){
        if((fname[i]=='a')||(fname[i]=='e')||(fname[i]=='i')||(fname[i]=='o')||(fname[i]=='u')||(fname[i]=='A')||(fname[i]=='E')||(fname[i]=='I')||(fname[i]=='O')||(fname[i]=='U')){
            count1 +=1;
        }
    }

    for(i=0;i<l2;i++){
        if((sname[i]=='a')||(sname[i]=='e')||(sname[i]=='i')||(sname[i]=='o')||(sname[i]=='u')||(sname[i]=='A')||(sname[i]=='E')||(sname[i]=='I')||(sname[i]=='O')||(sname[i]=='U')){
            count2 +=1;
        }
    }
    total=count1+count2;
    printf("\nThere are %d vowel in your First Name\n",count1);
    printf("\nThere are %d vowel in your Sir Name\n",count2);
    printf("\nThere are total %d vowels in your full name\n/********************************/",total);
    return 0;
}
