#include "main.h"
/**
   * reverse_array - swaps elements of an array
   * @a: array
   * @n: number of elements in array
   * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[i - 1 - i] = j;
	}
}
