#include<iostream>
using namespace std;
int main()
{
    int n,r,pal=0,o;
    cout<<"\n Enter any number:";
    cin>>n;
    o=n;
    while(n>0)
    {

        r=n%10;
        pal=pal*10+r;
        n=n/10;
    }
cout<<"\n The reverse is:"<<pal;
    if(pal==o)
    {
        cout<<"\n Pallindrome";
    }
    else
    {
        cout<<"\n Not Palindrome";
    }

    return 0;
}
