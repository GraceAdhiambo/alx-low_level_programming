#include "main.h"
/**
  * factorial - reurns factorial of a number
  * @n: number
  * Return: 1 if n is 0, -1 if n is <0
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
