#include "main.h"
/**
  * print_last_digit - prints the last digit of a num
  * @a: parameter
  * Return: always b
  */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
	{
		b = -a;
	}
	_putchar(b + '0');
	return (b);
}
