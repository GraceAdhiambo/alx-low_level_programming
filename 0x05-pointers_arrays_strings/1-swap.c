#include "main.h"
/**
  * swap_int - swaps the value of integers
  * @a: parameter 1
  * @b: parameter 2
  * Return: returns nothing
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
