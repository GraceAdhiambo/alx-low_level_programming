#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number to be changed
 * @index: index
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
