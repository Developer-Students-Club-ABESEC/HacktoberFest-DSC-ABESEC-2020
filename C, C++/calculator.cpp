#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,ans;
    int choice;



    cout<<"\n Enter the numbers:";
    cin>>a>>b;
    cout<<"\n 1-Addition \n 2-Subtraction \n 3-Multiplication \n 4-Division \n 5-Power \n 6-Logarithm \n 7-Invalid operation \n Enter choice : ";


    cin>>choice;

    switch(choice)
        {
        case 1:
            ans=a+b;
            cout<<"\Addition : "<<ans;
            break;
        case 2:
            ans=a-b;
            cout<<"\Subtraction :"<<ans;
            break;
        case 3:
            ans=a*b;
            cout<<"\Multiplication :"<<ans;
            break;
        case 4:
            ans=a-b;
            cout<<"\Division:"<<ans;
            break;
        case 5:
            ans=pow(a,b);
            cout<<"\Power:"<<ans;
            break;
        case 6:
            ans=log(a)-log(b);
            cout<<"\Logarithm : "<<ans;
            break;

        default:
            cout<<"\ Enter valid choice";
        }







    return 0;
}
