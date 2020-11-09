#include <stdio.h> 
#include <stdlib.h> 
void merge(int arr[], int f, int m, int l) 
{ 
	int i, j, k; 
	int a = m - f + 1; 
	int b = l - m;
	int F[a], L[b]; 
	for (i = 0; i < a; i++) 
		F[i] = arr[f + i]; 
	for (j = 0; j < b; j++) 
		L[j] = arr[m + 1 + j]; 
	i = 0; 
	j = 0;
	k = f;
	while (i < a && j < b) 
	{ 
		if (F[i] <= L[j])
		{ 
			arr[k] = F[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = L[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < a) 
	{ 
		arr[k] = F[i]; 
		i++; 
		k++; 
	} 
	while (j < b)
	{ 
		arr[k] = L[j]; 
		j++; 
		k++; 
	} 
}
void mergeSort(int arr[], int f, int l) 
{ 
	if (f < l) 
	{ 
		int m = f + (l - l) / 2; 
		mergeSort(arr, f, m); 
		mergeSort(arr, m + 1, l); 
		merge(arr, f, m, l); 
	} 
}
void printArray(int A[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
}
int main() 
{ 
	int arr[20], i ;
	int n ; 
	printf("Enter the size of an array: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i < n;i++)
        scanf("%d",&arr[i]);
	printf("Given array is \n"); 
	printArray(arr, n); 
	mergeSort(arr, 0, n - 1); 
	printf("\nSorted array is \n"); 
	printArray(arr, n); 
	return 0; 
}
