#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"\n Enter any number:";
    cin>>n;
    cout<<"\n Digits are: ";
    while(n>0)
    {
       a=n%10;
       cout<<a<<"\n";
       n=n/10;

    }

    return 0;
}
