/*
Two elements A[i] and A[j] form an inversion if A[i] > A[j] and i < j.
A : [2, 4, 1, 3, 5]
Output : 3
the 3 inversions are (2, 1), (4, 1), (4, 3).
*/

#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right)
{
	int i, j, k;
	int inv_count = 0;

	i = left;
	j = mid;
	k = left;

	while ((i <= mid - 1) and (j <= right))
	{
		if (arr[i] <= arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
			inv_count += (mid - i);
		}
	}
	while (i <= mid - 1)
		temp[k++] = arr[i++];
	while (j <= right)
		temp[k++] = arr[j++];

	for (int i = left; i <= right; i++)
		arr[i] = temp[i];

	return inv_count;
}

int _mergeSort(int arr[], int temp[], int left, int right)
{
	int mid, inv_count = 0;
	if (left < right)
	{
		mid = (left + right) / 2;

		inv_count += _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid + 1, right);

		inv_count += merge(arr, temp, left, mid + 1, right);
	}
	return inv_count;
}

int main()
{
	int arr[] = {5, 3, 2, 4, 1};
	int n = 5;

	int temp[n];
	cout << _mergeSort(arr, temp, 0, n - 1);
	return 0;
}
