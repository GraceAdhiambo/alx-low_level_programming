#include "main.h"
/**
  * get_bit - returns value of bit at given idx
  * @n: num
  * @index: index
  * Return: bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
