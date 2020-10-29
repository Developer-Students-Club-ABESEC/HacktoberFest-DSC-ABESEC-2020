#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,l,O;
    int sum=0;
    cout<<"ENTER NUMBER: ";
    cin>>n;
    O=n;
    while(n>0)
    {
        l=n%10;
        sum=sum+pow(l,3);
        n=n/10;
    }
      if(sum=O)
      {
          cout<<"Armstrong";
      }
      else
      {
          cout<<"Not Armstrong";
      }


    return 0;
}
