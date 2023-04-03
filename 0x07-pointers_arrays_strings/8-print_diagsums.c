#include "main.h"
#inclide <stdio.h>
/**
  * print_diagsums - prints sum of two diagonals
  * @a: array row
  * @size: column
  * Return: 0
  */
void print_diagsums(int *a, int size)
{
	int i, j;

	if (*a == size)
	{
		for (i = 0; i < *a; i++)
		{
			for (j =0; j < size; j++)
				if (i == j)
					sum = sum + *a[i][j];
		}

