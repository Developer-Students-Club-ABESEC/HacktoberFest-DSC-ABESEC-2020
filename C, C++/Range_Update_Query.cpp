//Range Update query in O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of element: ";
	cin >> n;
	int array[n];
	int diffArray[n + 1];
	for (int i = 0; i < n; i++)//take input for array
	{
		cin >> array[i];
		if (i == 0)//creating differance array
		{
			diffArray[i] = array[i];
		}
		else {
			diffArray[i] = array[i] - array[i - 1];
		}
	}
	cout << "Enter lower, upper index and updation value ";
	int lindex, uindex, value;
	cin >> lindex >> uindex >> value;
	diffArray[lindex] += value;
	diffArray[uindex + 1] -= value;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			array[i] = diffArray[i];
			cout << array[i] << " ";
		}
		else
		{
			array[i] = array[i - 1] + diffArray[i];
			cout << array[i] << " ";
		}
	}
}
