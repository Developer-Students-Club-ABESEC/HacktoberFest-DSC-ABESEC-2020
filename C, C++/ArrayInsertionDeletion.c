#include<stdio.h>
void main ()
{
  int a[200], size, data, pos;
  printf ("Enter the number of elements in array\n");
  scanf ("%d", &size);
  printf ("Enter the elements of array\n");
  for (int i = 0; i < size; i++)
    scanf ("%d", &a[i]);
  printf ("\nEnter the element to be inserted\n");
  scanf ("%d", &data);
  printf ("\nEnter the position at which the element is to be inserted\n");
  scanf ("%d", &pos);
  if ((size + 1) > 20)
    printf ("\nStack Overflow\n");
  else if (pos > size)
    printf ("\nInvalid location entered\n");
  else
    {
      int i;
      for (i = size; i > pos; i--)
	a[i] = a[i - 1];
      a[pos] = data;
      size++;
    }
  printf ("\nArray after insertion: ");
  for (int i = 0; i < size; i++)
    printf ("%d ", a[i]);
  printf ("\n\nEnter the position at which deletion is to be performed\n");
  scanf ("%d", &pos);
  if (pos > size)
    printf ("\nInvalid location entered\n");
  else
    {
      for (int i = pos; i < size - 1; i++)
	a[i] = a[i + 1];
      size--;
    }
  printf ("\nArray after deletion: ");
  for (int i = 0; i < size; i++)
    printf ("%d ", a[i]);
  printf ("\n");
}
