#include<iostream>
using namespace std;
int main()
{ int n,sum=0;
cout<<"\n Enter the number of terms:";
cin>>n;
for(int i=n;i>=1;i--)
{
    sum=sum+i;
}
cout<<"\n The sum is:"<<sum;
return 0;
}
