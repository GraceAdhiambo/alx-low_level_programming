#include "main.h"
/**
  * print_last_digit - prints the last digit of a num
  * @a: parameter
  * Return: always b
  */
int print_last_digit(int i)
{
	int k;

	k = i % 10;

	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
