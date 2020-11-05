#include<iostream>

using namespace std;


int main(){

    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;

    cout<<"MATRIX A"<<endl<<"enter the number of rows:";
    cin>>r1;
    cout<<"enter the no. of columns:";
    cin>>c1;
    
    cout<<"MATRIX B"<<endl<<"enter the number of rows:";
    cin>>r2;
    cout<<"enter the no. of columns:";
    cin>>c2;

    if(r2==c2){

        for(int i=0;i<r1;i++){
            
            for(int j=0;i<c1;j++){
                cout<<"element"<<i<<j;
                cin>>a[i][j];
            }
        }

        for(int i=0;i<r1;i++){
            
            for(int j=0;i<c1;j++){
                cout<<"element"<<i<<j;
                cin>>b[i][j];
            }
        }

        //multiplication

        for(int i=0;i<r2;i++){
            for(int j=0;j<c1;j++){

                for(int k=0;k<c1;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        
        for(int i=0;i<r1;i++){
            
            for(int j=0;i<c1;j++){
                cout<<c[i][j];

            }
        }
    } 

    
    else{

        cout<<"matrix multiplication not possible";
    }

    

    return 0;
}
