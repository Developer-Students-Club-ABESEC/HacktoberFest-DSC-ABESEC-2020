#include <iostream>
#include <algorithm>
using namespace std;
void display(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
int main ()
{
    int num, i;
    cout<<"Enter number of elements to be inserted: ";
    cin>>num;
    int myints[num];
    for (i = 0; i < num; i++)
    {
        cout<<"Enter "<<i + 1<<" element: ";
        cin>>myints[i];
    }
    sort (myints, myints + num);
    reverse (myints, myints + num);
    cout << "The "<<num<<"! possible permutations with ";
    cout<<num<<" elements: "<<endl;
    do
    {
        display(myints, num);
    }
    while (prev_permutation(myints, myints + num));
    return 0;
}
