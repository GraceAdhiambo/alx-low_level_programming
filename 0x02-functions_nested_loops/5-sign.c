#include "main.h"
/**
  * print_sign - prints sign
  * @n: parameter
  * Return: 1 if greater than 0
  * and 0 if equal to zero
  * return -1if otherwise
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
