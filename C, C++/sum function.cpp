#include<iostream>
using namespace std;
int add(int a,int b)
{
    int sum =a+b;

    return sum;
}
int main()
{

    int p,q;
    cout<<"\n Enter two numbers:";
    cin>>p>>q;
    cout<<add(p,q);
    return 0;
}
