#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter the number:";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"\n The factorial is :"<<fact;

    return 0;
}
