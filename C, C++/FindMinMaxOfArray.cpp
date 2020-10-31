#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 45, 54, 71, 76, 12 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nMin Element = "
         << *min_element(arr, arr + n);
 
    cout << "\nMax Element = "
         << *max_element(arr, arr + n);
    return 0;
}
