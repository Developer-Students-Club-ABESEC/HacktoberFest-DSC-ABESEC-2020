#include<iostream>

using namespace std;


int main(){

    char f[]="findings";
    int h[26];

    for(int k=0;k<26;k++){

        h[k]=0;
    }

    for(int i=0; f[i]!='\0';i++){

        h[f[i]-97]+=1;
    }

    for(int i=0;i<26;i++){

        if(h[i]>1){

            cout<<i+97<<'\n';
            cout<<h[i]<<"times";
        }
    }

    return 0;
}
