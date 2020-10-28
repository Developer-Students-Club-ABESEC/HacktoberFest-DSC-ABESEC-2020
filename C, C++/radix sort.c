#include<stdio.h>
void counting(int a[], int n, int pos){
    int c[10];
    int b[n];
    for(int i=0;i<10;i++){
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        c[(a[i]/pos)%10]= c[(a[i]/pos)%10]+1;
    }


    for(int i=1;i<10;i++){
        c[i]=c[i]+c[i-1];
    }


    for(int i=n-1;i>=0;i--){
        b[c[(a[i]/pos)%10]-1]=a[i];
        c[(a[i]/pos)%10]=c[(a[i]/pos)%10]-1;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }


}
void redixsort(int a[],int n){
int max=a[0];
for(int i=1;i<n;i++){
    if(max<a[i]){
        max=a[i];
    }
}
for(int pos=1;max/pos>0;pos*=10){
    counting(a,n,pos);
}
}

void main(){
int a[]={300,200,2,500,700,800,999,342,676,888};
int n=sizeof(a)/sizeof(a[0]);
redixsort(a,n);
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}

}
