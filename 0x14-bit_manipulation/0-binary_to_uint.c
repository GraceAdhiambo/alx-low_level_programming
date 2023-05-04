#include "main.h"
/**
  * binary_to_uint - converts binary to int
  * @b: pointer to string
  * Return: converted no.
  */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int converted_num  = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		converted_num = 2 * converted_num + (b[n] - '0');
	}
	return (converted_num);
}
