#include<stdio.h>

int insertElement(int arr[], int elements, int key, int size)
{

if (elements >= size)
return elements;

arr[elements] = key;
return (elements + 1);
}

int main()
{
int array[20] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]);
int elements = 6;
int i, key = 32;
printf("n Before Insertion: ");
for (i = 0; i < elements; i++)
printf("%d  ", array[i]);

elements = insertElement(array, elements, key, size);
printf("n After Insertion: ");
for (i = 0; i < elements; i++)
printf("%d  ",array[i]);
return 0;
}
