#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * @n: num1
 * @m: num2
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, value = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		now = exclusive >> j;
		if (now & 1)
			value++;
	}
	return (value);
}
